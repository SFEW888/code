//入门
//int f[N]; // 备忘录 
//int fib(int n)
//{
//    // 搜索之前先往备忘录里面瞅瞅 
//    if(f[n] != -1) return f[n];
//    if(n == 0 || n == 1) return f[n] = n;
//    
//    // 返回之前，把结果记录在备忘录中 
//    f[n] = fib(n - 1) + fib(n - 2);
//    return f[n];
//}

//int f[N]; // f[i] 表示：第 i 个斐波那契数 
//int fib(int n)
//{
//    // 初始化前两个格子 
//    f[0] = 0; f[1] = 1;
//    // 按照递推公式计算后面的值 
//    for(int i = 2; i <= n; i++)
//    {
//        f[i] = f[i - 1] + f[i - 2];
//    }
//    // 返回结果 
//    return f[n];
//}




//下楼梯 
//#include <iostream>
//
//using namespace std;
//
//typedef long long LL;
//
//const int N = 65;
//
//int n;
//LL f[N];//f[N]表示有i个台阶的时候，一共有多少方案
//
//int main()
//{
//	cin >> n;
//	f[0] = 1, f[1] = 1, f[2] = 2;
//	for(int i = 3; i <= n; i++)
//	    f[i] = f[i - 1] + f[i - 2] + f[i - 3];
//	cout << f[n] << endl;	 
//} 

//空间优化 
//#include <iostream>
//
//using namespace std;
//
//typedef long long LL;
//
//const int N = 65;
//
//int n;
//LL f[N];//f[N]表示有i个台阶的时候，一共有多少方案
//
//int main()
//{
//	cin >> n;
//	
//	LL a = 1, b = 1, c = 2;
//	
//	for(int i = 3; i <= n; i++)
//	{
//		LL t = a + b + c;
//		a = b;
//		b = c;
//		c = t;
//	}
//	
//	if(n == 1) cout << b << endl;
//	else cout << c << endl;
//	
//	return 0;	 
//} 




//数字三角形 Number Triangles
//#include <iostream>
//
//using namespace std;
//
//const int N = 1010;
//
//int n;
//int a[N][N];
//int f[N][N];//f[i][j]表示从[1,1]到[i,j]所有方案的最大值
//
//int main()
//{
//	cin >> n;
//	
//	for(int i = 1; i <= n; i++)
//	    for(int j = 1; j <= i; j++)
//	        cin >> a[i][j];
//	
//	for(int i = 1; i <= n; i++)
//	    for(int j = 1; j <= i; j++)
//	        f[i][j] = max(f[i - 1][j], f[i - 1][j - 1]) + a[i][j];
//	
//	int ret = 0;
//	for(int j = 1; j <= n; j++)
//	    ret = max(ret, f[n][j]);
//		
//	cout << ret << endl;			        
//} 

//空间优化
//#include <iostream>
//
//using namespace std;
//
//const int N = 1010;
//
//int n;
//int a[N][N];
//int f[N];//f[i][j]表示从[1,1]到[i,j]所有方案的最大值
//
//int main()
//{
//	cin >> n;
//	
//	for(int i = 1; i <= n; i++)
//	    for(int j = 1; j <= i; j++)
//	        cin >> a[i][j];
//	
//	for(int i = 1; i <= n; i++)
//	    for(int j = i; j >= 1; j--)
//	        f[j] = max(f[j], f[j - 1]) + a[i][j];
//	
//	int ret = 0;
//	for(int j = 1; j <= n; j++)
//	    ret = max(ret, f[j]);
//		
//	cout << ret << endl;			        
//}  




//台阶问题
//#include <iostream>
//
//using namespace std;
//
//const int N = 1e5 + 10, MOD = 1e5 + 3;
//
//int n, k;
//int f[N];
//
//int main()
//{
//	cin >> n >> k;
//	
//	f[0] = 1;
//	for(int i = 1; i <= n; i++)
//	{
//		for(int j = 1; j <= k && i - j >= 0; j++)
//		{
//			f[i] = (f[i] + f[i - j]) % MOD;
//		}
//	}
//	cout << f[n] << endl;
//	
//	return 0;
//} 




