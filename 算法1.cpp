//多项式输出 
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	
//	for(int i = n; i >= 0; i--)
//	{
//		int m;
//		cin >> m;
//		if(m == 0) continue; //处理系数为0的情况
//		
//		//符号 
//		if(m < 0) cout << '-';
//		else
//		{
//			if(i != n) cout << '+';
//		}
//		
//		//数字
//		m = abs(m);
//		if(m != 1 || (m == 1 && i == 0)) cout << m;
//		
//		//次数 
//		if(i == 0) continue;
//		else if(i == 1)  cout << 'x';
//		else cout << "x^" << i;
//	}
//	return 0;
// } 



//蛇形方阵
//#include <iostream>
//
//using namespace std;
//
//const int N = 12;
//
//int dx[] = {0, 1, 0, -1};
//int dy[] = {1, 0, -1, 0};
//
//int arr[N][N];
//
//int main()
//{
//	int n;
//	cin >> n;
//	
//	int x = 1, y = 1;//初始位置 
//	int cnt = 1;//要填入的数 
//	int pos = 0;//当前的方向
//	
//	while(cnt <= n * n)
//	{
//		arr[x][y] = cnt;
//		
//		//更新坐标
//		int a = x + dx[pos], b = y + dy[pos];
//		
//		//判断是否越界
//		if(a < 1 || a > n || b < 1 || b > n || arr[a][b])
//		{
//			//更新正确该走的位置
//			pos = (pos + 1) % 4;
//			a = x + dx[pos], b = y + dy[pos]; 
//		 } 
//		 x = a, y = b;
//		 cnt++;
//	}
//	
//	//输出
//	for(int i = 1; i <= n; i++)
//	{
//		for(int j = 1; j <= n; j++)
//		{
//			printf("%3d", arr[i][j]);
//		}
//		//换行 
//		puts(" ");
//	 } 
//	
//	return 0; 
// } 



//字符串的展开
#include <iostream>
#include <algorithm>

using namespace std;

int p1, p2, p3, n;;
string s;
string ret;//方便操作

bool isdig(char ch)
{
	return ch >= '0' && ch <= '9'; 
}

bool islet(char ch)
{
	return ch >= 'a' && ch <= 'z';
}

void add(char left, char right)
{
	string t;
	// 遍历中间的字符 
    for(char ch = left + 1; ch < right; ch++)
    {
        char tmp = ch;
        // 处理 p1 
        if(p1 == 2 && islet(tmp)) tmp -= 32; // 小写变大写 
        else if(p1 == 3) tmp = '*'; // 变成星号 
        // 处理 p2 
        for(int i = 0; i < p2; i++)
        {
            t += tmp;
        }
    }
    // 处理 p3 
    if(p3 == 2) reverse(t.begin(), t.end());
    ret += t;
}

int main()
{
	cin >> p1 >> p2 >> p3 >> s;
	n = s.size();
	
	for(int i = 0; i < n; i++)
	{
		char ch = s[i];
		
		//处理 - 的边界情况 
		if(s[i] != '-' || i == 0 || i == n - 1) ret += ch;
		else
		{
			char left = s[i - 1], right = s[i + 1];
			//判断是否展开
			if(isdig(left) && isdig(right) && right > left ||
			islet(left) && islet(right) && right > left)
			{
				//展开
				add(left, right); 
			 } 
			else
			{
				ret += ch;
			 } 
		}
		
	}
	
	cout << ret << endl;
	
	return 0;
 
 } 
 


































