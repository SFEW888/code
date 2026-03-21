//枚举子集
#include <iostream>

using namespace std;

int n;
string path;//记录每一步决策

void dfs(int pos)//pos是进行到哪一个位置
{
	if(pos > n)
	{
		cout << path << endl;
		return;
	}
	
	//不选
	path += 'N';
	dfs(pos + 1);
	path.pop_back();//回溯，清空现场
	
	//选
	path += 'Y';
	dfs(pos + 1);
	path.pop_back(); 
} 

int main()
{
	cin >> n;
	
	dfs(1);
	
	return 0;
} 





//组合型枚举
//代码一
#include <iostream> 
#include <vector>

using namespace std;

int n, m;
vector<int> path;

void dfs(int pos, int begin)//pos表示当前位置，begin表示该从哪个数开始
{
	if(pos > m)
	{
		for(auto x : path) cout << x << " ";
		cout << endl;
		return;
	}
	
	for(int i = begin; i <= n; i++)
	{
		path.push_back(i);
		dfs(pos + 1, i + 1);
		path.pop_back();
	}
} 

int main()
{
	cin >> n >> m;
	
	dfs(1, 1);
	
	return 0;
}

//代码二
#include <iostream> 
#include <vector>

using namespace std;

int n, m;
vector<int> path;
//path.size();可以知道在什么位置 

void dfs(int begin)//pos表示当前位置，begin表示该从哪个数开始
{
	if(path.size() == m)
	{
		for(auto x : path) cout << x << " ";
		cout << endl;
		return;
	}
	
	for(int i = begin; i <= n; i++)
	{
		path.push_back(i);
		dfs(i + 1);
		path.pop_back();
	}
} 

int main()
{
	cin >> n >> m;
	
	dfs(1);
	
	return 0;
}





//枚举排列
#include <iostream>
#include <vector>

using namespace std;

const int N = 15;

int n, k;
vector<int> path;
bool st[N];

void dfs()
{
	if(path.size() == k)
	{
		for(auto x : path) cout << x << " ";
		cout << endl;
		return;
	}
	
	for(int i = 1; i <= n; i++)
	{
		if(st[i]) continue;
		path.push_back(i);
		st[i] = true;
		dfs();
		path.pop_back();
		st[i] = false;
	}
}

int main()
{
	cin >> n >> k;
	
	dfs();
	
	return 0;
}






//全排列问题
#include <iostream>
#include <vector>

using namespace std;

const int N = 15;

int n;
bool st[N];
vector<int> path;

void dfs()
{
	if(path.size() == n)
	{
		for(auto x : path) 
		{
			printf("%5d", x);
		}
		cout << endl;
		return;
	}
	
	for(int i = 1; i <= n; i++)
	{
		if(st[i]) continue;
		
		path.push_back(i);
		st[i] = true;
		dfs();
		path.pop_back();
		st[i] = false;
	}
}

int main()
{
	cin >> n;
	
	dfs();
	
	return 0;
} 

















