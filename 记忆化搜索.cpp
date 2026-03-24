//斐波那契数
//class Solution {
//    int f[35];//备忘录
//public:
//    int fib(int n) {
//        memset(f, -1, sizeof f);
//
//        return dfs(n);
//    }
//
//    int dfs(int n) {
//        
//        if(f[n] != -1) return f[n];
//
//        if(n == 0 || n == 1) return n;
//
//        f[n] = dfs(n - 1) + dfs(n - 2);
//        return f[n];
//    }
//};





//Function
//#include <iostream>
//
//using namespace std;
//
//typedef long long LL;
//
//const int N = 25;
//
//LL a, b, c;
//LL f[N][N][N];//备忘录
//
//LL dfs(LL a, LL b, LL c)
//{
//	if(a <= 0 || b <= 0 || c <= 0) return 1;
//	if(a > 20 || b > 20 || c > 20) return dfs(20, 20, 20);
//	
//	if(f[a][b][c]) return f[a][b][c];
//	
//	if(a < b && b < c) return f[a][b][c] = dfs(a, b, c -1) + dfs(a, b - 1, c - 1) - dfs(a, b - 1, c); 
//	else return f[a][b][c] = dfs(a - 1, b, c) + dfs(a - 1, b - 1, c) + dfs(a - 1, b, c -1) - dfs(a - 1, b - 1, c -1);
//	
//}
//
//int main()
//{
//	while(cin >> a >> b >> c)
//	{
//		if(a == -1 && b == -1 && c == -1) break;
//		
//		printf("w(%lld, %lld, %lld) = %lld\n", a, b, c, dfs(a, b, c));
//	}
//} 





//天下第一
//#include <iostream>
//
//using namespace std;
//
//const int N = 1e4 + 10;
//
//int x, y, p;
//char f[N][N];//备忘录
//
//char dfs(int x, int y)
//{
//	if(f[x][y]) return f[x][y];
//	
//	f[x][y] = '3';
//	
//	if(x == 0) return f[x][y] = '1';
//	if(y == 0) return f[x][y] = '2';
//	
//	return f[x][y] = dfs((x + y) % p, (x + y + y) % p); 
//}
//
//int main()
//{
//	int T; cin >> T >> p;
//	while(T--)
//	{
//		cin >> x >> y;
//		char ret = dfs(x, y);
//	    if(ret == '1') cout << 1 << endl;
//	    else if(ret == '2') cout << 2 << endl;
//	    else cout << "error" << endl;
//	}
//	
//	return 0;
//} 





//滑雪
#include <iostream>

using namespace std;

const int N = 110;

int n, m;
int a[N][N];
int f[N][N];

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int dfs(int i, int j)
{
	if(f[i][j]) return f[i][j];
	
	int len = 1;
	//上下左右方向搜
	for(int k = 0; k < 4; k++)
	{
		int x = i + dx[k], y = j + dy[k];
		if(x < 1 || x > n || y < 1 || y > m) continue;
		if(a[i][j] <= a[x][y]) continue;
		
		len = max(dfs(x, y) + 1, len);
	} 
	return f[i][j] = len;
}

int main()
{
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++)
	    for(int j = 1; j <= m; j++)
	        cin >> a[i][j];
	        
    int ret = 1;
    
    for(int i = 1; i <= n; i++)
	    for(int j = 1; j <= m; j++)
	        ret = max(dfs(i, j), ret);
	
	cout << ret << endl;		 
	        
}
































































