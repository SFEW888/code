//数的划分 
//#include <iostream>
//
//using namespace std;
//
//int n, k;
//int path, ret;
//
//void dfs(int pos, int begin)
//{
//	if(pos == k)
//	{
//		if(path == n) ret++;
//		return;
//	}
//	
//	for(int i = begin; i <= n; i++)
//	{
//		if(path + i * (k - pos) > n) return;
//		
//		path += i;
//		dfs(pos + 1, i);
//		path -= i;
//	}
//}
//
//int main()
//{
//	cin >> n >> k;
//	
//	dfs(0, 1);
//	
//	cout << ret << endl;
//	
//	return 0;
//}




//小猫爬山 
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 20;

int n, w;
int c[N];//小猫信息

int cnt;//当前用多少车 
int s[N]; //每一辆车重量

int ret = N;

bool cmp(int a, int b)
{
	return a > b;
}

void dfs(int pos)
{
	//最优性剪枝 
	if(cnt >= ret) return;
	
	if(pos > n)
	{
		ret = cnt;
		return;
	}
	
	//先安排已有的车 
	for(int i = 1; i <= cnt; i++)
	{
		if(s[i] + c[pos] > w) continue;
		s[i] += c[pos];
		dfs(pos + 1);
		s[i] -= c[pos];//恢复现场 
	}
	
	//重开一辆
	cnt++;
	s[cnt] = c[pos];
	dfs(pos + 1);
	//恢复现场 
	s[cnt] = 0;
	cnt--; 
}

int main()
{
	cin >> n >> w;
	for(int i = 1; i <= n; i++) cin >> c[i];
	
	//优化搜索顺序
	sort(c + 1, c + 1 + n, cmp); 
	
	dfs(1);
	
	cout << ret << endl;
	
	return 0;
}
 



