//#include <iostream>
//using namespace std;

//const int N = 10010;
//int arr[N]; 
//
// int main()
// {
// 	int i = 0; 
// 	int n;
// 	cin >> n;
// 	for(i=0; i<n; i++)
// 	{
// 		cin >> arr[i];
//	 }
////	for(int i=0; i<n; i++)
////	{
////	 cout << arr[i] << endl;
////	}
//    int m;
//    cin >> m;
//    for(i=0; i<n; i++)
//    {
//    	if(m == arr[i])
//    	{
//    		cout << i << endl;
//    		break;
//		}
//		
//	}
//	if(i == n)
//	cout << -1 <<endl;
//
//
//
//	return 0;
//  } 



//int main()
//{
//	char a[] = "hello world";
//	int i = 0;
//	while(a[i] != 0)
//	{
//		cout << a[i++];
//	 }
// 
//}



//查找特定的值 
//#include<iostream>
//using namespace std; 
//
//const int N = 10010;
//int arr[N];
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	cin >> n;
//	for(i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	int x;
//	cin >> x;
//	for(i = 0; i < n; i++)
//	{
//		if(x == arr[i])
//		{
//			cout << i << endl;
//			break;
//		}
//	}
//	if(i == n)
//	   cout << -1 << endl;
//	return 0;   
//	
//}




//数组逆序重存放 
//#include<iostream>
//using namespace std;
//
//const int N = 110;
//int arr[N];
//
//int main()
//{
//	int i = 0;
//	int n;
//	cin >> n;
//	for(i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	for(i = n - 1; i >= 0; i--)
//	{
//		cout << arr[i] << " ";
//	}
//	return 0;
// } 

#include<iostream>
using namespace std;

const int N = 11;
int arr[N];

int main()
{
	int i = 0;
	int n;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int left = 0;
	int right = n - 1;
	while(left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--; 
	}
	for(i = 0; i < n; i++)
	{
		cout << arr[i] <<endl;
	}
	return 0;
}


 

































































