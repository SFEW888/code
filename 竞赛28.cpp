//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a = 0, b = 0;
//	while(cin >> a >> b, a && b)
//	{
//		cout << a + b << endl;
//	}
//	return 0;
// } 



//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s;
//	getline(cin, s);
//	
//	int ret = 0;
//	for(auto ch : s)
//	{
//		if(ch >= '0' && ch <= '9')
//		{
//			ret++;
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}



//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	int n;
//	int i = 0, ret = 0;
//	cin >> n;
//	while(n)
//	{
//		if(n % 10 % 2 == 1)
//		{
//			ret += pow(10, i);
//		 } 
//		 n /= 10;
//		 i++;
//	}
//	cout << ret << endl;
//	return 0;
//}



//#include <cstdio>
//#include <iostream>
//using namespace std;
//int main()
//{
//    float a = 3.50;
//    double d = 16.50;
//    
//    cout << "cout: " <<a << " "<< d <<endl;
//    printf("printf: %f %lf\n", a, d);
//    return 0;
//}



//#include <iostream>
//using namespace std;
//int t, x;
//int main()
//{
//    cin >> t;
//    while (t--)
//    {
//        cin >> x;
//        int ret = 0;
//        while (x)
//        {
//            int count = 0, high = 0;
//            int tmp = x;
//            while (tmp)
//            {
//                //计算最右边的1代表的值 
//                int low = tmp & -tmp;
//                //如果low中剩余的1就是最后一个1 
//                //就是最左边的1 
//                if (tmp == low)
//                {
//                    high = low;
//                }
//                //去掉最右边的1 
//                tmp -= low;
//                count++;
//            }
//            if (count % 2 == 0)
//            {
//                x -= high;
//            }
//            else
//            {
//                x ^= 1;
//            }
//            ret++;
//        }
//        cout << ret << endl;
//    }
//    return 0;
//}



//#include <iostream>
//using namespace std;
//int t, x;
//int main()
//{
//    scanf("%d", &t);
//    while (t--)
//    {
//        scanf("%d", &x);
//        int ret = 0;
//        while (x)
//        {
//            int count = 0, high = 0;
//            int tmp = x;
//            while (tmp)
//            {
//                //计算最右边的1代表的值 
//                int low = tmp & -tmp;
//                //如果low中剩余的1就是最后一个1 
//                //就是最左边的1 
//                if (tmp == low)
//                {
//                    high = low;
//                }
//                //去掉最右边的1 
//                tmp -= low;
//                count++;
//            }
//            if (count % 2 == 0)
//            {
//                x -= high;
//            }
//            else
//            {
//                x ^= 1;
//            }
//            ret++;
//        }
//        printf("%d\n", ret);
//    }
//    return 0;
//}



//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//const int N = 5000010;
//int arr[N];
//int main()
//{
//    int n, k;
//    cin >> n >> k;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> arr[i];
//    }
//    sort(arr, arr + n);
//    cout << arr[k] << endl;
//    return 0;
//}



//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//const int N = 5000010;
//int arr[N];
//int main()
//{
//    int n, k;
//    cin >> n >> k;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    sort(arr, arr + n);
//    cout << arr[k] << endl;
//    return 0;
//}



/*//#include<iostream>
//#include<ctime>
//#include<cstdio>
//using namespace std;
//const int num = 10000000;
//int main()
//{
//    int i, x;
//    //freopen是将stdin重定向到文件 
//    //意思是scanf可以文件中读取数据 
//    freopen("data.txt", "r", stdin);
//    clock_t t1, t2;
//    t1 = clock();
//    for (i = 0; i < num; i++)
//    {
//        scanf("%d", &x);
//    }
//    t2 = clock();
//    cout << "Runtime of scanf: " 
//<< t2 - t1 << " ms" << endl;
//    return 0;
//}*/



//#include<iostream>
//#include<ctime>
//#include<cstdio>
//using namespace std;
//const int num = 10000000;
//int main()
//{
//    //freopen是将stdin重定向到文件 
//    //意思是cin可以文件中读取数据 
//    freopen("data.txt", "r", stdin);
//    int i, x;
//    clock_t t1, t2;
//    t1 = clock();
//    for (i = 0; i < num; i++)
//    {
//        cin >> x;
//    }
//    t2 = clock();
//    cout << "Runtime of cin: " << t2 - t1 << " ms" << endl;
//    return 0;
//}



#include<iostream>
#include<ctime>
#include<cstdio>
using namespace std;
const int num = 10000000;
int main()
{
    ios::sync_with_stdio(false); //取消给C语言输入输出缓冲区的同步 
    cin.tie(0); //取消了cin和cout的绑定 
    freopen("data.txt", "r", stdin);
    int i, x;
    clock_t t1, t2;
    t1 = clock();
    for (i = 0; i < num; i++)
    {
        cin >> x;
    }
    t2 = clock();
    cout << "Runtime of cin: " << t2 - t1 << " ms" << endl;
    return 0;
}














































































