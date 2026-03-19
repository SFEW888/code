//汉诺塔 
//#include <iostream>
//
//using namespace std;
//
//int n;
//char a, b, c;
//
//void move(int x, char begin, char tmp, char end)
//{
//	if(x == 0) return;
//	
//	move(x - 1, begin, end, tmp);
//	printf("%c->%d->%c\n", begin, x, end);
//	move(x - 1, tmp, begin, end);
//}
//
//int main()
//{
//	cin >> n >> a >> b >> c;
//	
//	move(n, a, c, b);//a上的盘子借助c转移到b
//	
//	return 0; 
//}



//占卜 DIY
//#include <iostream>
//
//using namespace std;
//
//const int N = 15, M = 6;
//
//int n = 13, m = 4;
//int a[N][M];
//int cnt[N];
//
//void dfs(int x)
//{
//	//遇到第13就停止 
//	if(x == 13) return;
//	
//	//拿到第x堆里最后一张牌
//	int t = a[x][cnt[x]];
//	cnt[x]--;//剩余牌数-1
//	//继续拿牌
//	dfs(t); 
//}
//
//int main()
//{
//	for(int i = 1; i <= n; i++)
//	{
//		cnt[i] = 4; 
//		for(int j = 1; j <= m; j++)
//		{
//			char ch; cin >> ch;
//			if(ch >= '2' && ch <= '9') a[i][j] = ch - '0';
//			else if(ch == 'A') a[i][j] = 1;
//			else if(ch == '0') a[i][j] = 10;
//			else if(ch == 'J') a[i][j] = 11;
//			else if(ch == 'Q') a[i][j] = 12;
//			else a[i][j] = 13;
//		}
//	}
//	
//	//从前往后依次处理每张牌
//	for(int j = 1; j <= m; j++)
//	{
//		dfs(a[n][j]);
//	} 
//	
//	//统计结果
//	int ret = 0;
//	for(int i = 1; i <= n; i++)
//	{
//		if(cnt[i] == 0) ret++;
//	} 
//	cout << ret << endl;
//	
//	return 0;
//}




//FBI树
#include <iostream>

using namespace std;

int n;
int sum[1 << 11];
string s;

void dfs(int l, int r)
{
	if(l > r) return;
	
	//判断区间类型
	char ret;
	int s = sum[r] - sum[l - 1];
	if(s == r - l + 1) ret = 'I';
	else if(s == 0) ret = 'B';
	else ret = 'F';
	
	//如果只有一个节点，不用递归了
	if(l == r)
	{
		cout << ret;
		return;
	} 
	
	//分左右
	int mid = (l + r) / 2;
	dfs(l, mid);
	dfs(mid + 1, r);
	cout << ret; 
}

int main()
{
	cin >> n >> s;
	n = (1 << n);
	s = " " + s;
	for(int i = 1; i <= n; i++)
	{
		if(s[i] == '1') sum[i] = sum[i - 1] + 1;
		else sum[i] = sum[i - 1];
	}
	dfs(1, n);
	
	return 0;
} 














































































