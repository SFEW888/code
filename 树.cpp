#include <iostream>
#include <vector>

using namespace std;

const int N = 1e5 + 10;

int n;
vector<int> edges[N];

int main()
{
	cin >> n;
	for(int i = 1; i < n; i++)
	{
		int a, b; cin >> a >> b;
		//a和b之间有一条边
		edges[a].push_back(b);
		edges[b].push_back(a); 
	}
  return 0;
}



#include <iostream>

using namespace std;

const int N = 1e5 + 10;

int h[N], e[N * 2], ne[N * 2], id;
int n;

void add(int x, int y)
{
	id++;
	e[id] = y;
	ne[id] = h[x];
	h[x] = id;
}

int main()
{
	cin >> n;
	for(int i = 1; i < n; i++)
	{
		int a, b; cin >> a >> b;
		//a和b之间有一条边
		add(a, b);
		add(b, a); 
	}
	return 0;
}





//dfs

//1.vector
#include <iostream>
#include <vector>

using namespace std;

const int N = 1e5 + 10;

int n;
vector<int> edges[N]; //edges[i]保存着i号节点相连的所有点 
bool st[N];//标记已经遍历过的节点 

//遍历到u这个树 
void dfs(int u)
{
	cout << u << " ";
	st[u] = true;//标记已经访问过 
	
	//访问子树
	for(auto v : edges[u])
	{
		if(!st[v]) dfs(v);
	 } 
}

int main()
{
	//建图
	cin >> n;
	for(int i = 1; i < n; i++)
	{
		int a, b; cin >> a >> b;
		edges[a].push_back(b);
		edges[b].push_back(a);
	 } 
	 
	//深度优先遍历
	dfs(1);
	
	return 0; 
}

//2.链式前向星
#include <iostream>

using namespace std;

const int N = 1e5 + 10;

int h[N], e[N * 2], ne[N * 2], id;
int n;
bool st[N];

void add(int x, int y)
{
	id++;
	e[id] = y;
	ne[id] = h[x];
	h[x] = id;
}

void dfs(int u)
{
	cout << u << " ";
	st[u] = true;
	
	for(int i = h[u]; i; i = ne[i])
	{
		int v = e[i];
		if(!st[v]) dfs(v);
	}
}

int main()
{
	cin >> n;
	for(int i = 1; i < n; i++)
	{
		int a, b; cin >> a >> b;
		
		add(a, b);
		add(b, a); 
	}
	
	dfs(1); 
	
	return 0;
} 




//bfs

//1.vector
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int N = 1e5 + 10;

int n;
vector<int> edges[N];
bool st[N];

void bfs()
{
	queue<int> q;
	q.push(1);
	st[1] = true;
	
	while(q.size())
	{
		//队列不为空时，拿出对头元素 
		auto u = q.front(); q.pop();
		cout << u << " ";
		
		//让孩子入队
		for(auto v : edges[u])
		{
			if(!st[v])
            {
                q.push(v);
                st[v] = true;
            }
		 } 
	}
}

int main()
{
	cin >> n;
	
	for(int i = 1; i < n; i++)
	{
		int a, b; cin >> a >> b;
		edges[a].push_back(b);
		edges[b].push_back(a);
	}
	bfs();
	
	return 0;
 } 

//2.链式前向星
#include <iostream>
#include <queue>

using namespace std;

const int N = 1e5 + 10;

int n;
int h[N], e[N * 2], ne[N * 2], id;
bool st[N];

void add(int a, int b)
{
	id++;
	e[id] = b;
	ne[id] = h[a];
	h[a] = id;
}

void bfs()
{
	queue<int> q;
	q.push(1);
	st[1] = true;
	
	while(q.size())
	{
		auto u = q.front(); q.pop();
		cout << u << " ";
		
		for(int i = h[u]; i; i = ne[i])
		{
			int v = e[i];
			if(!st[v]) 
			{
				q.push(v);
				st[v] = true; 
			}
		}
	}
}

int main()
{
	cin >> n;
	for(int i = 1; i < n; i++)
	{
		int a, b; cin >> a >> b;
		add(a, b);
		add(b, a);
	}
	bfs();
	return 0; 
 } 




















































  
