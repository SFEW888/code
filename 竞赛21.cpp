//#include <iostream>
//#include <cstring>
//using namespace std;
//int main()
//{
//    char arr[20] = "abcdef";
//    cout << "数组的长度:" << sizeof(arr)/sizeof(arr[0]) << endl;
//    cout << "字符串的长度:" << strlen(arr) << endl;
//    
//    return 0;
//}



//#include <iostream>
//#include <cstring>
//using namespace std;
//int main()
//{
//    char arr[] = {'a','b','c','d','e','f'};
//    cout << "数组的长度:" << sizeof(arr)/sizeof(arr[0]) << endl;
//    cout << "字符串的长度:" << strlen(arr) << endl;
//    
//    return 0;
//}



//#include <iostream>
//using namespace std;
//int main()
//{
//    char arr[20] = { 0 };
//    //输入 
//    cin >> arr;
//    //输出 
//    cout << arr << endl;
//    return 0;
//}



//#include <iostream>
//using namespace std;
//int main()
//{
//    char arr[20] = { 0 };
//    //输入 
//    cin >> arr + 1;//arr表示数组的起始位置，+1意思是跳过一个元素，就是第二个元素的位置 
//    //可以通过调试观察一下arr的内容 
//    cout << arr + 1;
//    return 0;
//}



//#include <cstdio>
//int main()
//{
//    char arr[20] = {0};
//    //输入 
//    scanf("%s", arr);
//    //输出 
//    printf("%s", arr);
//    return 0;
//}



//#include <cstdio>
//int main()
//{
//    char name[10];
//    scanf("%8s", name);
//    return 0;
//}



//#include <iostream>
//using namespace std;
//int main()
//{
//    char arr[20] = { 0 };
//    //输入 
//    cin >> arr;
//    //输出 
//    cout << arr << endl;
//    return 0;
//}




//#include <cstdio>
////方案1 
//int main()
//{
//    char arr[10] = {0};
//    gets(arr);
//    printf("%s\n", arr);
//    return 0;
//}
//方法2 
//#include <cstdio>
//int main()
//{
//    char arr[10] = {0};
//    fgets(arr, sizeof(arr), stdin);
//    printf("%s\n", arr);
//    return 0;
//}




//#include <iostream>
//using namespace std;
//
//const int N = 25;
//int arr[N][N];
// 
//int main()
//{
//	int n = 0;
//	cin >> n;
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j <= n-1-i; j++)
//		{
//			cout << " ";
//		 } 
//		for(int j = 0; j <= i; j++)
//		{
//			if(j == 0 || i == j)
//			    arr[i][j] = 1;
//			if(i >= 2 && j >= 1)
//				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];  
//			cout << arr[i][j] << " ";   
//		}
//		cout << endl;
//	}
//	return 0;
// } 




//#include<cstdio>
//
//int main()
//{
//	char arr[10];
//	scanf("%[^\n]s", arr);
//	printf("%s", arr);
//	return 0;
// } 



//#include<iostream>
//#include<cstdio>
//using namespace std;
//
//int main()
//{
//	char arr[10];
//	int ch = 0;
//	int i = 0;
//	while((ch=getchar()) != '\n')
//	{
//		arr[i] = ch;
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}




//#include<iostream>
//#include<cstdio>
//using namespace std;
//
//int main()
//{
//	char arr[10];
//	int ch = 0;
//	int i = 0;
//	while((ch=getchar()) != '\n')
//	{
//		arr[i] = ch;
//		i++;
//	}
//	arr[i] = '\0';//添加字符串终止符 
//	cout << arr;
//	return 0;
//}


//
//#include<iostream>
//#include<cstdio>
//using namespace std;
//
//int main()
//{
//	char a[] = "hello world";
//	cout << a << endl;
//	return 0;
//}



////方法1 
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//    char a[] = "hello world";
//    cout << a << endl;
//    printf("%s\n", a);
//    return 0;
//}
////方法2 
////单个字符的打印，直到\0字符,\0不打印 
//#include <iostream>
//using namespace std;
//int main()
//{
//    char a[] = "hello world";
//    int i = 0;
//    while (a[i] != '\0')
//    {
//        cout << a[i];
//        i++;
//    }
//    cout << endl;
//    return 0;
//}
////方法3 
////单个字符打印，根据字符串?度来逐个打印 
////strlen可以求出字符串的?度，不包含\0 
//#include <iostream>
//#include <cstring>
//using namespace std;
//int main()
//{
//    char a[] = "hello world";
//    int i = 0;
//    for (i = 0; i < strlen(a); i++)
//    {
//        cout << a[i];
//    }
//    cout << endl;
//    return 0;
//}



//#include <iostream> 
//#include <cstdio>
//#include <cstring>
//using namespace std;
//
//int main()
//{
//    char arr1[] = "abcdef";
//    char arr2[20] = {0};
//    strcpy(arr2, arr1);
//    printf("%s\n", arr2); 
//    return 0;
//}



#include <iostream> 
using namespace std;
#include <cstdio>
#include <cstring>
int main()
{
    char arr1[20] = "hello ";
    char arr2[] = "world";
    strcat(arr1, arr2);
    printf("%s\n", arr1); 
    return 0;
}







