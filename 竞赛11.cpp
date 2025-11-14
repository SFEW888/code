//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a1, a2, n;
//	cin >> a1 >> a2 >> n;
//	if (n == 1)
//	   cout << a1 << endl;
//	else if (n == 2)
//	   cout << a2 << endl;
//	else 
//	   cout << a1 + (n - 1) * (a2 - a1) << endl;     
// } 



//初步 
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int m, t, s;
//	int r;//剩余的苹果数 
//	cin >> m >> t >> s;
//	if(s % t == 0)
//	    r = m - s / t;
//	else
//	    r = m - s / t - 1;
//	cout << r << endl; 
//	return 0;      
//}



//#include<iostream>
//using namespace std;
//int main()
//{
//	int m, t, s;
//	int r;
//	cin >> m >> t >> s;
//	if(t == 0)
//	  cout << 0 << endl;
//	if(s % t == 0)
//	  cout << ((m - s / t) > 0 ? (m - s / t) : 0) <<endl;
//	else
//	  cout << ((m - s / t - 1) > 0 ? (m - s / t - 1) : 0) <<endl; 
//	return 0;     
//}



//反向输出 
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
//	
// } 




//数位之和 
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	int x = 0;
//	cin >> n;
//	while(n)
//	{
//		x += n % 10;
//		n /= 10;
//	}
//	cout << x << endl;
//	return 0;
// } 





//求和1
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	long long sum = 0;
//	cin >> n;
//	int i = 1;
//	while(i <= n)
//	{
//		sum += i;
//		i++;
//	}
//	cout << sum <<endl;
//	return 0;
// } 





//含k个3的数
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	 long long m, k;
//	 int c = 0;
//	 cin >> m >> k;
//	 while(m)
//	 {
//	    if(m % 10 == 3)
//		   c++;
//		m /= 10;   	
//	 }
//	if(c == k)
//	    cout << "YES" << endl;
//	else
//	    cout << "NO" << endl;
//		
//	return 0;	    
//	
// } 























