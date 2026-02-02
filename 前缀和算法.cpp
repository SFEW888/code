//前缀和
//#include <iostream>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//
//typedef long long LL;
//
//int n, q;
//LL a[N];
//LL f[N];//前缀和数组
//
//int main()
//{
//	cin >> n >> q;
//	for(int i = 1; i <= n; i++) cin >> a[i];
//	
//	//处理前缀和
//	for(int i = 1; i <= n; i++)
//	{
//		f[i] = f[i - 1] + a[i];
//	 } 
//	 
//	//处理q次询问
//	while(q--)
//	{
//		int l, r; cin >> l >> r;
//		cout << f[r] - f[l - 1] << endl;
//	 } 
//	return 0; 
// }  




//最大字段和
//#include <iostream>
//
//using namespace std;
//
//typedef long long LL;
//
//const int N = 2e5 + 10;
//
//int n;
//LL f[N];//前缀和数组
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++)
//	{
//		LL x; cin >> x;
//		f[i] = f[i - 1] + x;
//	}
//	
//	LL ret = -1e20;
//	LL prevmin = 0;
//	
//	for(int i = 1; i <= n; i++)
//	{
//		ret = max(ret, f[i] - prevmin);
//		prevmin = min(prevmin, f[i]);
//	}
//	cout << ret << endl;
// } 



//二维前缀和
//#include <iostream>
//
//using namespace std;
//
//typedef long long LL;
//
//const int N = 1010;
//
//int n, m, q;
//LL f[N][N];
//
//int main()
//{
//	cin >> n >> m >> q;
//	
//	//预处理前缀和矩阵 
//	for(int i = 1; i <= n; i++)
//	{
//		for(int j = 1; j <= m; j++)
//		{
//			LL x; cin >> x;
//			f[i][j] = f[i -1][j] + f[i][j - 1] - f[i - 1][j - 1] + x;
//		}
//	}
//	
//	//处理q查询
//	while(q--)
//	{
//		int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
//		cout << f[x2][y2] - f[x1 - 1][y2] - f[x2][y1 - 1] + f[x1 - 1][y1 - 1] << endl; 
//	 } 
//	 
//	 return 0;
// } 




//激光炸弹 
//#include <iostream>
//
//using namespace std;
//
//const int N = 5010;
//
//int n, m;
//int a[N][N];
//int f[N][N];//前缀和
//
//int main()
//{
//	cin >> n >> m;
//	while(n--)
//	{
//		int x, y, v; cin >> x >> y >> v;
//		x++, y++;//下标从1开始
//		a[x][y] += v;//同一个位置可能有多个目标 
//	}
//	
//	//预处理
//	n = 5001;
//	 for(int i = 1; i <= n; i++)
//    {
//        for(int j = 1; j <= n; j++)
//        {
//            f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + a[i][j];
//        }
//    }
//    int ret = 0;
//    m = min(m, n); // 如果 m 很大，相当于就是把整个区域全部摧毁 
//    // 枚举所有边?为 m 的正方形 
//    for(int x2 = m; x2 <= n; x2++)
//    {
//        for(int y2 = m; y2 <= n; y2++)
//        {
//            int x1 = x2 - m + 1, y1 = y2 - m + 1;
//            ret = max(ret, f[x2][y2] - f[x1 - 1][y2] - f[x2][y1 - 1] + f[x1 - 1][y1 - 1]);
//        }
//    }
//    cout << ret << endl;
//    return 0;
//} 
  


//AT_agc023_a [AGC023A] Zero-Sum Ranges
//暴力求解
//#include <iostream>
//using namespace std;
//
//const int N = 200010;  
//
//typedef long long LL;
//
//int n;
//LL a[N];
//
//int main()
//{
//    cin >> n;
//    for(int i = 1; i <= n; i++) cin >> a[i];
//    
//    LL cnt = 0;  
//    
//    for(int i = 1; i <= n; i++)
//    {
//        LL sum = 0;
//        for(int j = i; j <= n; j++)
//        {
//            sum += a[j];
//            if(sum == 0) cnt++;
//        }
//    }
//    
//    cout << cnt << endl;
//    return 0;
//} 


#include <iostream>
#include <unordered_map>
using namespace std;

const int N = 2e5 + 10;
typedef long long LL;

int n;
LL a[N];
LL f[N];

int main()
{
    cin >> n;
    
    for(int i = 1; i <= n; i++) 
        cin >> a[i];
    
    f[0] = 0;
    for(int i = 1; i <= n; i++)
        f[i] = f[i - 1] + a[i];
    
    // 统计每个前缀和出现的次数
    unordered_map<LL, int> count;
    for(int i = 0; i <= n; i++)  
        count[f[i]]++;
    
    // 计算组合数 C(k,2) = k*(k-1)/2
    LL cnt = 0;
    for(auto& kv : count) {
        LL k = kv.second;
        cnt += k * (k - 1) / 2;
    }
    
    cout << cnt << endl;
    
    return 0;
}







































