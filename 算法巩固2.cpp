//CF25B Phone numbers
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n; string s;
//	cin >> n >> s;
//	
//	if(n % 2) //奇数
//	{
//		for(int i = 0; i < n; i++)
//		{
//			cout << s[i];
//			if(i % 2 && i < n - 3) cout << '-';
//		}
//	} 
//	
//	else //偶数
//	{
//		for(int i = 0; i < n; i++)
//		{
//			cout << s[i];
//			if(i % 2 && i < n - 2) cout << '-';
//		}
//	} 
//	
//	return 0;
// } 



//zzc
//#include <iostream>
//
//using namespace std;
//
//typedef long long LL;
//
//int main()
//{
//	LL x, y; cin >> x >> y;
//	
//	LL sum = 0;
//	while(x && y)
//	{
//		//假设 x > y，求出最小正方形有几个 
//		LL cnt = x / y; 
//		sum += cnt * y * 4;
//		//剩余的矩形的长 
//		x %= y; 
//		//确保矩形长大于宽 
//		swap(x, y);
//	}
//	
//	cout << sum << endl;
//	
//	return 0;
//}



//信息传递
#include <iostream>
#include <queue>

using namespace std;

const int N = 2e5 + 10;

int n;
int ne[N]; //记录T
int in[N]; //记录入度信息
bool st[N]; //判断是否被标记
int cnt; 

void dfs(int i)
{
	cnt++;
	st[i] = true;
	int b = ne[i];
	if(!st[b]) dfs(b);
}

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> ne[i];
		in[ne[i]]++;
	}
	
	//1.利用拓扑排序把除环的部分的点打上标记
	queue<int> q; 
	for(int i = 1; i <= n; i++)
	{
		if(in[i] == 0)
		    q.push(i);
	}
	
	while(q.size())
	{
		auto a = q.front(); q.pop();
		st[a] = true;
		
		int b = ne[a];
		in[b]--;
		if(in[b] == 0) q.push(b);
	}
	
	//2.利用dfs计算环的大小
	int ret = n;
	for(int i = 1; i <= n; i++)
	{
		if(!st[i])
		{
			//因为可能不止一个环，所以需要初始一下环的大小 
			cnt = 0;
			dfs(i);
			ret = min(cnt, ret);
		}
	} 
	
	cout << ret << endl;
	
	return 0;
} 
 














