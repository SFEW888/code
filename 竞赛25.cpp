#include <iostream>

using namespace std;

const int N = 1e5 + 10;

//·â×° 
class SpList
{
	int a[N];
	int n;
	
public:
	SpList()
	{
		n = 0;
	}
	
	void push_back(int x)
	{
		a[++n] = x;
	}
	
	void print()
	{
		for(int i = 1; i <= n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}	
 }
 
 int main()
 {
 	SpList s1, s2;
 	
 	for(int i = 1; i <= 5; i++)
 	{
 		s1.push_back(i);
 		s2.push_back(i * 2);
	 }
	 
	 s1.print();
	 s2.print();
	 
 	return 0;
  } 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
