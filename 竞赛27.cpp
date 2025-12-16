////计算 (a+b)/c 的值
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	cout << (a + b) / c << endl;
//	return 0;
// } 



////与 7 无关的数
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	int i = 1;
//	int sum = 0;
//	while(i <= n)
//	{
//		if(i % 7 != 0 && i % 10 != 7 && i / 10 != 7)
//		{
//			sum += (i * i);
//		}
//		i++;
//	}
//	cout << sum << endl;
//	return 0;
// } 



////多组输入a+b II
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;//表示数据组数
//	cin >> n;
//	int a, b;//每行输入的a,b值 
//	while(n--) 
//	{
//		cin >> a >> b;
//		cout << a + b << endl;
//	}
//	return 0;
// } 




//斐波那契数
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, a;
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
//	 } 
// } 

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, a, i;
//	int ret[35] = { 0, 1, 1};
//	for(i = 3; i < 30; i++)
//	{
//		ret[i] = ret[i - 1] + ret[i - 2];
//	}
//	cin >> n;
//	while(n--)
//	{
//		cin >> a;
//		cout << ret[a] << endl;
//	}
//	return 0;
//}



////制糊串 
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    string s, t;
//    cin >> s >> t;
//    int q;
//    cin >> q;
//    int l1, r1, l2, r2;
//    while (q--) // 这种写法是常?的处理 q 次询问的方式 
//    {
//        cin >> l1 >> r1 >> l2 >> r2;
//        string s1 = s.substr(l1 - 1, r1 - l1 + 1); // 注意这道题的字符串是从 1 开始计数的 
//        string t1 = t.substr(l2 - 1, r2 - l2 + 1);
//        if (s1 < t1)
//        {
//            cout << "yifusuyi" << endl;
//        }
//        else if (s1 > t1)
//        {
//            cout << "erfusuer" << endl;
//        }
//        else
//        {
//            cout << "ovo" << endl;
//        }
//   }
//    return 0;
//}



////多组输入a+b
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a, b;
//	while(cin >> a >> b)
//	{
//		cout << a + b << endl;
//	}
//	return 0;
// } 



////数字三角打印 
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	while(cin >> n)
//	{
//		for(int i = 1; i <= n; i++)
//	  {
//		    for(int j = 1; j <= i; j++)
//		  {
//			 cout << j << " "; 
//		  }
//		     cout << endl;
//	   }
//	}
//}



////定位查找
//#include <iostream>
//using namespace std;
//
//const int N = 25;
//int arr[N];
//
//int main()
//{
//	int n, m;
//	while(cin >> n)
//	{
//		for(int i = 0; i < n; i++)
//		{
//			cin >> arr[i];
//		}
//		cin >> m;
//	int i = 0;
//	for(i = 0; i < n; i++)
//	{
//		if(m == arr[i])
//		{
//			cout << i << endl;
//			break;
//		}
//	}
//	if(i == n)
//	   {
//		    cout << "No" << endl;
//	   }
//	
//	}
//	
//	
//	return 0;
// } 



//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int ch = 0;
//	int Letters = 0;
//	int Digits = 0;
//	int Others = 0;
//	while((ch = getchar()) != '?')
//	{
//		if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			Letters++;
//		}
//		else if(ch >= '0' && ch <= '9')
//		{
//			Digits++;
//		}
//		else
//		{
//			Others++;
//		}
//	}
//		cout << "Letters=" << Letters << endl;
//		cout << "Digits=" << Digits << endl;
//		cout << "Others=" << Others << endl;
//		
//		return 0;
//			
//}



//#include <iostream>
//using namespace std;
//int main()
//{
//    string s;
//    int Letters = 0;
//    int Digits = 0;
//    int Others = 0;
//    getline(cin, s);
//    s.pop_back(); 
//    for (auto ch : s)
//    {
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//            Letters++;
//        else if (ch >= '0' && ch <= '9')
//            Digits++;
//        else
//            Others++;
//    }
//    cout << "Letters=" << Letters << endl;
//    cout << "Digits=" << Digits << endl;
//    cout << "Others=" << Others << endl;
//    return 0;
//}




//        if (islower(ch) || isupper(ch))
//            Letters++;
//        else if (ch >= '0' && ch <= '9')
//            Digits++;
//        else
//            Others++;



//        if (isalpha(ch))
//            Letters++;
//        else if (ch >= '0' && ch <= '9')
//            Digits++;
//        else
//            Others++;















