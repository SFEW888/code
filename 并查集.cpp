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















 































