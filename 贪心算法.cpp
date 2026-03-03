//货仓选址
#include<iostream>
#include<algorithm>//因为需要知道中间值需要排序

using namespace std;

typedef long long LL;

const int N = 1e5 + 10;

int n;
LL a[N];


int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	
	sort(a + 1, a + 1 + n);
	
	LL ret = 0;
	for(int i = 1; i <= n; i++)
	{
		ret += abs(a[i] - a[n / 2]);
	}
	
	cout << ret << endl;
 } 


//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//typedef long long LL;
//
//const int N = 1e5 + 10;
//
//int n;
//LL a[N];
//
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++) cin >> a[i];
//	
//	sort(a + 1, a + 1 + n);
//	
//	LL ret = 0;
//	//用结论
//	for(int i = 1; i <= n / 2; i++)
//	{
//		ret += a[n - i + 1] - a[i];
//	 } 
//	
//	cout << ret << endl;
// } 
 
 
 
 
//最大子段和 
#include<iostream> 
 
using namespace std;

typedef long long LL;

const int N = 2e5 + 10;

int n;
LL a[N];

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	
	LL sum = 0, ret = -1e6;
	for(int i = 1; i <= n; i++)
	{
		sum += a[i];
		ret = max(sum, ret);
		if(sum < 0) sum = 0;
	}
	
	cout << ret << endl;
	
	return 0;
} 
 
 
 
 
//纪念品分组 
#include<iostream>
#include<algorithm>

using namespace std;

const int N = 3e4 + 10;

int w, n;
int a[N];

int main()
{
	cin >> w >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1, a + 1 + n);
	
	int l = 1, r = n, ret = 0;
	
	while(l <= r)
	{
		if(a[l] + a[r] <= w) l++, r--;
		else r--;
		ret++;
	}
	
	cout << ret << endl;
	
	return 0;
} 
 
 
 
 
//排座椅 
#include<iostream>
#include<algorithm>

using namespace std;

const int N = 1010;

struct node
{
	int index;
	int cnt;
}row[N], col[N]; 
 
int m, n, k, l, d;

// 按照 cnt 从大到小排序 
bool cmp1(node& x, node& y)
{
    return x.cnt > y.cnt;
}
// 按照 index 从小到大排序 
bool cmp2(node& x, node& y)
{
    return x.index < y.index;
}

int main()
{
	cin >> m >> n >> k >> l >> d;
	//初始化结构体数组
	for(int i = 1; i <= m; i++) row[i].index = i;//行 
	for(int i = 1; i <= n; i++) col[i].index = i;//列
	
	while(d--)
	{
		int x, y, p, q; cin >> x >> y >> p >> q;
		if(x == p) col[min(y, q)].cnt++;
		else row[min(x, p)].cnt++;
	}
	
	//对两个数组按照cnt从小到大排序
	sort(row + 1, row + 1 + n, cmp1);
	sort(col + 1, col + 1 + n, cmp1);
	
	//对row数组，前k个元素，按照下标从小到大排序 
	sort(row + 1, row + 1 + k, cmp2);
	//对col数组，前l个元素，按照下标从小到大排序 
    sort(col + 1, col + 1 + l, cmp2);
    
    for(int i = 1; i <= k; i++) 
    {
        cout << row[i].index << " ";
    }
    cout << endl;
    for(int i = 1; i <= l; i++)
    {
        cout << col[i].index << " ";
    }
    cout << endl;
    
    return 0;
 } 
 
 
 
 
 
//矩阵消除游戏 
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int N = 20;

int n, m, k;
int a[N][N];
int col[N]; // 统计列和 
// 统计 x 的二进制表示中 1 的个数 
int calc(int x)
{
    int ret = 0;
    while(x)
    {
        ret++;
        x -= x & -x; 
    }
    return ret;
}
// 按照值从大到小排序 
bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];
    
    int ret = 0;
    // 暴力枚举出行的所有选法 
    for(int st = 0; st < (1 << n); st++)
    {
        int cnt = calc(st);
        if(cnt > k) continue; // 不合法的状态 
        
        memset(col, 0, sizeof col);
        int sum = 0; // 记录当前选法中的和 
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if((st >> i) & 1) sum += a[i][j];
                else col[j] += a[i][j];
            }
        } 
        
        // 处理列 
        sort(col, col + m, cmp);
        // 选 k - cnt 列 
        for(int i = 0; i < k - cnt; i++) sum += col[i];
        ret = max(ret, sum);
    }
    
    cout << ret << endl;
    
    return 0;
} 
 
 
 
 
 
//拼数
#include<iostream>
#include<algorithm>

using namespace std;

const int N = 25;

int n;
string a[N]; 

