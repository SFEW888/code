//图 

//图的存储 
//邻接矩阵 
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//const int N = 1010;
//
//int n, m;
//int edges[N][N];
//
//int main()
//{
//	memset(edges, -1, sizeof edges);
//	
//	cin >> n >> m;//读入节点个数以及边个数 
//	
//	for(int i = 1; i <= m; i++)
//	{
//		int a, b, c; cin >> a >> b >> c;
//		
//		//a-b有一条边，权值为c
//		edges[a][b] = c;
//		
//		//如果是无向边，需要再存一下
//		edges[b][a] = c; 
//	}
//	return 0;
//}


//vector 数组
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//typedef pair<int, int> PII;
////前面的int表示当前节点和哪个节点相连，后面的int表示当前节点相连的权值是多少 
//
//const int N = 1e5 + 10;
//
//int n, m;
//vector<PII> edges[N];
//
//int main()
//{
//	cin >> n >> m;
//	for(iint i = 1; i <= m; i++)
//	{
//		int a, b, c; cin >> a >> b >> c;
//		
//		//a和b之间有一条边，权值为c
//		edges[a].push_back({b, c});
//		
//		//如果是无向边，需要再存一下
//		edges[b].push_back({a, c}); 
//	}
//	
//	return 0;
//} 


//链式前向星
//#include <iostream>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//
//int h[N], e[N * 2], ne[N * 2], w[N * 2], id;
//int n, m;
//
////把b头插到a所在链表后面
//void add(int a, int b, int c)
//{
//	id++;
//	e[id] = b;
//	w[id] = c;
//	ne[id] = h[a];
//	h[a] = id;
//} 
//
//int main()
//{
//	cin >> n >> m;
//	for(int i = 1; i <= m; i++)
//	{
//		int a, b, c; cin >> a >> b >> c;
//		//a和b之间有一条边权值为c
//		add(a, b, c); add(b, a, c); 
//	}
//	return 0;
//}



//图的遍历

//DFS
//用邻接矩阵的方式存储
//#include <iostream>
//#include <cstring>
//#include <queue>
//
//using namespace std;
//
//const int N = 1010;
//
//int n, m;
//int edges[N][N];
//
//bool st[N];
//
//void dfs(int u)
//{
//	cout << u << endl;
//	st[u] = true;
//	
//	//遍历所有孩子
//	for(int v = 1; v <= n; v++)
//	{
//		//如果存在 u->v 的边，并且没有遍历过
//		if(edges[u][v] != -1 && !st[v])
//		{
//			dfs(v);
//		}
//	} 
//}
//
//int main()
//{
//	memset(edges, -1, sizeof edges);
//	
//	cin >> n >> m;
//	for(int i = 1; i <= m; i++)
//	{
//		int a, b, c; cin >> a >> b >> c;
//		//a-b有一条边，权值为c
//		edges[a][b] = c;
//		
//		//如果是无相边，需要反过来存一下
//		edges[b][a] = c; 
//	}
//	
//	return 0;
//}

//用 vector 数组的方式存储
//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//typedef pair<int, int> PII;
//
//const int N = 1e5 + 10;
//
//int n, m;
//vector<PII> edges[N];
//
//bool st[N];
//
//void dfs(int u)
//{
//	cout << u << endl;
//	st[u] = true;
//	
//	//遍历所有孩子
//	for(auto&t : edges[u])
//	{
//		int v = t.first, w = t.second;
//		if(!st[v])
//		{
//			dfs(v);
//		}
//	} 
//}
//
//int main()
//{
//	cin >> n >> m;
//	for(int i =1; i <= m; i++)
//	{
//		int a, b, c; cin >> a >> b >> c;
//		edges[a].push_back({b, c});
//		edges[b].push_back({a, c});
//	}
//	return 0;
//}

