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
//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//const int N = 2e5 + 10;
//
//int n;
//int ne[N]; //记录T
//int in[N]; //记录入度信息
//bool st[N]; //判断是否被标记
//int cnt; 
//
//void dfs(int i)
//{
//	cnt++;
//	st[i] = true;
//	int b = ne[i];
//	if(!st[b]) dfs(b);
//}
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> ne[i];
//		in[ne[i]]++;
//	}
//	
//	//1.利用拓扑排序把除环的部分的点打上标记
//	queue<int> q; 
//	for(int i = 1; i <= n; i++)
//	{
//		if(in[i] == 0)
//		    q.push(i);
//	}
//	
//	while(q.size())
//	{
//		auto a = q.front(); q.pop();
//		st[a] = true;
//		
//		int b = ne[a];
//		in[b]--;
//		if(in[b] == 0) q.push(b);
//	}
//	
//	//2.利用dfs计算环的大小
//	int ret = n;
//	for(int i = 1; i <= n; i++)
//	{
//		if(!st[i])
//		{
//			//因为可能不止一个环，所以需要初始一下环的大小 
//			cnt = 0;
//			dfs(i);
//			ret = min(cnt, ret);
//		}
//	} 
//	
//	cout << ret << endl;
//	
//	return 0;
//} 
 


//陶陶摘苹果
//#include <iostream>
//
//using namespace std;
//
//int a[15];
//
//int main()
//{
//	for(int i = 1; i <= 10; i++) cin >> a[i];
//	int n; cin >> n; n += 30;
//	
//	int ret = 0;
//	for(int i = 1; i <= 10; i++)
//	{
//		if(a[i] <= n)
//		    ret++;
//	}
//	
//	cout << ret << endl;
//	
//	return 0; 
//}



//陶陶摘苹果（升级版）
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 5010;
//
//int n, s;
//int a, b; 
//int cnt;
//int t[N];
//
//int main()
//{
//	cin >> n >> s;
//	cin >> a >> b;
//	a += b;
//	
//	for(int i = 1; i <= n; i++)
//	{
//		int x, y; cin >> x >> y;
//		if(x <= a) t[++cnt] = y;
//	}
//	
//	sort(t + 1, t + 1 + cnt);
//	
//	int ret = 0, sum = 0;
//	for(int i = 1; i <= n; i++)
//	{
//		sum += t[i];
//		if(sum <= s) ret++;
//	}
//	
//	cout << ret << endl;
//	
//	return 0;
//}



//













#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;

const int N = 10;

string a, b;
unordered_map<string, int> dist;
int n; // 记录一共有多少个变化规则 
string x[N], y[N];

int bfs()
{
    if(a == b) return 0;

    queue<string> q;
    q.push(a);
    dist[a] = 0;
    while(q.size())
    {
        string s = q.front(); q.pop();
        if(dist[s] >= 10) return -1;
        // 变 
        for(int i = 0; i < n; i++)
        {
            // x[i] -> y[i]
            int pos = 0;
            while(s.find(x[i], pos) != -1)
            {
                pos = s.find(x[i], pos);
                // 拼接 
                string tmp = s.substr(0, pos) + y[i] + s.substr(pos + x[i].size());
                pos++;
                // s -> tmp
                if(dist.count(tmp)) continue;
                dist[tmp] = dist[s] + 1;
                q.push(tmp);
                if(tmp == b) return dist[tmp];
            }
        }
    }
    return -1;
}

int main()
{
    cin >> a >> b;
    while(cin >> x[n] >> y[n]) n++;
    
    int ret = bfs();
    
	if(ret == -1) cout << "NO ANSWER!" << endl;
    
	else cout << ret << endl;

    return 0;
}













