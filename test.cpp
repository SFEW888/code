//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s;  cin >> s;
//	int cnt = 0;
//	for(char c : s)
//	{
//		if(c != 'a' && c != 'b')
//		{
//			cout << "Bad" << endl;
//		}
//		if(c == 'a') cnt++;
//		else cnt--;
//		if(cnt < 0)
//		{
//			cout << "Bad" << endl;
//			return 0;
//		}
//	}
//	if(cnt == 0) cout << "Good" << endl;
//	else cout << "Bad" << endl;
//	return 0;
//}



//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int n, m;
//
//int main()
//{
//	cin >> n >> m;
//	vector<string> s(n);
//	for(int i = 0; i < n; i++) cin >> s[i];
//	while(m--)
//	{
//		string t;
//		cin >> t;
//		int cnt = 0;
//		for(string& a : s)
//		{
//			if(t.size() >= a.size() && t.substr(0, a.size()) == a) 
//			   cnt++;
//		}
//		cout << cnt << endl;
//	}
//	return 0;
//}



//#include <iostream>
//#include <string>
//using namespace std;
//
//const int N = 1e5 + 10;
//
//
//int e[N], ne[N]; 
//int hp = -1;  
//int id = 0;   
//
//
//void insert(int x, int y) 
//{
//    e[id] = y;
//    
//    if (hp == -1) 
//	{
//        ne[id] = -1;
//        hp = id++;
//        return;
//    }
//    
//    if (e[hp] == x) 
//	{
//        ne[id] = hp;
//        hp = id++;
//        return;
//    }
//    
//    int prev = -1;
//    int cur = hp;
//    while (cur != -1 && e[cur] != x) 
//	{
//        prev = cur;
//        cur = ne[cur];
//    }
//    
//    if (cur != -1) 
//	{
//        ne[prev] = id;
//        ne[id] = cur;
//        id++;
//    } else 
//    {
//    	cur = hp;
//        while (ne[cur] != -1) 
//		{
//            cur = ne[cur];
//        }
//        ne[cur] = id;
//        ne[id] = -1;
//        id++;
//	}
//}
//
//void deleteNode(int x) 
//{
//    if (hp == -1) return; 
//    
//    if (e[hp] == x) 
//	{
//        hp = ne[hp];
//        return;
//    }
//    
//    int prev = -1;
//    int cur = hp;
//    while (cur != -1 && e[cur] != x) 
//	{
//        prev = cur;
//        cur = ne[cur];
//    }
//    
//    if (cur != -1) 
//	{
//        ne[prev] = ne[cur];
//    }
//}
//
//int main() 
//{
//    int n;
//    cin >> n;
//    
//    for (int i = 0; i < n; i++) 
//	{
//        string s;
//        cin >> s;
//        
//        if (s == "insert") 
//		{
//            int x, y;
//            cin >> x >> y;
//            insert(x, y);
//        } else if (s == "delete") 
//		{
//            int x;
//            cin >> x;
//            deleteNode(x);
//        }
//    }
//    
//    if (hp == -1) 
//	{
//        cout << "NULL" << endl;
//    } else 
//	{
//        int cur = hp;
//        while (cur != -1) 
//		{
//            cout << e[cur];
//            if (ne[cur] != -1) 
//			{
//                cout << " ";
//            }
//            cur = ne[cur];
//        }
//        cout << endl;
//    }
//    
//    return 0;
//}



#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() 
{
    int n, m;  
    cin >> n >> m;
    
    unordered_map<string, int> cnt;
    for (int i = 0; i < n; i++) 
	{
        string s;  
        cin >> s;
        cnt[s]++;
    }
    
    for (int i = 0; i < m; i++) 
	{
        string t;  
        cin >> t;
        int res = 0;  
        
       
        for (int l = 1; l <= t.size(); l++) 
		{  
            string p = t.substr(0, l); 
            if (cnt.find(p) != cnt.end()) 
			{
                res += cnt[p];
            }
        }
        
        cout << res << "\n";
    }
    
    return 0;
}







































