bool cmp(string& x, string& y)
{
	return x + y > y + x;
}

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	
	//排序
	sort(a + 1, a + 1 + n, cmp);
	
	for(int i = 1; i <= n; i++) cout << a[i];
	
	return 0; 
} 
 
 
 
 
 
 
//Protecting the Flowers S 
#include<iostream>
#include<algorithm>

using namespace std;

typedef long long LL;

const int N = 1e5 + 10; 
 
int n;
struct node
{
	int t;
	int d;
 }a[N];

bool cmp(node&x, node&y)
{
	return x.t * y.d < x.d * y.t;
}
 
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i].t >> a[i].d;
	}
	
	sort(a + 1, a + 1 + n, cmp);
	
	LL ret = 0, t = 0;
	for(int i = 1; i <= n; i++)
	{
		ret += a[i].d * t;
		t += a[i].t * 2;
	}
	
	cout << ret << endl;
}  
 
 
 
 
//奶牛玩杂技 
#include<iostream>
#include<algorithm>

using namespace std;

typedef long long LL;

const int N = 5e4 + 10;

int n;
struct node
{
	int w, s;
 }a[N]; 

bool cmp(node& i, node& j)
{
	return max(-i.s, i.w - j.s) < max(j.w - i.s, -j.s);
}

int main()
{
	cin >> n;
	for(int i = 1; i<= n; i++) cin >> a[i].w >> a[i].s;
	
	sort(a + 1, a + 1 + n, cmp);
	
	LL ret = -1e9 - 10, w = 0;//ret最小压扁指数可能为-1e9，w标记上面奶牛的总重
	for(int i = 1; i <= n; i++)
	{
		ret = max(ret, w - a[i].s);
		w += a[i].w;
	 } 
	cout << ret << endl;
	
	return 0; 
}





//哈夫曼编码
#include<iostream>
#include<vector>
#include<queue> 

using namespace std;

typedef long long LL;


int n;
priority_queue<LL, vector<LL>, greater<LL>> heap;//小根堆，快速找出最小值

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		LL x; cin >> x;
		heap.push(x);
	}
	
	LL len = 0;
	while(heap.size() > 1)
	{
		LL x = heap.top(); heap.pop();
		LL y = heap.top(); heap.pop();
		LL t = x + y;
		len += t;
		heap.push(t);
	 } 
	 cout << len << endl;
	 
	 return 0;
 } 





//合并果子
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

typedef long long LL;

int n;
priority_queue<LL, vector<LL>, greater<LL>> heap;//小根堆

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		LL x; cin >> x;
		heap.push(x);
	}
	
	LL sum = 0;
	while(heap.size() > 1)
	{
		LL a = heap.top(); heap.pop();
		LL b = heap.top(); heap.pop();
		heap.push(a + b);
		sum += a + b;
	}
	cout << sum << endl;
	
	return 0;
}




//线段覆盖
#include<iostream>
#include<algorithm>

using namespace std;

const int N = 1e6 + 10;

int n;
struct node
{
	int l, r;
 }a[N];
 
bool cmp(node& x, node& y)
{
	return x.l < y.l;
 } 
 
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i].l >> a[i].r;
	
	sort(a + 1, a + 1 + n, cmp);
	
	int ret = 1;//第一个区间一定选
	int r = a[1].r;//第一个区间为基准往后选
	
	for(int i = 2; i <= n; i++)
	{
		int left = a[i].l, right = a[i].r;
		if(left < r)//重叠
		{
			r = min(r, right); 
		 }
		else
		{
			ret++;
			r = right;
		}  
	 } 
	 cout << ret << endl;
	 
	 return 0;
}  





//Radar Installation
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

const int N = 1010;

int n, d;
struct node
{
    double l, r;
}a[N];

bool cmp(node& x, node& y)
{
    return x.l < y.l;
}

int main()
{
    int cnt = 0;
    while(cin >> n >> d, n && d)
    {
        cnt++;
        bool flag = false; // 有可能岛屿太远，无论如何也覆盖不到 
        for(int i = 1; i <= n; i++)
        {
            double x, y; cin >> x >> y;
            if(y > d) flag = true;
            else
            {
                double t = sqrt(d * d - y * y);
                a[i].l = x - t, a[i].r = x + t;
            }
        }
        cout << "Case " << cnt << ": ";
        if(flag) cout << -1 << endl;
        else 
        {
            sort(a + 1, a + 1 + n, cmp);
            int ret = 1;
            double r = a[1].r;
            for(int i = 2; i <= n; i++)
            {
                double x = a[i].l, y = a[i].r;
                if(x > r) // 没有重叠 
                {
                    ret++;
                    r = y;
                }
                else // 有重叠 
                {
                    r = min(r, y);
                }
            }
            cout << ret << endl;
        }
    }
    return 0;
}



 
 