//用链式前向星的方式存储
//#include <iostream>
//#include <queue>
//using namespace std;
//const int N = 1e5 + 10;
//
//int h[N], e[N * 2], ne[N * 2], w[N * 2], id;
//int n, m;
//
//// 其实就是把 b 头插到 a 所在的链表后面 
//void add(int a, int b, int c)
//{
//    id++;
//    e[id] = b;
//    w[id] = c;  
//    ne[id] = h[a];
//    h[a] = id;
//}
//bool st[N];
//void dfs(int u)
//{
//    cout << u << endl;
//    st[u] = true;
//    
//    for(int i = h[u]; i; i = ne[i])
//    {
//        // u->v 的一条边 
//        int v = e[i];
//        if(!st[v])
//        {
//            dfs(v);
//        }
//    }
//}
//int main()
//{
//   cin >> n >> m; 
//    for(int i = 1; i <= m; i++)
//    {
//        int a, b, c; cin >> a >> b >> c;
//        add(a, b, c); add(b, a, c);
//    }
//    return 0;
//}




//BFS
//用邻接矩阵的方式存储
//#include <iostream>
//#include <cstring>
//#include <queue>
//
//using namespace std;
//
//const int N = 1010;
//
//int n, m;
//int edges[N][N];
//
//bool st[N];
//
//void bfs(int u)
//{
//	queue<int> q;
//	q.push(u);
//	st[u] = true;
//	
//	while(q.size())
//	{
//		auto a = q.front(); q.pop();
//		cout << a << endl;
//		
//		for(int b = 1; b <= n; b++)
//		{
//			if(edges[a][b] != -1 && !st[b])
//			{
//				q.push(b);
//				st[b] = true;
//			}
//		}
//	}
//}
//
//int main()
//{
//	memset(edges, -1, sizeof edges);
//	
//	cin >> n >> m;
//	for(int i = 1; i <= m; i++)
//	{
//		int a, b, c; cin >> a >> b >> c;
//		edges[a][b] = c;
//		egdes[b][a] = c;
//	}
//	return 0;
//}

//用 vector 数组的方式存储
//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//typedef pair<int, int> PII;
//
//const int N = 1e5 + 10;
//
//int n, m;
//vector<PII> edges[N];
//
//bool st[N];
//
//void bfs(int u)
//{
//	queue<int> q;
//	q.push(u);
//	st[u] = true;
//	
//	while(q.size())
//	{
//		auto a = q.front(); q.pop();
//		cout << a << endl;
//		
//		for(auto& t : edges[a])
//		{
//			int b = t.first, c = t.second;
//			if(!st[b])
//			{
//				q.push(b);
//				st[b] = true;
//			}
//		}
//	}
//}
//
//int main()
//{
//	cin >> n >> m;
//	for(int i = 1; i <= m; i++)
//	{
//		int a, b, c; cin >> a >> b >> c;
//		edges[a].push_back({b, c});
//		edges[b].push_back({a, c});
//	}
//	
//	return 0;
//}

//用链式前向星的方式存储
//#include <iostream>
//#include <queue>
//using namespace std;
//const int N = 1e5 + 10;
//
//int h[N], e[N * 2], ne[N * 2], w[N * 2], id;
//int n, m;
// 
//void add(int a, int b, int c)
//{
//    id++;
//    e[id] = b;
//    w[id] = c; 
//    ne[id] = h[a];
//    h[a] = id;
//}
//bool st[N];
//void bfs(int u)
//{
//    queue<int> q;
//    q.push(u);
//    st[u] = true;
//    while(q.size())
//    {
//        auto a = q.front(); q.pop();
//        cout << a << endl;
//        for(int i = h[a]; i; i = ne[i])
//        {
//            int b = e[i], c = w[i];
//            if(!st[b])
//            {
//                q.push(b);
//                st[b] = true;
//            }
//        }
//    }
//}
//int main()
//{
//   cin >> n >> m; 
//    {
//        int a, b, c; cin >> a >> b >> c;
//        
//        add(a, b, c); add(b, a, c);
//    }
//    return 0;
//}




//Prim 算法

