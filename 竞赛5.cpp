#include <iostream>
#include <cstdio>
using namespace std;

//int main()
//{
//	int ch = getchar();
//	cout << ch << endl;
//	cout << (char)ch;//打印空格 ,a是没法读到的 
//	cout << "xxxx" << endl;
//	ch = getchar(); 
//	cout << (char)ch << endl;//只有再接收一次才行，才能接收a 
//} 




//int main()
//{
//	int ch = getchar();
//	cout << ch << endl;
//	cout <<(char)ch;
//	ch = getchar();
//	cout << ch <<endl;//读取回车的ASCII值 
//	cout << (char)ch;//打印回车 
//	cout << "xxxx" <<endl;
//	return 0;
//}




//int main()
//{
//	int n = getchar();
//	cout << n << endl;
//	return 0;
//}




//int main()
//{
//	//int n = getchar();
//	//cout << n <<endl;
//	//putchar(n);
//	
//	//putchar还可以单独使用
//	putchar('x'); 
//	putchar('\n');//\n意思换行 
//	putchar('a');
//	putchar('\n');
//	putchar('b');
//	
//	putchar('a\n');
//	putchar('x\n'); //不能这样用 
//	
//	
//	
//	return 0;
//}




//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	printf("%d %d %d %d\n", a, b, c, d);
//	return 0;
//}




//int main()
//{
//    int x = 0;
//    float y = 0;
//    
//    // 用戶输入 "    -13.45e12# 0" 
//    scanf("%d%f", &x, &y);
//    printf("%d\n", x);
//    printf("%f\n", y);
//    return 0;
//}




//#include <cstdio>
//int main() 
//{
//    printf("Hello World\n");
//    return 0;
//}




//int main() 
//{
//    printf("Hello\nWorld\n");
//    
//    printf("Hello\n");
//    printf("World\n");
//    return 0;
//}




//#include <cstdio>
//// 输出 There are 3 apples 
//int main()
//{
//    printf("There are %d apples\n", 3);
//    return 0;
//}




//int main()
//{
//    printf("%s will come tonight\n", "zhangsan");
//    return 0;
//}




//int main()
//{
//    printf("%s says it is %d o'clock\n", "lisi", 21);
//    return 0;
//}




//#include <cstdio>
//int main()
//{
//    printf("%5d\n", 123); // 输出为 "  123" 
//    return 0;
//}




//#include <cstdio>
//// 输出 "  123.450000" 
//int main()
//{
//    printf("%12f\n", 123.45);
//    return 0;
//}




//int main()
//{
//    printf("%.2f\n", 0.5);
//    return 0;
//}





//#include <cstdio>
//// 输出为 "  3.14" 
//int main()
//{
//    printf("%6.2f\n", 3.14);
//    return 0;
//}



//#include <cstdio>
//int main()
//{
//    printf("%*.*f\n", 6, 2, 0.5);
//    return 0;
//}




//#include <cstdio>
//int main()
//{
//    int i = 0;
//    scanf("%d", &i);
//    printf("%d\n", i);
//    return 0;
//}




//#include <cstdio>
//int main()
//{
//    char ch = 0;
//    scanf("%c", &ch);
//    printf("--%c--\n", ch);
//    return 0; 
//}




//#include <cstdio>
//int main()
//{
//    char ch = 0;
//    scanf(" %c", &ch);//%c前面的空格会让scanf强制跳过空白字符，去读取非空白字符 
//    printf("--%c--\n", ch);
//    return 0; 
//}





//#include <cstdio>
//int main() 
//{  
//    int a;
//    char ch;
//    scanf("%d%c", &a, &ch);
//    printf("%d %c\n", a, ch);
//    return 0;  
//}




//int main() 
//{  
//    int a;
//    char ch;
//    scanf("%d %c", &a, &ch);//%c的前面加上空格，是强制跳过数据输入中的空白字符 
//    printf("%d %c\n", a, ch);
//    return 0;  
//}




int main()
{
    int a = 0;
    int b = 0;
    float f = 0.0f;
    int r = scanf("%d %d %f", &a, &b, &f);
    printf("a=%d b=%d f=%f\n", a, b, f);
    printf("r = %d\n", r);
    return 0;
}



















