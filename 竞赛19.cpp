//#include <iostream>
//#include <cstdio>
//using namespace std;

//int main() 
//{
//	float x;
//	scanf("%f", &x);
//	printf("%.1f",x);
//	return 0;
//}




//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	cout << arr[7] << endl;
//	cout << arr[3] << endl;
//	return 0;
// } 




//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	cout << sizeof(arr) << endl;
//	cout << sizeof(arr) / sizeof(arr[0]) << endl;
//	return 0;
// } 



//#include <iostream>
//using namespace std;
//
//int main()
//{
//	
//	int arr[5] = {0};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//输入
//	for(i = 0; i < sz; i++)
//	{
//		cin >> arr[i];
//	 } 
//	//输出
//	for(i = 0; i < sz; i++)
//	{
//		cout << arr[i] << " ";
//	 } 
//	 cout << endl;
//	 return 0;
// } 




//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(int x : arr)
//	{
//		cout << x << " ";
//	}
//	return 0;
// } 




//#include <iostream>
//using namespace std;
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (auto e : arr)    //auto能够自动推导数组中每个元素的数据类型，在数组范围内遍历打印元素 
//    {
//        cout << e << " ";
//    }
//    return 0;
//}




//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int main()
//{
//	char str[] = "hello world";
//    memset(str, 'x', 6);
//    cout << str << endl;
//    
//    int arr[] = {1,2,3,4,5};
//    memset(arr, 0, sizeof(arr));//这里数组的大小也可以自己计算 
//    for(auto i : arr)
//    {
//        cout << i << " ";
//    }
//    cout << endl;
//    return 0;
//}




//#include<iostream>
//#include<cstring> 
//using namespace std;
//int main ()
//{
//    int arr[] = {1,2,3,4,5};
//    memset(arr, 1, 4 * sizeof(int));
//    for(auto e : arr)
//    {
//        cout << e << " ";
//    }
//    cout << endl;
//    return 0;
//}



//错误演示 
//#include<iostream> 
//using namespace std;
//
//int main()
//{
//	int a[10] = {1,2,3,4,5,6,7,8,9,10};
//	int b[10] = {0};
//	b = a;
//	cout << b << endl;
//	return 0;
// } 



//#include <iostream>
//#include <cstring>
//using namespace std;
//int main()
//{
//    int a[10] = {1,2,3,4,5,6,7,8,9,10};
//    int b[10] = {0};
//    memcpy(b, a, 10 * sizeof(int));
//    for(int e: b)
//    {
//        cout << e << " ";
//    }
//    return 0;
//}




#include<iostream>
using namespace std;

const int N = 10010;//多开辟空间，防止数组越界
//又因为n<=10000，所以设10010 
int arr[N];
 
int main()
{
	int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k = 0;
    cin >> k;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (k == arr[i])
        {
            cout << i << endl;
            break;
        }
    }
    if (i == n)
        cout << -1 << endl;
    return 0;
 } 




