//邻接矩阵
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//const int N = 5010, INF = 0x3f3f3f3f;
//
//int n, m;
//int edges[N][N];//邻接矩阵
//
//int dist[N];//某个点距离生成树的最短距离
//bool st[N];
//
//int prim()
//{
//	memset(dist, 0x3f, sizeof dist);
//	dist[1] = 0;
//	int ret = 0;
//	
//	for(int i = 1; i <= n; i++)//循环加入n个点
//	{
//		//1.找最近点
//		int t = 0;
//		for(int j = 1; j <= n; j++)
//		    if(!st[j] && dist[j] < dist[t])
//			    t = j;
//		
//		//判断是否联通
//		if(dist[t] == INF) return INF;
//		st[t] = true;
//		ret += dist[t];
//		
//		//2.更新距离
//		for(int j = 1; j <= n; j++)
//		    dist[j] = min(dist[j], edges[t][j]);		 
//	} 
//	
//	return ret;
//}
//
//int main()
//{
//	cin >> n >> m;
//	//初始化 
//	memset(edges, 0x3f, sizeof edges);
//	
//	for(int i = 1; i <= m; i++)//循环加入n个点 
//	{
//		int x, y, z; cin >> x >> y >> z;
//		edges[x][y] = edges[y][x] = min(edges[x][y], z);
//	}
//	
//	int ret = prim();
//	if(ret == INF) cout << "orz" << endl;
//	else cout << ret << endl;
//	
//	return 0;
//} 
 

//邻接表 - vector 数组
//#include <iostream>
//#include <vector>
//#include <cstring>
//
//using namespace std;
//
//typedef pair<int, int> PII;
//
//const int N = 5010, INF = 0x3f3f3f3f;
//
//int n, m;
//vector<PII> edges[N];
//
//int dist[N];
//bool st[N];
//
//int prim()
//{
//	memset(dist, 0x3f, sizeof dist);
//	dist[1] = 0;
//	int ret = 0;
//	
//	for(int i = 1; i <= n; i++)
//	{
//		//1.找最近点
//		int t = 0;
//		for(int j = 1; j <= n; j++)
//		    if(!st[j] && dist[j] < dist[t])
//		        t = j;
//		
//		//判断是否联通
//		if(dist[t] == INF) return INF;
//		st[t] = true;
//		ret += dist[t];
//		
//		//2.更新距离
//		for(auto& p : edges[t])
//		{
//			int a = p.first, b = p.second;
//			dist[a] = min(dist[a], b);
//		}        
//	}
//	
//	return ret;
//}
//
//int main()
//{
//	cin >> n >> m;
//	for(int i = 1; i <= m; i++)
//	{
//		int x, y, z; cin >> x >> y >> z;
//		
//		edges[x].push_back({y, z});
//		edges[y].push_back({x, z});
//	}
//	int ret = prim();
//	if(ret == INF) cout << "orz" << endl;
//	else cout << ret << endl;
//	
//	return 0;
//}




//Kruskal 算法
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 5010, M = 2e5 + 10, INF = 0x3f3f3f3f;
//
//int n, m;
//
//struct node
//{
//	int x, y, z;
//}a[M];
//
//int fa[N];
//
//bool cmp(node& a, node& b)
//{
//	return a.z < b.z;
//}
//
//int find(int x)
//{
//	return x == fa[x] ? fa[x] : fa[x] = find(fa[x]);
//}
//
//int kk()
//{
//	sort(a + 1, a + 1 + m, cmp);
//	
//	int cnt = 0;//记录边
//	int ret = 0;//记录权值
//	
//	for(int i = 1; i <= m; i++)
//	{
//		int x = a[i].x, y = a[i].y, z = a[i].z;
//		
//		int fx = find(x), fy = find(y);
//		if(fx != fy)
//		{
//			cnt++;
//			ret += z;
//			fa[fx] = fy;
//		}
//	} 
//	return cnt == n - 1 ? ret : INF;
//}
//
//int main()
//{
//	cin >> n >> m;
//	for(int i = 1; i <= m; i++) cin >> a[i].x >> a[i].y >> a[i].z;
//	
//	//初始化并查集
//	for(int i = 1; i <= n; i++) fa[i] = i;
//	
//	int ret = kk();
//	if(ret == INF) cout << "orz" << endl;
//	else cout << ret << endl;
//	
//	return 0; 
//}




//买礼物















































