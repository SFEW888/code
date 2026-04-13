//1.金币 
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int k; cin >> k;
//	int ret = 0, tmp = 1, cnt = 1;
//	
//	for(int i = 1; i <= k; i++)
//	{
//		ret += tmp;
//		cnt--;
//		
//		if(cnt == 0)
//		{
//			tmp++;
//			cnt = tmp;
//		}
//	}
//	cout << ret << endl;
//	
//	return 0;
//}



//2.接水问题
//#include <iostream>
//#include <vector> 
//#include <queue>
//
//using namespace std;
//
//int n, m;
//
//int main()
//{
//	cin >> n >> m;
//	priority_queue<int, vector<int>, greater<int>> heap;//小根堆
//	
//	for(int i = 1; i <= m; i++)
//	    heap.push(0);
//		
//	int ret = 0;
//	for(int i = 1; i <= n; i++)
//	{
//		int x; cin >> x;
//		
//		int t = heap.top(); heap.pop();
//		t += x;
//		heap.push(t);
//		ret = max(ret, t);
//	}	 
//	cout << ret << endl;
//	
//	return 0;
//}




//3.最接近神的人
//#include <iostream>
//
//using namespace std;
//
//typedef long long LL;
//const int N = 5e5 + 10; 
//
//int n;
//int a[N];
//int tmp[N];
//
//LL merge_sort(int l, int r)
//{
//	if(l >= r) return 0;
//	
//	LL ret = 0;
//	int mid = (l + r) / 2;
//	//[l, mid] [mid + 1, r]
//	ret += merge_sort(l, mid);
//	ret += merge_sort(mid + 1, r);
//	
//	int cur1 = l, cur2 = mid + 1, i = l;
//	while(cur1 <= mid && cur2 <= r)
//	{
//		if(a[cur1] <= a[cur2])
//		{
//			tmp[i++] = a[cur1++];
//		}
//		else
//		{
//			ret += mid - cur1 + 1;
//			tmp[i++] = a[cur2++];
//		}
//	} 
//	while(cur1 <= mid) tmp[i++] = a[cur1++];
//	while(cur2 <= r) tmp[i++] = a[cur2++];
//	
//	for(int j = l; j <= r; j++) a[j] = tmp[j]; 
//	
//	return ret;
//}
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++) cin >> a[i];
//	
//	cout << merge_sort(1, n) << endl;
//	
//	return 0;
//}




//4.搭配购买
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//const int N = 1e4 + 10;
//
//int n, m, w;
//int c[N], d[N];
//vector<int> edges[N];
//
//bool st[N];//标记dfs过程中哪些没有被标记 
//int cnt;//有多少连通块
//int cc[N], dd[N];//联通块的价钱和价值 
//int f[N];
//
//void dfs(int a)
//{
//	st[a] = true;
//	cc[cnt] += c[a];
//	dd[cnt] += d[a];
//	
//	for(auto& b : edges[a])
//	{
//		if(!st[b]) dfs(b);
//	}
//}
//
//int main()
//{
//	cin >> n >> m >> w;
//	for(int i = 1; i <= n; i++) cin >> c[i] >> d[i];
//	
//	for(int i = 1; i <= m; i++)
//	{
//		int a, b; cin >> a >> b;
//		edges[a].push_back(b);
//		edges[b].push_back(a);
//	}
//	
//	for(int i = 1; i <= n; i++)
//	{
//		if(!st[i])
//		{
//			cnt++;
//			dfs(i);
//		}
//	}
//	
//	//01背包
//	for(int i = 1; i <= cnt; i++)
//	    for(int j = w; j >= cc[i]; j--)
//		    f[j] = max(f[j], f[j - cc[i]] + dd[i]);
//	
//	cout << f[w] << endl;
//	
//	return 0;		 
//}




//5.棋盘问题
//#include <iostream>
//
//using namespace std;
//
//int n, m;
//
//int main()
//{
//	cin >> n >> m;
//	
//	int x = 0, y = 0;
//	for(int x1 = 0; x1 <= n; x1++)
//	    for(int y1 = 0; y1 <= m; y1++)
//	        for(int x2 = x1 + 1; x2 <= n; x2++)
//	            for(int y2 = y1 + 1; y2 <= m; y2++)
//	            {
//	            	int dx = x2 - x1, dy = y2 - y1;
//	            	if(dx == dy) x++;
//	            	else y++;
//				}
//	
//	cout << x << " " << y << endl;
//	
//	return 0;            
//} 




//6.混合牛奶 Mixing Milk
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 5010;

int n, m;
struct node
{
	int p, x;
}a[N]; 

bool cmp(node& a, node& b)
{
	return a.p < b.p;
}

int main()
{
	cin >> n >> m;
	for(int i = 1; i <= m; i++) cin >> a[i].p >> a[i].x;
	
	sort(a + 1, a + 1 + m, cmp);
	
	int ret = 0, sum = 0;
	for(int i = 1; i <= m; i++)
	{
		int t = min(a[i].x, n - sum);
		ret += t * a[i].p;
		sum += t;
	}
	
	cout << ret << endl;
}

