//最大子段和
//#include <iostream>
//
//using namespace std;
//
//const int N = 2e5 + 10;
//
//int n;
//int f[N];
//
//int main()
//{
//	cin >> n;
//	
//	int ret = -1e9;
//	for(int i = 1; i <= n; i++)
//	{
//		int x; cin >> x;
//		f[i] = max(x, f[i - 1] + x);
//		ret = max(ret, f[i]);
//	}
//	cout << ret << endl;
//	
//	return 0;
//} 




//传球游戏
//#include <iostream>
//
//using namespace std;
//
//const int N = 40;
//
//int n, m;
//int f[N][N];//f[i][j]表示：传递i次后,落在j号同学方案数
//
//int main()
//{
//	cin >> n >> m;
//	
//	f[0][1] = 1;
//	for(int i = 1; i <= m; i++)
//	{
//		//第一个人
//		f[i][1] = f[i - 1][n] + f[i - 1][2];
//		
//		//中间同学
//		for(int j = 2; j < n; j++)
//		{
//			f[i][j] = f[i - 1][j - 1] + f[i - 1][j + 1];
//		} 
//		
//		//第n个人
//		f[i][n] = f[i - 1][n - 1] + f[i - 1][1]; 
//	}
//	
//	cout << f[m][1] << endl;
//	
//	return 0;
//} 




//乌龟棋
//#include <iostream>
//
//using namespace std;
//
//const int N = 360, M = 50;
//
//int n, m;
//int x[N], cnt[5];
//int f[M][M][M][M];
//
//int main()
//{
//	cin >> n >> m;
//	
//	for(int i = 1; i <= n; i++) cin >> x[i];
//	
//	for(int i = 1; i <= m; i++)
//	{
//		int t; cin >> t;
//		cnt[t]++;
//	}
//	
//	//初始化
//	f[0][0][0][0] = x[1];
//	for(int a = 0; a <= cnt[1]; a++)
//	    for(int b = 0; b <= cnt[2]; b++)
//	        for(int c = 0; c <= cnt[3]; c++)
//	            for(int d = 0; d <= cnt[4]; d++)
//	            {
//	            	int i = 1 + a + 2 * b + 3 * c + 4 * d;
//	            	int& t = f[a][b][c][d];
//					if(a) t = max(t, f[a - 1][b][c][d] + x[i]); 
//					if(b) t = max(t, f[a][b - 1][c][d] + x[i]);
//					if(c) t = max(t, f[a][b][c - 1][d] + x[i]);
//					if(d) t = max(t, f[a][b][c][d - 1] + x[i]);
//				}
//	
//	cout << f[cnt[1]][cnt[2]][cnt[3]][cnt[4]] << endl;
//				
//	return 0; 
//} 




//矩阵的最小路径和
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//const int N = 510;
//
//int n, m;
//int f[N][N];
//
//int main()
//{
//	cin >> n >> m;
//	
//	//初始化
//	memset(f, 0x3f, sizeof f);
//	f[0][1] = 0;
//	
//	for(int i = 1; i <= n; i++)
//	    for(int j = 1; j <= m; j++)
//		{
//			int x; cin >> x;
//			f[i][j] = min(f[i - 1][j], f[i][j - 1]) + x; 
//		}
//	
//	cout << f[n][m] << endl;
//	
//	return 0;	 
//} 



//「木」迷雾森林
//#include <iostream>
//
//using namespace std;
//
//const int N = 3010, MOD = 2333;
//
//int n, m;
//int a[N][N];
//int f[N][N];
//
//int main()
//{
//	cin >> n >> m;
//	
//	for(int i = 1; i <= n; i++)
//	    for(int j = 1; j <= m; j++)
//	        cin >> a[i][j];
//	
//	f[n][0] = 1;
//	for(int i = n; i >= 1; i--)
//	    for(int j = 1; j <= n; j++)
//		{
//			if(a[i][j] == 0)
//			{
//				f[i][j] = (f[i + 1][j] + f[i][j - 1]) % MOD;
//			}
//		}
//	
//	cout << f[1][m] << endl;
//	
//	return 0;	        
//}





