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



#include<iostream>
using namespace std;
int main()
{
	int m, t, s;
	int r;
	cin >> m >> t >> s;
	if(t == 0)
	  cout << 0 << endl;
	if(s % t == 0)
	  cout << ((m - s / t) > 0 ? (m - s / t) : 0) <<endl;
	else
	  cout << ((m - s / t - 1) > 0 ? (m - s / t - 1) : 0) <<endl; 
	return 0;     
}






















