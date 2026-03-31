//并查集 

//初始化
//const int N = 1e6 + 10;
//int n;
//int fa[N];//双亲表示法
//
////初始化
//void init()
//{
//	for(int i = 1; i <= n; i++) fa[i] = i;
//} 



//查询操作
//int find(int x)
//{
//	if(fa[x] == x) return x;
//	else find(fa[x]);
//	
//	//一行实现
//	return fa[x] == x ? x : find(fa[x]); 
//} 

//合并操作
//void un(int x, int y)
//{
//	int fx = find(x);
//	int fy = find(y);
//	fa[fx] = fy;
//} 

//判断操作
//bool issame(int x, int y)
//{
//	return find(x) == find(y);
//} 




//路径压缩
//int find(int x)
//{
//	if(fa[x] == x) return x;
//	return fa[x] == find(fa[x]);
//	
//	//一行实现
//	return fa[x] == x ? x : fa[x] == find(fa[x]); 
//} 

//按秩合并
//int fa[N];
//int h[N];
//
//void init()
//{
//	for(int i = 1; i <= n; i++) fa[i] = i, h[i] = 1;
//}
//
//void un(int x, int y)
//{
//	int fx = find(x);
//	int fy = find(y);
//	
//	if(fx != fy)
//	{
//		if(h[fx] < h[fy]) fa[fx] = fy;
//		else if(h[fx] > h[fy]) fa[fy] = fx;
//		else fa[fx] = fy, h[fy]++;
//	}
//}

//按大小合并
//int fa[N];
//int s[N];
//
//void init()
//{
//	for(int i = 1; i <= n; i++) fa[i] = i, s[i] = 1; 
//}
//
//void un(int x, int y)
//{
//	int fx = find(x);
//	int fy = find(y);
//	
//	if(fx != fy)
//	{
//		if(s[fx] < s[fy]) fa[fx] = fy, s[fy] += s[fx];
//		else fa[fy] = fx, s[fx] += s[fy];
//	}
//}



//【模板】并查集
//#include <iostream>
//
//using namespace std;
//
//const int N = 2e5 + 10;
//
//int n;
//int fa[N];
//
//int find(int x)
//{
//	if(fa[x] == x) return x;
//	return fa[x] = find(fa[x]);
//}
//
//int main()
//{
//	int T;
//	cin >> n >> T;
//	
//	//初始化
//	for(int i = 1; i <= n; i++) fa[i] = i;
//	
//	while(T--)
//	{
//		int z, x, y; cin >> z >> x >> y;
//		if(z == 1)//合并
//		{
//			int fx = find(x);
//			int fy = find(y);
//			fa[fx] = fy; 
//		} 
//		else//判断
//		{
//			if(find(x) == find(y)) cout << "Y" << endl;
//			else cout << "N" << endl;
//		} 
//	} 
//	
//	return 0;
//}




//亲戚
//#include <iostream>
//
//using namespace std;
//
//const int N = 5010;
//
//int n, m, p;
//int fa[N];
//
//int find(int x)
//{
//	return fa[x] == x ? x : fa[x] = find(fa[x]); 
//} 
//
//void un(int x, int y)
//{
//	int fx = find(x), fy = find(y);
//	fa[fx] = fy;
//}
//
//bool issame(int x, int y)
//{
//	return find(x) == find(y);
//}
//
//int main()
//{
//	cin >> n >> m >> p;
//	
//	//初始化
//	for(int i = 1; i <= n; i++) fa[i] = i;
//	
//	while(m--)
//	{
//		int x, y; cin >> x >> y;
//		un(x, y);
//	} 
//	
//	while(p--)
//	{
//		int x, y; cin >> x >> y;
//		if(issame(x, y)) cout << "Yes\n";
//		else cout << "No\n";
//	}
//	
//	return 0;
//}




//Lake Counting S
//#include <iostream>
//
//using namespace std;
//
//const int N = 110;
//
//int n, m; 
//char a[N][N];
//int fa[N * N];
//
//int dx[] = {0, 1, 1, 1};
//int dy[] = {1, 1, 0, -1};
//
//int find(int x)
//{
//	return fa[x] == x ? x : fa[x] = find(fa[x]);
//}
//
//void un(int x, int y)
//{
//	fa[find(x)] = find(y);
//}
//
//int main()
//{
//	cin >> n >> m;
//	
//	for(int i = 0; i < n; i++)
//	    for(int j = 0; j < m; j++)
//	        cin >> a[i][j];
//	        
//	//初始化
//	for(int i = 0; i < n * m; i++) fa[i] = i;
//	
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < m; j++)
//		{
//			if(a[i][j] == '.') continue;
//			
//			for(int k = 0; k < 4; k++)
//			{
//				int x = i + dx[k], y = j + dy[k];
//				if(y >= 0 && a[x][y] == 'W')//防止越界访问
//				{
//					un(i * m + j, x * m + y);
//				} 
//			}
//		}
//	}
//		
//	int ret = 0;
//	for(int i = 0; i < n * m; i++)
//	{
//		//一维转二维
//		int x = i / m, y = i % m;
//		if(a[x][y] == 'W' && fa[i] == i) ret++; 
//    }	       
//    
//    cout << ret << endl;
//    
//    return 0;
//}