//过河卒
//#include <iostream>
//
//using namespace std;
//
//typedef long long LL;
//
//const int N = 25;
//
//int n, m, a, b;
//LL f[N][N];
//
//bool check(int i, int j)
//{
//	return (i == a && j == b) || (i != a && j != b && abs(i - a) + abs(j - b) == 3);
//}
// 
//int main()
//{
//	cin >> n >> m >> a >> b;
//	n++, m++, a++, b++;
//	
//	//初始化
//	f[0][1] = 1;
//	for(int i = 1; i <= n; i++)
//	    for(int j = 1; j <= m; j++)
//		{
//			if(check(i, j)) continue;
//			f[i][j] = f[i - 1][j] + f[i][j - 1];
//		} 
//	
//	cout << f[n][m] << endl;	
//}




//方格取数
//#include <iostream>
//
//using namespace std;
//
//const int N = 15;
//
//int n;
//int a[N][N];
//int f[N * 2][N][N];
//
//int main()
//{
//	cin >> n;
//	int x, y, w;
//	while(cin >> x >> y >> w, x)
//	{
//		a[x][y] = w;
//	}
//	
//	for(int s = 2; s <= n + n; s++)
//	{
//		for(int i1 = 1; i1 <= n; i1++)
//		{
//			for(int i2 = 1; i2 <= n; i2++)
//			{
//				int j1 = s - i1, j2 = s - i2;
//				if(j1 <= 0 || j1 > n || j2 <= 0 || j2 > n) continue;
//				
//				int t = f[s - 1][i1][i2];
//				t = max(t, f[s - 1][i1][i2 - 1]);
//				t = max(t, f[s - 1][i1 - 1][i2]);
//				t = max(t, f[s - 1][i1 - 1][i2 - 1]);
//				
//				if(i1 == i2)
//				{
//					f[s][i1][i2] = t + a[i1][j1];
//				}
//				else
//				{
//					f[s][i1][i2] = t + a[i1][j1] + a[i2][j2];
//				}
//			}
//		}
//	}
//	
//	cout << f[n + n][n][n] << endl;
//	
//	return 0;
//}



//最长上升子序列
//#include <iostream>
//
//using namespace std;
//
//const int N = 5010;
//
//int n;
//int a[N];
//int f[N];
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++) cin >> a[i];
//	
//	int ret = 0;
//	for(int i = 1; i <= n; i++)
//	{
//		f[i] = 1;//长度为1的子序列
//		for(int j = 1; j < i; j++)
//		{
//			if(a[j] < a[i])
//			{
//				f[i] = max(f[i], f[j] + 1);
//			}
//		} 
//		ret = max(ret, f[i]);
//	}
//	
//	cout << ret << endl;
//	
//	return 0;
//} 




//最长上升子序列
//#include <iostream>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//
//int n;
//int a[N];
//int f[N], len;
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++) cin >> a[i];
//	
//	for(int i = 1; i <= n; i++)
//	{
//		//处理边界情况
//		if(len == 0 || a[i] > f[len]) f[++len] = a[i];
//		else
//		{
//			//二分插入
//			int l = 1, r = len;
//			while(l < r)
//			{
//				int mid = (l + r) / 2;
//				if(f[mid] >= a[i]) r = mid;
//				else l = mid + 1;
//			} 
//			f[l] = a[i];
//		} 
//	} 
//	cout << len << endl;
//	
//	return 0;
//}





//合唱队形
#include <iostream>

using namespace std;

const int N = 110;

int n;
int a[N];
int f[N], g[N];

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	
	//从左往右
	for(int i = 1; i <= n; i++)
	{
		f[i] = 1;
		for(int j = 1; j < i; j++)
		{
			if(a[j] < a[i])
			{
				f[i] = max(f[i], f[j] + 1);
			}
		}
	} 
	
	//从右往左
	for(int i = n; i >= 1; i--)
	{
		g[i] = 1;
		for(int j = n; j > i; j--)
		{
			if(a[j] > a[i])
			{
				g[i] = max(g[i], g[j] + 1);
			}
		}
	} 
	
	int ret = 0;
	for(int i = 1; i <= n; i++)
	{
		ret = max(ret, f[i] + g[i] - 1);
	}
	
	cout << n - ret << endl;
	
	return 0;
} 






















































