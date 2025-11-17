//#include <iostream>
//using namespace std;

//int main() 
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for(int n : arr)
//	{
//		cout << n << " "; 
//	}
//	return 0;
//}




//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	for(n = 1; n <= 10; n++)
//	{
//		cout << n << " ";
//	}
//	return 0;
// } 




//#include <iostream>
//using namespace std;
//
//int main()
//{
//	
//	for(int n = 1; n <= 10; n++)
//	{
//		cout << n << " ";
//	}
//	return 0;
// } 
//
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n = 1;
//	while(n <= 10)
//	{
//		cout << n << " ";
//		n++;
//	}
//	return 0;
// } 




//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for(i = 1; i <= 100; i++)
//	{
//		if(i % 3 == 0)
//		{
//			sum += i;
//		}
//	}
//	cout << sum <<endl;
//	return 0;
// } 




//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for(i = 3; i <= 100; i += 3)
//	{
//		if(i % 3 == 0)
//		{
//			sum += i;
//		}
//	}
//	cout << sum <<endl;
//	return 0;
// } 




//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	int age = 0;
//	int sum = 0;
//	cin >> n;
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> age;
//		sum += age;		
//	}
//	printf("%.2lf\n", sum * 1.0 / n); 
//	return 0;
// } 




//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	int a, b, c;
//	int p1, p2, p3;//最好初始化，或者直接定为全局变量 
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> a >> b >> c;
//		p1 += a;
//		p2 += b;
//		p3 += c;
//	}
//	int sum = p1 + p2 + p3;
//		cout << p1 << " " << p2 << " " << p3 << " "<< sum <<endl;
// } 






//#include <iostream>
//using namespace std;
//int n, p1, p2, p3, sum, a, b, c;
//int main()
//{
//    cin >> n;
//    for(int i = 1; i <= n; i++)
//    {
//        cin >> a >> b >> c;
//        p1 += a;
//        p2 += b;
//        p3 += c;
//    }
//    sum = p1 + p2 + p3;
//    cout << p1 << " " << p2 << " " << p3 << " "<< sum << endl;
//    return 0;
//}





//#include <iostream>
//using namespace std;
//int main()
//{
//    int i = 1;
//    do
//    {
//        cout << i << " ";
//        i = i + 1;
//    } while (i <= 10);
//    return 0;
//}




#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int count = 0;
	do
	{
		n = n / 10;
		count++;
	}while(n);
	cout << count << endl;
	return 0;
 } 






































































