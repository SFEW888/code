//#include <iostream>
//#include <string> 
//using namespace std;
//
//int main()
//{
//	
//	string s1 = "hello";
//	s1 += " world";
//	cout << s1 << endl;
//	string s2 = "hello";
//	s2 = "world " + s2;
//	cout << s2 << endl;
//	return 0;
//}




//#include <iostream>
//#include <string> 
//using namespace std;
//
//int main()
//{
//	string s = "abc";
//	while(s.size() >= 1)
//	{
//		s.pop_back();
//	}
//	cout << s.size() << endl;
//	cout << "s:" << s << endl; 
// } 


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[3][5] = {1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7};
//	cout << arr[2][4] << endl;
//	return 0;
//}




//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int arr[3][5] = {1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7};
//	
//	for(int i = 0; i < 3; i++)
//	{
//		for(int j = 0; j < 5; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}




//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int main()
//{
//	int a[10][10];
//	memset(a, 0, sizeof(a));
//	for(int i = 0; i < 10; i++)
//	{
//		for(int j = 0; j < 10; j++)
//		{
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}





//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int main()
//{
//	char a[10][10];
//	memset(a, 'x', sizeof(a));
//	for(int i = 0; i < 10; i++)
//	{
//		for(int j = 0; j < 10; j++)
//		{
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
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
//		for(int j = 0; j <= n-1-i5; j++)
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




#include<iostream>
using namespace std;

const int N = 5;
int arr[N][N];
int r1,r2;

int main()
{
	int i = 0;
	int j = 0;
	// ‰»Î 
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			cin >> arr[i][j];
		}
	}
	//Ωªªª
	cin >> r1 >> r2;
	for(j = 0; j < N; j++)
	{
		int tmp = arr[r1-1][j];
		arr[r1-1][j] = arr[r2-1][j];
		arr[r2-1][j] = tmp;
	 } 
	// ‰≥ˆ
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
 } 




























































































































