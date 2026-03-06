//倍增

//快速幂 
//#include <iostream>
//
//using namespace std;
//
//typedef long long LL;
//
//LL quickpow(LL a,LL b,LL p)
//{
//	LL ret = 1;
//	while(b)
//	{
//		if(b & 1) ret = ret * a % p;//% p是为了防溢出 
//		a = a * a % p;
//		b >>= 1;
//	 } 
//	return ret; 
// } 
//
//int main()
//{
//	LL a, b, p;
//	
//	scanf("%lld%lld%lld", &a, &b, &p);
//	printf("%lld^%lld mod %lld=%lld\n", a, b, p, quickpow(a, b, p));
//	
//	return 0;
//} 



//64位整数乘法
//#include<iostream>
//
//using namespace std;
//
//typedef long long LL;
//
//LL qmul(LL a,LL b,LL p)
//{
//	LL sum = 0;
//	while(b)
//	{
//		if(b & 1) sum = (sum + a) % p;
//		a = (a + a) % p;
//		b >>= 1;
//	}
//	return sum % p;
//}
//
//int main()
//{
//	LL a, b, p;
//	
//	cin >> a >> b >> p;
//    cout << qmul(a % p, b, p) << endl;
//	
//	return 0;
// } 





//离散化

//模板一
//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//
//int n;
//int a[N];//原始数据
//
//int pos;//记录离散化数组中元素的个数
//int disc[N];//离散化后的数组
//
////二分查找 
//int find(int x)
//{
//	int l = 1, r = pos;
//	while(l < r)
//	{
//		int mid = (l + r) / 2;
//		if(disc[mid] >= x) r = mid;
//		else l = mid + 1;
//	}
//	return l;
//}
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++)
//	{
//		int x; cin >> x;
//		a[i] = x;
//		disc[++pos] = x;
//	}
//	
//	//离散化：排序+去重
//	sort(disc + 1, disc + 1 + pos);
//	pos = unique(disc + 1, disc + 1 + pos) - (disc + 1);
//	
//	//找到离散化之后的值
//	for(int i = 1; i <= n; i++)
//	{
//		int x = a[i];
//		cout << x << "离散化之后是：" << find(x) << endl;
//	 }
//	
//	return 0;  
// } 

//模板二
//#include<iostream>
//#include<algorithm>
//#include<unordered_map>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//
//int n;
//int a[N];//原始数组 
//
//int tmp[N];//用来排序的数组 
//int cnt;
//unordered_map<int, int> id;//记录离散化之后值 
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++)
//	{
//		int x; cin >> x;
//		a[i] = x;
//		tmp[i] = x;
//	}
//	
//	//离散化：排序+哈希表
//	sort(tmp + 1, tmp + 1 + n);
//	for(int i = 1; i <= n; i++)
//	{
//		if(id.count(tmp[i])) continue;
//		cnt++;
//		id[tmp[i]] = cnt;//放进哈希表中 
//	 } 
//	 
//	//找到离散化后的值
//	for(int i = 1; i <= n; i++)
//	{
//		int x = a[i];
//		cout << x << "离散化之后是：" << id[a[i]] << endl;
//	 }
//	
//	return 0;  
// } 




//火烧赤壁
#include<iostream>
#include<algorithm>

using namespace std;

const int N = 2e4 + 10;

int n;
int l[N], r[N];

int m;//离散数组大小
int disc[N * 2];//离散之后的数组
int f[N * 2];//差分数组

int find(int x)
{
    int l = 1, r = m;
    while(l < r)
    {
        int mid = (l + r + 1) >> 1;
        if(disc[mid] <= x) l = mid;
        else r = mid - 1;
    }
    return l;
}

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++) 
	{
		int x, y; cin >> x >> y;
		l[i] = x, r[i] = y;
		disc[++m] = l[i]; disc[++m] = r[i];
	}
	
	//离散化处理
	sort(disc + 1, disc + 1 + m);
	m = unique(disc + 1, disc + 1 + m) - (disc + 1);
	
	//处理区间修改
	for(int i = 1; i <= n; i++)
	{
		int x = find(l[i]), y = find(r[i]);
		f[x] += 1, f[y] -= 1; 
	}
	
	//还原数组
	for(int i = 1; i <= m; i++) f[i] += f[i - 1];
	
	//找出每一段大于0区间，统计长度
	int sum = 0;
	
	for(int i = 1; i <= m; i++)
    {
        if(f[i] <= 0) continue;
        int j = i;
        while(j <= m && f[j] > 0) j++;
        // 累加?度的时候记得使用离散化之前的值 
        sum += disc[j] - disc[i];
        i = j;
    }
    cout << sum << endl;
    return 0; 
 } 
 


















//贴海报




































