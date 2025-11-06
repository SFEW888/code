#include <iostream>
using namespace std;
 
 
//int main()
//{
//	char a = 'Z';
//	char b = a + 'Z';
//	cout << b << endl;//不会输出 
//	cout << (int)b << endl;
//	printf("%d", b);
//	return 0;
// } 



//#include <iostream>
//using namespace std;
//int main()
//{
//    int a = 5 + 2;   //加法运算 
//    int b = 5 - 2;   //减法运算 
//    int c = 5 * 2;   //乘法运算 
//    int d = 5 / 2;   //除法运算，得到的是整除后的商 
//    int e = 5 % 2;   //取余运算，得到的是整除后的余数 
//    
//    cout << a << endl;
//    cout << b << endl;
//    cout << c << endl;
//    cout << d << endl;
//    cout << e << endl;
//    
//    return 0;
//}





//int main()
//{
//    int a = 10;
//    int b = 0;
//    int c = a / b;
//    
//    float d = 6.0;
//    float e = d % 2;//报错 
//    return 0;
//}





//int main()
//{
//    float x = 6 / 4;
//    cout << x << endl;          // 1
//    int y = 6.0 / 4;          // 6/4.0结果是一样的 
//    cout << y << endl;          // 1.5
//    return 0;
//}




//int main()
//{
//    cout << 9 % -4 << endl;          // 1
//    cout << -9 % -4 << endl;         // -1
//    cout << -9 % 4 << endl;          // -1
//    return 0;
//}




 
//int main()
//{
//    char a = 'Z';
//    char b = a + 'Z';
//    cout << b << endl;     // 输出了不显示的内容 
//    
//    //printf是格式化输出，后面章节会讲，这里暂不做讲解 
//    printf("%d", b);      // -76，char的十进制内容 
//    return 0;
//}




//int main()
//{
//    char a = 'Z';
//    char b = a + 'Z';
//    cout << b << endl;     // 输出了不显示的内容 
//    cout << (int)b << endl;//-76
//    return 0;
//}







//int main()
//{
//	int a = 5;
//	float f = a * 1.0 / 4;//1.25
//	float b = a / 4;//1
//	cout << f << endl;
//	cout << b << endl;
//	return 0;
//}





int main()
{ 
    char a = 'a';
    int b = 10;
    char c = a + b; //这里a会发生整型提升，a+b的结果存放到c中，又发生截断 
    cout << c << endl;
    
    int h = 10;
    double d = 3.14;
    double e = h + d; //c+d的时候，这里c会发生算数转换，转换为double类型 
    cout << e <<endl;
    
    return 0;
}



























