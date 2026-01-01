//#include <iostream>
//#include <cmath>       //数学函数头文件，不包含则无法使用sqrt函数 
//using namespace std;
//int main()
//{
//    double d = 16.0;
//    double r = sqrt(d);
//    cout << r << endl;
//    return 0;
//}



//#include<iostream>
//using namespace std;
////这就是函数的定义 
//int Add(int x, int y)
//{
//    int z = 0;
//    z = x + y;
//    return z;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    //输入 
//    cin >> a >> b;
//    //调用加法函数，完成a和b的相加 
//    //求和的结果放在r中 
//    int r = Add(a, b);
//    //输出 
//    cout << r << endl;
//    return 0;
//}



//#include <iostream>
//using namespace std;
//
//void set_arr(int arr1[], int sz)
//{
//    int i = 0;
//    for(i = 0; i < sz; i++)
//    {
//        arr1[i] = 1;
//    }
//}
//void print_arr(int arr2[], int sz)
//{
//    int i = 0;
//    for(i = 0; i < sz; i++)
//    {
//        cout << arr2[i] << " ";
//    }
//    cout << endl;
//}
//
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    set_arr(arr, sz);            //设置数组内容为1 
//    print_arr(arr, sz);          //打印数组内容 
//    return 0;
//}




//#include <iostream>
//using namespace std;
//int arr[10] = { 0 };
//void print_arr()
//{
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//int main()
//{
//    //打印数组的内容 
//    print_arr();
//    //给数组的元素赋值为1~10 
//    for (int i = 0; i < 10; i++)
//    {
//        arr[i] = i + 1;
//    }
//    //打印数组 
//    print_arr();
//    return 0;
//}



//#include <iostream>
//using namespace std;
// 
//int test()
//{
//    return 3.14;
//}
//int main()
//{
//    int ret = test();
//    cout << ret << endl;
//    return 0;
//}



//#include <iostream>
//using namespace std;
//void print_arr(int arr[], int n)
//{
//    int i = 0;
//    for(i=0; i<n; i++)
//    {
//        if(i == 5)
//            return;//对比换成break 
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//    cout << "打印完毕" << endl;
//}
//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    print_arr(arr, 10);
//    return 0;
//}



//#include <iostream>
//using namespace std;
//void print_arr(int arr[], int n)
//{
//    int i = 0;
//    for(i=0; i<n; i++)
//    {
//        if(i == 5)
//            break; 
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//    cout << "打印完毕" << endl;
//}
//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    print_arr(arr, 10);
//    return 0;
//}



//#include <iostream>
//using namespace std;
////函数声明 
//int Add(int x, int y);
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int c = Add(a, b);
//    cout << c << endl;
//    return 0;
//}
//int Add(int x, int y) //函数定义 
//{
//    return x + y;
//}



//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//void TestRef()
//{
//    int a = 10;
//    int b = 20;
//    // int& ra;   // 该条语句编译时会出错 
//    int& ra = a;
//    int& rra = a;
//    ra = b;//这是赋值不是修改引入
//    printf("%p %p %p %p\n", &a, &b, &ra, &rra);
//    printf("%d %d %d %d\n", a, b, ra, rra); 
//}
//int main()
//{
//	TestRef();
//	return 0;
// } 



//#include <iostream>
//#include <utility>
//using namespace std;
//int main()
//{
//    int a = 0;
//    int b = 0;
//    cin >> a >> b;
//    cout << "交换前, a = " << a << " b = " << b << endl;
//    swap(a, b);//直接使用库函数swap交换两个变量 
//    cout << "交换后, a = " << a << " b = " << b << endl; 
//    return 0;
//}



//#include <iostream>    
//#include <utility>      //swap函数需要 
//using namespace std;
//int main () 
//{
//    int arr1[4];                      
//    int arr2[] = {10,20,30,40};       
//    swap(arr1, arr2);                 
//    
//    for (int e: arr1) 
//        cout << e << " ";
//    cout << endl;
//    return 0;
//}



//#include <iostream>
//using namespace std;
//void test(string& s) 
//{
//    cout << s << endl;
//    s = "haha";
//}
//int main()
//{
//    string s("hello world");
//    test(s);
//    cout << s << endl;
//    return 0;
//}



//#include<iostream>
//#include<ctime>
//using namespace std;
////定义全局字符串s 
//string s("hello world");
//void TestFunc1(string s) {}
//void TestFunc2(string& s) {}
//void Test()
//{
//    // 以值作为函数参数 
//    size_t begin1 = clock();
//    for (size_t i = 0; i < 10000000; ++i)
//    {
//        TestFunc1(s);
//    }
//    size_t end1 = clock();
//    // 以引用作为函数参数 
//    size_t begin2 = clock();
//    for (size_t i = 0; i < 10000000; ++i)
//    {
//        TestFunc2(s);
//    }
//    size_t end2 = clock();
//    // 分别计算两个函数运行结束后的时间 
//    cout << "TestFunc1(string)-time:" << end1 - begin1 << endl;
//    cout << "TestFunc2(string&)-time:" << end2 - begin2 << endl;
//}
//int main() 
//{
//    Test();
//    return 0;
//}



#include <iostream>
using namespace std;
int IntAdd(int x, int y)
{
    return x + y;
}
int main()
{
    int a = 0;
    int b = 0;
    cin >> a >> b;
    int c = IntAdd(a, b);
    cout << c << endl;
    return 0;
}

    
























































































































