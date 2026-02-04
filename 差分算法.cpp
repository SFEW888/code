//差分 
#include <iostream>

using namespace std;

const int N = 1e5 + 10;

typedef long long LL;

int n, m;
LL f[N];

int main()
{
	cin >> n >> m;
	//创建差分数组
	for(int i = 1; i <= n; i++)
	{
		LL x; cin >> x;
		f[i] += x;
		f[i + 1] -= x;
	 } 
	
	//处理m次修改
	while(m--)
	{
		LL l, r, k; cin >> l >> r >> k;
		f[l] += k; f[r + 1] -= k;
	 } 
	
	//还原原始数组
	for(int i = 1; i <= n; i++)
	{
		f[i] = f[i - 1] + f[i];
		cout << f[i] << ' ';
	 } 
	
	return 0; 
 } 




//海底高铁
#include <iostream>

using namespace std;

const int N = 1e5 + 10;

typedef long long LL;

int n, m;
LL f[N];//差分数组

int main()
{
	cin >> n >> m;
	
	int x; cin >> x;
	for(int i = 2; i <= m; i++)
	{
		int y; cin >> y;
		if(x > y) f[x]--, f[y]++;
		else f[x]++, f[y]--;
		x = y;
	}
	
	//利用差分数组还原原数组
	for(int i = 1; i <= n; i++) f[i] += f[i - 1];
	
	LL ret = 0;
	for(int i = 1; i < n; i++)
	{
		LL a, b, c; cin >> a >> b >> c;
		ret += min(a * f[i], b * f[i] + c);
	 } 
	 
	cout << ret << endl; 
	
	return 0;
 } 




//二维差分
#include <iostream>

using namespace std;

typedef long long LL;

const int N = 1010;

int n, m, q;
LL f[N][N];

void insert(int x1, int y1, int x2, int y2, LL k)
{
	f[x1][y1] += k; f[x1][y2 + 1] -= k; f[x2 + 1][y1] -= k; f[x2 + 1][y2 + 1] += k;
}

int main()
{
	cin >> n >> m >> q;
	
	//预处理差分矩阵
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			LL x; cin >> x;
			//[i,j]为左上角，[i,j]为右下角的矩阵，加上x
			insert(i, j, i, j, x); 
		}
	 } 
	
	//处理q次修改
	while(q--)
	{
		LL x1, y1, x2, y2, k; cin >> x1 >> y1 >> x2 >> y2 >> k;
		insert(x1, y1, x2, y2, k);
	 } 
	
	//利用前缀和还原
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + f[i][j];
			cout << f[i][j] << " "; 
		}
		cout << endl;
	 }
        return 0; 
 } 




//地毯
#include <iostream>

using namespace std;

const int N = 1010;

int n, m;
int f[N][N];//差分矩阵

void insert(int x1, int y1, int x2, int y2, int k)
{
	f[x1][y1] += k; f[x1][y2 + 1] -= k; f[x2 + 1][y1] -= k; f[x2 + 1][y2 + 1] += k;
}

int main()
{
	cin >> n >> m;
	
	//创建差分数组
	while(m--)
	{
		int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
		insert(x1, y1, x2, y2, 1);
	 }
	
	//前缀和还原
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + f[i][j];
			cout << f[i][j] << " ";
		}
		cout << endl;
	  }  
	  return 0;
 } 









































 






















