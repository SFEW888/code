//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i = 1;
//	for(i = 1;i <=10;i++)
//	{
//		if(i == 5)
//		   continue; 
//		   
//		cout << i << " ";
//		
//	}
//	return 0;
//	
// } 




//#include <iostream>
//using namespace std;
//int main()
//{
//    int flag = 1;
//    if (!flag)
//    {
//        cout << "do something" << endl;
//    }
//    return 0;
//}




//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int year = 0;
//    cin >> year;
//    if (year % 4 == 0 && year % 100 != 0)
//        cout << "1" << endl;
//    else if (year % 400 == 0)
//        cout << "1" << endl;
//    else
//        cout << "0" << endl;
//    return 0;
// } 




//#include <iostream>
//using namespace std;
//int main()
//{
//    int year = 0;
//    cin >> year;
//    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//        cout << "1" << endl;
//    else
//        cout << "0" << endl;
//    return 0;
//}




//#include <iostream>
//using namespace std;
//int main()
//{
//    int d = 0;
//    cin >> d;
//    if (d == 1 || d == 3 || d == 5)
//        cout << "NO" << endl;
//    else
//        cout << "YES" << endl;
//    return 0;
//}




//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	if(a + b > c && a + c > b && b + c > a)
//	    cout << 1 << endl;
//	else 
//	    cout << 0 << endl;
//	return 0;	    
// } 




//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int n = 0;
//    cin >> n;
//    if (n % 3 == 0)
//        cout << "余数为0" << endl;
//    else if (n % 3 == 1)
//        cout << "余数是1" << endl;
//    else
//        cout << "余数是2" << endl;
//    return 0;
//}




//#include <iostream>
//using namespace std;
//int main()
//{
//    int n = 0;
//    cin >> n;
//    switch (n % 3)
//    {
//    case 0:
//        cout << "余数为0" << endl;
//    case 1:
//        cout << "余数是1" << endl;     
//    case 2:
//        cout << "余数是2" << endl;    
//    }
//    return 0;
//}




//#include <iostream>
//using namespace std;
//int main()
//{
//    int n = 0;
//    cin >> n;
//    switch (n % 3)
//    {
//    case 0:
//        cout << "余数为0" << endl;
//        break; 
//    case 1:
//        cout << "余数是1" << endl;
//		break;     
//    case 2:
//        cout << "余数是2" << endl;    
//        break;
//	}
//    return 0;
//}




//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int day = 0;
//    cin >> day;
//    switch (day)
//    {
//    case 1:
//        cout << "Monday" << endl;
//        break;
//    case 2: 
//        cout << "Tuesday" << endl;
//        break;
//    case 3:
//        cout << "Wednesday" << endl;
//        break;
//    case 4:
//        cout << "Thursday" << endl;
//        break;
//    case 5:
//        cout << "Friday" << endl;
//        break;
//    case 6:
//        cout << "Saturday" << endl;
//        break;
//    case 7:
//        cout << "Sunday" << endl;
//        break;
//    }
//    return 0;
//}




//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int day = 0;
//    cin >> day;
//    switch (day)
//    {
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//        cout << "Workday" << endl;
//        break;
//    case 6: 
//    case 7:
//        cout << "Weekend" << endl;
//        break;
//    default:
//        cout << "input error!" << endl;
//        break;    
//    }
//    return 0;
//}
    
    
    
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int n = 0, month = 0;
//    cin >> n; //一次性读取到的事6位整数 
//    month = n % 100; //获取最低2位，就是月份 
//    switch (month)
//    {
//    case 3:
//    case 4:
//    case 5:
//        cout << "spring" << endl;
//        break;
//    case 6:
//    case 7:
//    case 8:
//        cout << "summer" << endl;
//        break;
//    case 9:
//    case 10:
//    case 11:
//        cout << "autumn" << endl;   
//        break;
//    case 12:
//    case 1:
//    case 2:
//        cout << "winter" << endl;
//        break;
//    }
//    return 0;
//}
    
    
    
    
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//    int year = 0, month = 0;
//    scanf("%4d%2d", &year, &month);
//    switch (month)
//    {
//    case 3:
//    case 4:
//    case 5:
//        cout << "spring" << endl;   
//        break;
//    case 6:
//    case 7:
//    case 8:
//        cout << "summer" << endl;
//        break;
//    case 9:
//    case 10:
//    case 11:
//        cout << "autumn" << endl;
//        break;
//    case 12:
//    case 1:
//    case 2:
//        cout << "winter" << endl;
//        break;
//    }
//    return 0;
//}





//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int i = 1;
//    while (i <= 10)
//    {
//        cout << i << " ";
//        i++;
//    }
//    return 0;
//}




//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	while(n)
//	{
//		cout << n % 10;
//		n /= 10;
//	}
//	return 0;
// } 





//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n = 0;
//    int sum = 0;
//	cin >> n;
//	while(n)
//	{
//		sum += n % 10;
//		n /= 10;
//	}
//    cout << sum << endl;
//	return 0;
//	
// } 





#include<iostream>
using namespace std;

int main() 
{
	int n = 0;
	cin >> n;
	int i = 1;
	long long sum = 0; 
	while(i <= n)
	{
		sum += i;
		i++;
	}
	cout << sum << endl;
	return 0;
}



















