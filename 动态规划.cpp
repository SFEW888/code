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






























