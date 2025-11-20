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
//			if£¨ j = 0 || i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if(i >= 2 && j >=1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
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
//	for (int i = 0; i < n; i++)
//	{
//		for(int j = 1; j <= n-i; j++)
//		{
//			cout << " ";
//		 } 
//		for (int j = 0; j <= i; j++)
//		{
//			if (j == 0 || i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//			cout << arr[i][j] << " ";
//		}
//		
//		cout << endl;
//	}
//	return 0;
//} 




#include <iostream>
using namespace std;

int arr[5][5];
int r1, r2;

int main()
{
	int i = 0;
	int j = 0;
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			cin >> arr[i][j];
		}
	}
	
	cin >> r1 >> r2;
	
	for(i = 0; i < 5; i++)
	{
		int tmp = arr[r1 - 1][i];
		arr[r1 - 1][i] = arr[r2 - 1][i];
		arr[r2 - 1][i] = tmp;
	}
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
	
	
 } 














