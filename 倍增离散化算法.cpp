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

//火烧赤壁

 


















//贴海报




































