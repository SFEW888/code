////高精度加法 
//#include <iostream>
//
//using namespace std;
//
//const int N = 1e6 + 10;
//
//int a[N], b[N], c[N];
//int la, lb, lc;
//
//void add(int c[], int a[], int b[])
//{
//	for(int i = 0; i < lc; i++)
//	{
//		c[i] += a[i] + b[i];
//		c[i + 1] = c[i] / 10;
//		c[i] %= 10;
//	}
//	if(c[lc]) lc++;
//}
//
//int main()
//{
//	string x, y;
//	cin >> x >> y;
//	
//	//拆分每一位，逆序放在数组中
//	la = x.size();
//	lb = y.size();
//	lc = max(la, lb);
//	//先指定lc的最大的数范围后，如果超过就再加
//	for(int i = 0; i < la; i++) a[la - 1 - i] = x[i] - '0';
//    for(int i = 0; i < lb; i++) b[lb - 1 - i] = y[i] - '0';
//	
//	//模拟加法过程
//	add(c, a, b);
//	
//	//输出
//	for(int i = lc - 1; i >= 0; i--)
//	{
//		cout << c[i];
//	 } 
//	return 0; 
// } 
//
//
//
////高精度减法
//#include <iostream>
//
//using namespace std;
//
//const int N = 1e6 + 10;
//
//int a[N], b[N], c[N];
//int la, lb, lc;
//
//// 比大小 
//bool cmp(string& x, string& y)
//{
//    // 先比较长度 
//    if(x.size() != y.size()) return x.size() < y.size();
//    // 再按照字典序的方式比较 
//    return x < y;
//}    
//
//void sub(int c[], int a[], int b[])
//{
//    for(int i = 0; i < lc; i++)
//    {
//        c[i] += a[i] - b[i]; // 对应位相减，然后处理借位 
//        if(c[i] < 0)
//        {
//            c[i + 1] -= 1; // 借位 
//            c[i] += 10;
//        }
//    }
//    // 处理前导零 
//    while(lc > 1 && c[lc - 1] == 0) lc--;
//}
//
//int main()
//{
//    string x, y; cin >> x >> y;
//    // 比大小 
//    if(cmp(x, y))
//    {
//        swap(x, y);
//        cout << '-';
//    }
//    // 1. 拆分每一位，然后逆序放在数组中 
//    la = x.size(); lb = y.size(); lc = max(la, lb);
//    for(int i = 0; i < la; i++) a[la - i - 1] = x[i] - '0';
//    for(int i = 0; i < lb; i++) b[lb - i - 1] = y[i] - '0';
//    // 2. 模拟减法的过程 
//    sub(c, a, b); // c = a - b
//    
//    // 输出结果 
//    for(int i = lc - 1; i >= 0; i--) cout << c[i];
//    return 0;
//}
//
//
//
////高精度乘法
//#include <iostream>
//
//using namespace std;
//
//const int N = 1e6 + 10;
//
//int a[N], b[N], c[N];
//int la, lb, lc;
// 
//void mul(int c[], int a[], int b[])
//{
//    // 无进位相乘,然后相加 
//    for(int i = 0; i < la; i++)
//    {
//        for(int j = 0; j < lb; j++)
//        {
//            c[i + j] += a[i] * b[j]; 
//        }
//    }
//    // 处理进位 
//    for(int i = 0; i < lc; i++)
//    {
//        c[i + 1] += c[i] / 10;
//        c[i] %= 10;
//    }
//    // 处理前导零 
//    while(lc > 1 && c[lc - 1] == 0) lc--;
//}
//int main()
//{
//    string x, y; cin >> x >> y;
//    // 1. 拆分每一位，逆序放在数组中 
//    la = x.size(); lb = y.size(); lc = la + lb;
//    for(int i = 0; i < la; i++) a[la - 1 - i] = x[i] - '0';
//    for(int i = 0; i < lb; i++) b[lb - 1 - i] = y[i] - '0';
//    // 2. 模拟乘法的过程 
//    mul(c, a, b); // c = a * b
//    // 输出结果 
//    for(int i = lc - 1; i >= 0; i--) cout << c[i];
//    return 0;
//}



//高精度除法
#include <iostream>

using namespace std;
 
const int N = 1e6 + 10;

typedef long long LL;

int a[N], b, c[N];
int la, lc;

void sub(int c[], int a[], int b)
{
    LL t = 0; // 标记每次除完之后的余数 
    for(int i = la - 1; i >= 0; i--)
    {
        // 计算当前的被除数 
        t = t * 10 + a[i];
        c[i] = t / b;
        t %= b;
    }
    // 处理前导 0 
    while(lc > 1 && c[lc - 1] == 0) lc--;
}

int main()
{
    string x; cin >> x >> b;
    la = x.size();
    for(int i = 0; i < la; i++) a[la - 1 - i] = x[i] - '0';
    // 模拟除法的过程 
    lc = la;
    sub(c, a, b); // c = a / b
    for(int i = lc - 1; i >= 0; i--) cout << c[i];
 
    return 0;
}















 