//扩展并查集 
//团伙
//#include <iostream>
//
//using namespace std;
//
//const int N = 1010;
//
//int n, m;
//int fa[N * 2];
//
//int find(int x)
//{
//	return fa[x] == x ? x : fa[x] = find(fa[x]);
//} 
//
////朋友域做父节点
//void un(int x, int y)
//{
//	fa[find(y)] = find(x);
//} 
//
//int main()
//{
//	cin >> n >> m;
//	
//	//初始化
//	for(int i = 1; i <= n * 2; i++) fa[i] = i;
//	
//	while(m--)
//	{
//		char op;
//		int x, y;
//		cin >> op >> x >> y;
//		
//		if(op == 'F')
//		{
//			un(x, y);
//		}
//		else
//		{
//			un(x, y + n);
//			un(y, x + n);
//		}
//	} 
//	
//	int ret = 0;
//	for(int i = 1; i <= n; i++)
//	{
//		if(fa[i] == i) ret++;
//	}
//	
//	cout << ret << endl;
//	
//	return 0;
//}




//食物链
//#include <iostream>
//
//using namespace std;
//
//const int N = 5e4 + 10;
//
//int n, k;
//int fa[N * 3];
//
//int find(int x)
//{
//	return fa[x] == x ? x : fa[x] = find(fa[x]);
//} 
//
//void un(int x, int y)
//{
//	fa[find(x)] = find(y);
//}
//
//int main()
//{
//	cin >> n >> k;
//	for(int i = 1; i <= n * 3; i++) fa[i] = i;
//	
//	int ret = 0;
//	while(k--)
//	{
//		int op, x, y; cin >> op >> x >> y;
//		
//		if(x > n || y > n) ret++;
//		else if(op == 1)//同类
//		{
//			if(find(x) == find(y + n) || find(x) == find(y + n + n)) ret++;
//			else
//		    {
//			    un(x, y);
//			    un(x + n, y + n);
//			    un(x + n + n, y + n + n);
//		    }
//		} 
//		else//x吃y 
//		{
//			if(find(x) == find(y) || find(x) == find(y + n)) ret++;
//			else
//			{
//				un(x, y + n + n);
//				un(x + n, y);
//				un(x + n + n, y + n);
//			}
//		}
//	}
//	
//	cout << ret << endl;
//	
//	return 0;
//	
//} 


 
//带权并查集
//初始化 
//const int N = 1e5 + 10, INF = 0x3f3f3f3f;
//int n;
//int fa[N], d[N];//存储权值
//
//void init()
//{
//	for(int i = 1; i <= n; i++)
//	{
//		fa[i] = i;
//		d[i] = 0;//根据题目要求来 
//	}
//} 


//查询根节点操作
//int find(int x)
//{
//	if(fa[x] == x) return x;
//	
//	int t = find(fa[x]);//这句代码一定要先执行，先让父结点挂在根节点的后面
//	d[x] += d[fa[x]];//注意，可能会根据权值的意义有所改变
//	
//	return fa[x] = t;
//}


//合并操作union
//void un(int x, int y)
//{
//	int fx = find(x), fy = find(y);
//	if(fx != fy)//不在一个集合
//	{
//		fa[fx] = fy;
//		d[fx] = d[y] + w - d[x];//注意可能会根据权值的意义有所改变 
//	} 
//}


//查询距离操作query
//int query(int x, int y)
//{
//	int fx = find(x), fy = find(y);
//	
//	if(fx != fy) return INF;//如果不在同一个集合中，说明距离未知
//	return d[y] - d[x];
//}



//食物链
//#include <iostream>
//
//using namespace std;
//
//const int N = 5e4 + 10;
//
//int n, k;
//int fa[N], d[N];
//
//int find(int x)
//{
//	if(fa[x] == x) return x;
//	
//	int t = find(fa[x]);
//	d[x] += d[fa[x]];
//	return fa[x] = t;
//} 
//
//void un(int x, int y, int w)
//{
//	int fx = find(x), fy = find(y);
//	if(fx != fy)
//	{
//		fa[fx] = fy;
//		d[fx] = d[y] + w - d[x];
//	} 
//}
//
//int main()
//{
//	cin >> n >> k;
//	for(int i = 1; i <= n; i++) fa[i] = i;
//	
//	int ret  = 0;
//	while(k--)
//	{
//		int op, x, y; cin >> op >> x >> y;
//		int fx = find(x), fy = find(y);
//		
//		if(x > n || y > n) ret++;
//		else if(op == 1)//同类 
//		{
//			if(fx == fy && ((d[y] - d[x]) % 3 + 3) % 3 != 0) ret++;
//			else un(x, y, 0); 
//		}
//		else//x吃y
//		{
//			if(fx == fy && ((d[y] - d[x]) % 3 + 3) % 3 != 1) ret++;
//			else un(x, y, 2); 
//		} 
//	}
//	cout << ret << endl;
//	
//	return 0;
//}



//银河英雄传说 
#include <iostream>

using namespace std;

const int N = 3e4 + 10;

int n = 3e4; 
int fa[N], d[N], cnt[N];//维护集合的合并、维护权值、维护集合的大小 

int find(int x)
{
	if(fa[x] == x) return x;
	
	int t = find(fa[x]);
	d[x] += d[fa[x]];
	return fa[x] = t; 
}

void un(int x, int y)
{
	int fx = find(x), fy = find(y);
	
	if(fx != fy)
	{
		fa[fx] = fy;
		d[fx] = cnt[fy];
		cnt[fy] += cnt[fx];
	}
}

int query(int x, int y)
{
	int fx = find(x), fy = find(y);
	if(fx != fy) return -1;
	else return abs(d[y] - d[x]) - 1;
}

int main()
{
	//初始化
	for(int i = 1; i <= n; i++)
	{
		fa[i] = i;
		cnt[i] = 1;
	} 
	
	int T; cin >> T;
	
	while(T--)
	{
		char op; int x, y;
	    cin >> op >> x >> y;
	    if(op == 'M')//合并
	        un(x, y); 
	    else
	        cout << query(x, y) << endl;
	} 
		
	return 0;	    
}


















