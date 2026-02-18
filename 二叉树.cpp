//链式存储 
//#include <iostream>
//
//using namespace std;
//
//const int N = 1e6 + 10;
//
//int n;
//int l[N], r[N];
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> l[i] >> r[i];
//	}
//	return 0;
//}



//二叉树的深度优先遍历
//#include <iostream>
//
//using namespace std;
//
//const int N = 1e6 + 10;
//
//int n;
//int l[N], r[N];
//
//void dfs1(int p)
//{
//	if(p == 0) return;
//	
//	//先处理根节点
//	cout << p << " ";
//	//左子树
//	if(l[p]) dfs1(l[p]);
//	//右子树 
//	if(r[p]) dfs1(r[p]); 
//}
//
//void dfs2(int p)
//{
//	if(p == 0) return;
//	
//	//左子树
//	if(l[p]) dfs2(l[p]);
//	cout << p << " ";
//	//右子树 
//	if(r[p]) dfs2(r[p]); 
//}
//
//void dfs3(int p)
//{
//	if(p == 0) return;
//	
//	//左子树
//	if(l[p]) dfs3(l[p]);
//	//右子树 
//	if(r[p]) dfs3(r[p]); 
//	cout << p << " ";
//}
//
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> l[i] >> r[i];
//	}
//    
//	//先序
//	dfs1(1);
//	cout << endl;
//	
//	//中序
//	dfs2(1);
//	cout << endl;
//	
//	//后序
//	dfs3(1);
//	cout << endl; 
//} 



//二叉树的宽度优先遍历
#include <iostream>
#include <queue>

using namespace std;

const int N = 1e6 + 10;

int n;
int l[N], r[N];

void bfs()
{
	queue<int> q;
	q.push(1);
	
	while(q.size())
	{
		auto p = q.front(); q.pop();
		cout << p << " ";
		
		//左右孩子入队列
		if(l[p]) q.push(l[p]);
		if(r[p]) q.push(r[p]); 
	}
	cout << endl;
}

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> l[i] >> r[i];
	}
	
	bfs();
	
	return 0;
 } 





