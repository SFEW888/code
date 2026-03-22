//选数
//#include <iostream>
//
//using namespace std;
//
//const int N = 25;
//
//int n, k;
//int a[N];
//
//int ret;
//int path;//记录路径中所选择的数的和
//
//int isprime(int x)
//{
//	if(x <= 1) return false;
//	//试除法
//	for(int i = 2; i <= x / i; i++)
//	{
//		if(x % i == 0) return false;
//	} 
//	
//	return true;
//}
//
//void dfs(int pos, int begin)
//{
//	if(pos > k)
//	{
//		if(isprime(path)) ret++;
//		return;
//	}
//	
//	for(int i = begin; i <= n; i++)
//	{
//		path += a[i];
//		dfs(pos + 1, i + 1);
//		path -= a[i];//恢复现场 
//	}
//} 
//
//int main()
//{
//	cin >> n >> k;
//	for(int i = 1; i <= n; i++) cin >> a[i];
//	
//	dfs(1, 1);
//	
//	cout << ret << endl;
//}





//飞机降落
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//const int N = 15; 
//
//int n;
//int t[N], d[N], l[N];
//
//bool st[N];// 标记路径中哪些?机已经摆放过
//
//bool dfs(int pos, int end)//pos当前飞机在什么位置，end上一架飞机的结束位置
//{
//	if(pos > n)
//	{
//		return true;
//	}
//	
//	for(int i = 1; i <= n; i++)
//	{
//		if(st[i] == true) continue;
//		if(end > t[i] + d[i]) continue;
//		int newend = max(t[i], end) + l[i];
//		st[i] = true;
//		if(dfs(pos + 1, newend)) return true;//只有一个成立就返回正确 
//		st[i] = false;//回复现场 
//	}
//	
//	return false;
//} 
//
//int main()
//{
//	int T; cin >> T;
//	
//	while(T--)// 多组测试数据的时候，一定要注意清空数据
//	{
//		memset(st, 0, sizeof st);
//		cin >> n;
//		for(int i = 1; i <= n; i++) cin >> t[i] >> d[i] >> l[i];
//		
//		if(dfs(1, 0)) cout << "YES" << endl;
//		else cout << "NO" << endl;
//	}
//	
//	return 0;
//} 





//八皇后
#include <iostream>
#include <vector>

using namespace std; 

const int N = 15;

int n;
bool col[N], st1[N * 2], st2[N * 2];

int ret;
vector<int> path;//标记每一行怎么放

void dfs(int x)
{
	if(x > n)
	{
		ret++;
		if(ret <= 3)
		{
			for(auto x : path) cout << x << " ";
			cout << endl;
		}
		return;
	}
	
	for(int y = 1; y <= n; y++)
	{
		if(col[y] || st1[y - x + n] || st2[y + x]) continue;//剪枝
		col[y] = st1[y - x + n] = st2[y + x] = true;
		path.push_back(y);
		dfs(x + 1);
		col[y] = st1[y - x + n] = st2[y + x] = false;//回退 
		path.pop_back();//回退 
	}
}

int main()
{
	cin >> n;
	
	dfs(1);
	
	cout << ret << endl;
	
	return 0;
} 

 








































































