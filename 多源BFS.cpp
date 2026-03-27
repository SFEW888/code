//矩阵距离
#include <iostream>
#include <queue> 
#include <cstring>

using namespace std;

typedef pair<int, int> PII;

const int N = 1010;

int n, m;
char a[N][N];//用int的话0001等会当成一个数看
int dist[N][N];

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

void bfs()
{
	memset(dist, -1, sizeof dist);
	queue<PII> q;
	//所有起点加入队列中
	for(int i = 1; i <= n; i++)
	    for(int j = 1; j <= m; j++)
		    if(a[i][j] == '1')
			{
				q.push({i, j});
				dist[i][j] = 0;
			} 
			
	while(q.size())
	{
		auto t = q.front(); q.pop();
		int i = t.first, j = t.second;
		for(int k = 0; k < 4; k++)
		{
			int x = i + dx[k], y = j + dy[k];
			
			if(x >= 1 && x <= n && y >= 1 && y <= m && dist[x][y] == -1)
			{
				dist[x][y] = dist[i][j] + 1;
				q.push({x, y});
			}
		}
	}		
}

int main()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	    for(int j = 1; j <= m; j++)
	        cin >> a[i][j];
	        
	bfs();
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			cout << dist[i][j] << " ";
		}
		cout << endl;
	}        
	return 0;
}  





//刺杀大使
#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

typedef pair<int, int> PII;

const int N = 1010;

int n, m;
int p[N][N];
bool st[N][N];//不走重复路线 

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

//最大伤害值是mid的时候，能否通过防御迷阵 
bool bfs(int mid)
{
	memset(st, 0, sizeof st);
	queue<PII> q;
	
	//把所有源点加入队列 
	for(int j = 1; j <= m; j++) 
	{
		q.push({1, j});
		st[1][j] = true;
	}
	
	while(q.size())
	{
		auto t = q.front(); q.pop();
		int i = t.first, j = t.second;
		for(int k = 0; k < 4; k++)
		{
			int x = i + dx[k], y = j + dy[k];
			if(x >= 1 && x<= n && y >= 1 && y <= m && p[x][y] <= mid && st[x][y] == false)
			{
				st[x][y] = true;
				q.push({x, y});
				if(x == n) return true;
			} 
		}
	}
	return false;
}

int main()
{
	cin >> n >> m;
	int l = 0, r = 0;
	for(int i = 1; i <= n; i++)
	    for(int j = 1; j <= m; j++)
	    {
	    	cin >> p[i][j];
	    	r = max(r, p[i][j]);
		}
		
	while(l < r)
	{
		int mid = (l + r) / 2;
		if(bfs(mid)) r = mid;
		else l = mid + 1;
	}	
	cout << l << endl;
	
	return 0;
} 



