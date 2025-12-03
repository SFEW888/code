//#include <iostream>
//using namespace std;
//
//int Letters;
//int Digits;
//int Others;
//int main()
//{
//	int ch;
//	while((ch = getchar()) != '?')
//	{
//		if((ch >= 'a'&&ch <= 'z') || (ch >='A'&&ch <= 'Z'))
//			Letters++;
//		
//		else if(ch >= '0'&&ch <= '9')
//	    	Digits++;
//		
//		else
//		    Others++;
//	}
//    cout << Letters << endl;
//    cout << Digits << endl;
//    cout << Others << endl;
//    
//    return 0;
//
// } 




//#include <iostream>
//using namespace std;
//#include <string>
//
//int main()
//{
//    string s1;
//    string s2 = "hello world";
//    cout << "s1:" << s1 << endl;    
//    cout << "s2:" << s2 << endl;    
//    return 0; 
//}



//#include <stdio.h>
//
////定义main函数
//const int N = 25;
//int arr[N][N];
//int main()
//{
//    //请在此添加‘输出n行杨辉三角形’的代码
//    /********** Begin **********/
//    int n = 0;
//	scanf("%d", &n);
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j <= i; j++)
//		{
//			if(j == 0 || i == j)
//			    arr[i][j] = 1;
//			if(i >= 2 && j >= 1)
//				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];  
//			printf("%d", arr[i][j]);
//            if(i != j)
//            printf(" ");   
//		}
//		printf("\n");
//	}
//
//    /********** End **********/
//    return 0;
//}



//#include <iostream>
//using namespace std;
//#include <string>
//
//int main()
//{
//    string s("hello world"); 
//    string s1 = s;  
//	cout << s << endl;
//	cout << s1 << endl; 
//    return 0; 
//}



//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    string s1("hello world");
//    string s2("hehe");
//    s2 = s1;
//    cout << s2 << endl;
//    return 0;
//}



//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    char arr1[] = "hello world";
//    char arr2[] = "hehe";
//    arr2 = arr1;
//    cout << arr2 << endl;
//    return 0;
//}



//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    string s;
//    //输入 
//    cin >> s;
//    //输出 
//    cout << s << endl;
//    
//    return 0;
//}




//#include<iostream>
//#include <string>
//using namespace std;
//int main ()
//{
//    string name;
//    getline (cin, name);
//    cout << name << endl;
//    
//    return 0;
//}



//#include<iostream>
//#include <string>
//using namespace std;
//int main ()
//{
//    string name;
//    getline (cin, name, 'e');
//    cout << name << endl;
//    
//    return 0;
//}



//#include <iostream>
//#include <string>      
//using namespace std;
//int main()
//{
//    string s;
//    string s1 = "hello";
//    string s2 = "hello world";
//    string s3 = "12ab!~        "; 
//    cout << "s:" << s.size() << endl;
//    cout << "s1:" << s1.size() << endl;
//    cout << "s2:" << s2.size() << endl;
//    cout << "s3:" << s3.size() << endl;
//    return 0;
//}



//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    string s = "abcdef";
//    int i = 0;
//    for(i = 0; i < s.size(); i++)
//    {
//        cout << s[i] << " ";
//    }
//    return 0;
//}



//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    string s = "abcdef";
//    string::iterator it1 = s.begin();
//    string::iterator it2 = s.end();
//    cout << (it1 < it2) << endl;
//    cout << it1 - it2 << endl;
//    return 0;
//}



//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string s = "abcdef"; 
//    //auto it 是让编译器自动推到it的类型 
//    for (auto it = s.begin(); it != s.end(); ++it) 
//    {     
//        cout << *it << ' '; 
//    }
//    cout << endl; 
//    //string::iterator 是正向迭代器类型 
//    //string::iterator it，是直接创建迭代器，it是针对字符串的迭代器 
//    for (string::iterator it = s.begin(); it != s.end(); it++) 
//    {     
//        cout << *it << ' '; 
//    }
//    return 0;
//}
	
	
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    string s = "abcdef"; 
//    for (string::iterator it = s.end() - 1; it >= s.begin(); it--) 
//    {     
//        cout << *it << ' '; 
//    }
//    return 0;
//}	
	
	
	
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    string str = "abcdef"; 
//    cout << str << endl;
//    for (string::iterator it = str.begin(); it < str.end(); ++it) 
//    {     
//        *it = 'x'; 
//    }
//    cout << str << endl;
//    return 0;
//}	
	
	
	
//#include <iostream>
//#include<string>     //添加string头文件 
//using namespace std;
//int main()
//{
//    //向空字符串中尾插字符 
//    string s;
//    s.push_back('h');
//    s.push_back('e');
//    s.push_back('l');
//    s.push_back('l');
//    s.push_back('o');
//    cout << s << endl;
//    //向非空字符串中尾插字符 
//    string s1 = "hello ";
//    s1.push_back('w');
//    s1.push_back('o');
//    s1.push_back('r');
//    s1.push_back('l');
//    s1.push_back('d');
//    cout << s1 << endl;
//    //批量插入字符 
//    string s2;
//    for (char c = 'a'; c <= 'f'; c++)
//    {
//        s2.push_back(c);
//    }
//    cout << s2 << endl;
//    return 0;	
//}
	
	
	
//#include <iostream>
//#include <string>     //添加string头文件 
//using namespace std;
//int main()
//{
//    string s = "hello";
//    s += " world";                    //字符串用双引号，等价于 s = s + " world" 
//    cout << s << endl;
//    
//    //除了+=操作，也可以使用'+'灵活进行字符串拼接 
//    //1.尾部拼接 
//	string s1 = "hello";
//    cout << s1 + " world" << endl;    //s1仍然是"hello" 
//    
//    s1 = s1 + " world";
//    cout << s1 << endl;               //s1是"hello world" 
//    
//    
//    //2.头部拼接 
//    string s2 = "hello";
//    s2 = "world " + s2 ;         
//    cout << s2 << endl;               //s2为："world hello" 
//    
//    return 0;
//}	
	


//#include <iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//    string s = "hello";
//    cout << "s:" << s << endl;
//    //尾删 
//    s.pop_back();
//    cout << "s:" << s << endl;
//    //尾删 
//    s.pop_back();
//    cout << "s:" << s << endl;
//    return 0;
//}



//#include <iostream>
//#include <string>     
//using namespace std;
//int main()
//{
//    string s;
//    s.pop_back();
//    return 0;
//}




#include <iostream>
#include<string>     
using namespace std;
int main()
{
    string s = "abc";
    while(s.size() > 0)  //通过size()函数来控制字符串的?度 
    {
        s.pop_back();
    }
    return 0;
}







