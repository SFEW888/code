//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i = 1;
//	while(i<=10)
//	{
//		if(i == 5)
//		{
//			break;
//		}
//		cout << i << " ";
//		i++;
//	}
//	return 0;
// } 




//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=10; i++)
//	{
//		if(i == 5)
//		{
//			break;
//		}
//		cout << i << " ";
//	}
//	return 0;
// } 




//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i = 1;
//	do
//	{
//		if(i == 5)
//		{
//			break;
//		}
//		cout << i << " ";
//		i++; 
//	}while(i<=10);
//	return 0;
//}




//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i = 1;
//	while(i<=10)
//	{
//		if(i == 5)
//		{
//			continue;
//		}
//		cout << i << " ";
//		i++;
//	}
//	return 0;
// } 



//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=10; i++)
//	{
//		if(i == 5)
//		{
//			continue;
//		}
//		cout << i << " ";
//	}
//	return 0;
// } 




//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i = 1;
//	do
//	{
//		if(i == 5)
//		{
//			continue;
//		}
//		cout << i << " ";
//		i++; 
//	}while(i<=10);
//	return 0;
//}




//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	for(int i=2; i<n; i++)
//	{
//		if(n%i == 0)
//		{
//			cout << n / i << endl;
//			break;
//		}
//	}
//	return 0;
// } 




//#include <iostream>
//using namespace std;
//
//int main()
//{
//	for(int i=1; i<10; i++)
//	{
//		for(int j=1; j<=i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);
//		}
//		cout << endl;
//	}
//	return 0;
//}



//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[3][5] = {1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7};
//	cout << arr[2][4] << endl;
//	return 0; 
// } 




//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[3] = {1,2,3};
//	cout << arr << endl;
//	return 0; 
// } 




//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i = 1; i <= 2019; i++)
//	{
//		int n = i;
//		while(n)
//		{
//			if(n%10 == 9)
//		   {
//			  count++;
//			  break;
//		   } 
//		 n /= 10;
//		}
//	}
//	cout << count <<endl;
//}




//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	int a;
//	cin >> n;
//	while(n--)
//	{
//		cin >> a;
//		int x = 1;
//		int y = 1;
//		int z = 1;
//		while(a > 2)
//		{
//			z = x + y;
//			x = y;
//			y = z;
//			a--;
//		}
//		cout << z << endl;
//	}
//	 
//	return 0;
//	
// } 




//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	int i = 1;
//	double e = 1;
//	while(i <= n)
//	{
//		int j = 1;
//		long long fac = 1;
//		for(j = 1; j <= i; j++)
//		{
//			fac *= j;
//		}
//		e += 1.0/fac;
//		i++;
//	 } 
//	 printf("%.10lf\n", e);
//	 return 0;
// } 




#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int i = 1;
    double e = 1;
    while (i <= n)
    {
        int j = 0;
        long long fac = 1;
        for (j = 1; j <= i; j++)
        {
            fac *= j;
        }
        e += 1.0 / fac;
        i++;
    }
    printf("%.10lf\n", e);
    return 0;
}


















































