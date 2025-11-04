#include <iostream>
using namespace std;

//int main()
//{
//	char ch1 = 'a';
//	cout << ch1 << endl;
//	char ch2 = 97;
//	cout << ch2 << endl;
//	return 0;
// } 



//int main()
//{
//	char ch = 'a';
//	
//	short s1 = 8;
//	short int s2 = -2;
//	
//	long r1 = 10;
//	long int r2 = 100;
//	
//	long w1 = 1000;
//	long int w2 = 1010;
//	
//	float f = 5.2f;
//	double b = 8.8;
//	long double ld = 9.9;
//	
//	return 0; 
//}




//int main()
//{
//	float f = 5.20;   //编译器会默认为double类型
//    float f2 = 3.14f;  //编译器会默认为float类型
//    double d = 1e5;    //科学计数法的形式，意思1.0*10^5
//    double d2 = 1e5+10; //1*10^5+10=100010
//    cout << f << endl; 
//    cout << f2 << endl; 
//    cout << d << endl; 
//    cout << d2 << endl; 
//    return 0;
//}




//int main()
//{
//	bool a = 0;
//	if (a)
//	cout << "haha" <<endl;
//	return 0;
//}



//int main()
//{
//	int a;
//	cin >> a;
//	cout << a;
//	return 0;
//}




//int main()
//{
//	int a;
//	cin >> a;
//	char b = a;
//	cout << b << endl;
//	return 0;
//	
//}

////另一种写法，但是是错误的 
//int main()
//{
//	char ch;
//	cin >> ch; //如果你输入的为65时，它不会转换为ASCII，而是识别读取字符，把6当作字符 
//	cout << ch <<endl;
//	return 0;
// } 



//int main()
//{
//	int a, b, c;
//	//输入
//	cin >> a >> b >> c;
//	//输出
//	cout << c << b << a;
//	return 0; 
// } 
////这种写法输入不带空格 
////故需要作一番更改
//int main()
// {
//	int a, b, c;
//	//输入
//	cin >> a >> b >> c;
//	//输出
//	cout << c <<" " << b << " " << a;//也可以用''表示字符空格 
//	return 0; 
// } 



int main()
{
   int n;
   short s;
   cout << sizeof(n) << " " << sizeof(s) << endl;
   return 0;	
 } 




