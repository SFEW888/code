#include <iostream>
using namespace std;

//int main()
//{
//	int age;
//	char ch;
//	double weight;
// } 




////变量的初始化
//int main()
//{
//	int age = 18;
//	char ch = 'a';
//	double v = 3.14;
//	return 0;
// }




////字符型 
//char
//signed char   //有符号的字符类型 
//unsigned char //无符号的字符类型 
//
//
////短整型
//short [int]
//[signed] short [int]   //有符号的短整型 
//unsigned short [int]   //无符号的短整型 
//
//
////整型 
//int 
//[signed] int          //有符号的整型 
//unsigned [int]        //无符号的整型
//
//
////长整型 
//long [int]          
//[signed] long [int]  //有符号的长整型 
//unsigned long [int]  //无符号的长整型 
//
//
////更长的整型 
//long long [int]
//[signed] long long [int]     //有符号的 
//unsigned long long [int]     //无符号的




//#define SHRT_MIN    (-32768)            //有符号16位整型的最小值 
//#define SHRT_MAX      32767             //有符号16位整型的最大值 
//#define USHRT_MAX     0xffffU           //无符号16位整型的最大值 
//#define INT_MIN     (-2147483647 - 1)   //有符号整型的最小值 
//#define INT_MAX       2147483647        //有符号整型的最大值 




//int main()
//{
//    cout << sizeof(char) << endl;
//    cout << sizeof(bool) << endl;
//    cout << sizeof(short) << endl;
//    cout << sizeof(int) << endl;
//    cout << sizeof(long) << endl;
//    cout << sizeof(long long) << endl;
//    cout << sizeof(float) << endl;
//    cout << sizeof(double) << endl;
//    cout << sizeof(long double) << endl;
//    return 0;
//}




//int main()
//{
//	 int a = 10;
//    cout << sizeof(a) << endl;
//    cout << sizeof a << endl;       //a是变量的名字，可以省略掉sizeof后边的()，但不建议去掉 
//    cout << sizeof(int) << endl;
//    return 0;
// } 




//typedef unsigned int ui; 
//typedef long long ll;
//typedef unsigned long long  ull;





//int a = 2025;        //全局变量 
//int main()
//{
//	int n = 2;       //局部变量 
//	cout << a << endl;
//	cout << n << endl;
//	return 0;
//}





//int n = 2025;        //全局变量 
//int main()
//{
//	int n = 2;       //局部变量 
//	cout << n << endl;
//	cout << n << endl;
//	return 0;
//}



//int main()
//{
//	//局部变量
//	int a;
//    char c;
//    float f;
//    double d;
//    
//    cout << "int:" << a << endl;
//    cout << "char:" << c << endl;
//    cout << "float:" << f << endl;
//    cout << "double:" << d << endl;
//    return 0;
//}




//	int a;
//	char c;
//	float f;
//    double d;
//int main()
//{
//    cout << "int:" << a << endl;
//    cout << "char:" << c << endl;
//    cout << "float:" << f << 
//endl;
//    cout << "double:" << d << 
//endl;
//    return 0;
// } 




//#define M 100
//#define CH 'x'
//#define PI 3.14159
//int main()
//{
//	M = 20;
//    cout << M << endl;
//    cout << CH << endl;
//    cout << PI << endl;
//    return 0;
//}



const double PI = 3.14159;
int main()
{
    int r = 0;
    cin >> r;
    cout << "周长：" << 2 * PI * r << endl;
    cout << "面积：" << PI * r * r << endl;   
    
    //PI = 3.14;//这种写法是错误的，常量不能被修改  
    return 0;
}



  
