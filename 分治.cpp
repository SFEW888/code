//逆序对
//#include <iostream>
//
//using namespace std;
//
//const int N = 5e5 + 10;
//typedef long long LL;
//
//int n;
//int a[N], tmp[N];
//
//LL merge(int l, int r)
//{
//	if(l >= r) return 0;
//	
//	int mid = (l + r) / 2;
//	
//	//[l,mid] [mid+1,r]
//	LL ret = 0;
//	ret += merge(l, mid) + merge(mid + 1, r);
//	
//	//计算一左一右
//	int cur1 = l, cur2 = mid + 1, i =l; 
//	while(cur1 <= mid && cur2 <= r) 
//	{
//		if(a[cur1] <= a[cur2])
//		{
//			tmp[i++] = a[cur1++];
//		}
//		else
//		{
//			ret += (mid - cur1 + 1);
//			tmp[i++] = a[cur2++];
//		}
//	}
//	
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
//	cout << merge(1, n) << endl;
//	
//	return 0;
//} 



//求第 k 小的数
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//const int N = 5e6 + 10;
//
//int n, k;
//int a[N];
//
//// [l, r] 之间随机返回一个数 
//int get_random(int l, int r)
//{
//    return a[rand() % (r - l + 1) + l];
//}
//
//int quick_select(int left, int right, int k)
//{
//	if(left >= right) return a[left];
//	
//	//随机选择基准元素
//	int p = get_random(left, right);
//	
//	//以p为基准划分三部分
//	int l = left - 1, r = right + 1, i = left;
//	while(i < r)
//	{
//		if(a[i] == p) i++;
//		else if(a[i] < p) swap(a[++l], a[i++]);
//		else swap(a[--r], a[i]);
//	} 
//	
//	//[left,l] [l+1,r-1] [r,right]
//	int a = l - left + 1, b = r - l - 1, c = right - r + 1; 
//	if(k <= a) return quick_select(left, l, k);
//	else if(k <= a + b) return p;
//	else return quick_select(r, right, k - a - b);
//	 
//}
//
//int main()
//{
//	srand(time(0));
//	
//	scanf("%d%d", &n, &k); 
//    k++;
//    for(int i = 1; i <= n; i++) 
//    {
//        scanf("%d", &a[i]);
//    }
//    printf("%d\n", quick_select(1, n, k));
//	
//	return 0;
//}




//最大子段和
#include <iostream>

using namespace std; 

const int N = 2e5 + 10;

int n;
int a[N];

int dfs(int l, int r)
{
	if(l >= r) return a[l];
	
	int mid = (l + r) >> 1;
	
	//先求左右两边的最大值
	int ret = max(dfs(l, mid), dfs(mid + 1, r));
	
	int suml = a[mid], sumr = a[mid + 1];
	int maxl = suml, maxr = sumr;
	
	//以a[mid]向左延伸
	for(int i = mid - 1; i >= l; i--)
	{
		suml += a[i];
		maxl = max(maxl, suml);
	} 
	
	//以a[mid+1]向右延伸
	for(int i = mid + 2; i <= r; i++)
	{
		sumr += a[i];
		maxr = max(maxr, sumr);
	} 
	
	return max(ret, maxl + maxr);
}

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	cout << dfs(1, n) << endl;
	
	return 0; 
}

































