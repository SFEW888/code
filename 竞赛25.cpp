//#include <iostream>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//
////封装 
//class SpList
//{
//	int a[N];
//	int n;
//	
//public:
//	SpList()
//	{
//		n = 0;
//	}
//	
//	void push_back(int x)
//	{
//		a[++n] = x;
//	}
//	
//	void print()
//	{
//		for(int i = 1; i <= n; i++)
//		{
//			cout << a[i] << " ";
//		}
//		cout << endl;
//	}	
// }
// 
// int main()
// {
// 	SpList s1, s2;
// 	
// 	for(int i = 1; i <= 5; i++)
// 	{
// 		s1.push_back(i);
// 		s2.push_back(i * 2);
//	 }
//	 
//	 s1.print();
//	 s2.print();
//	 
// 	return 0;
//  } 
 
 
 //单链表 
 
// #include <iostream> 
// 
// using namespace std;
// 
// const int N = 1e5 + 10;
// int h;//头指针
// int id;//下一个元素分配的位置
// int e[N], ne[N];//数据域和指针域
// int mp[N];//mp[i]表示i这个数的存储的位置 
// //头插 
// void push_front(int x)
// {
// 	id++;
// 	e[id] = x;
// 	
// 	ne[id] = ne[h];
//	ne[h] = id;  
//  } 
//
// //遍历打印链表
// void print()
// {
// 	for(int i = ne[h]; i; i = ne[i])
// 	{
// 		cout << e[i] << " ";
//	 }
//	 cout << endl;
//  } 
//  
//  //按值查找
//  
//  int find(int x)
//  {
//  	for(int i = ne[h]; i; i = ne[i])
//  	{
//  		if(e[i] == x)
//  		   return i;
//	  }
//	  return 0;
//   } 
//  
// int main()
// {
// 	for(int i = 1; i <= 5; i++)
// 	{
// 		push_front(i);
// 		print();
//	 }
//	 
//	 cout << find(1) << " ";
//	 cout << find(3) << " ";
//	 cout << find(4) << endl;
// }
 
 
 #include <iostream> 
 
 using namespace std;
 
 const int N = 1e5 + 10;
 int h;//头指针
 int id;//下一个元素分配的位置
 int e[N], ne[N];//数据域和指针域
 int mp[N];//mp[i]表示i这个数的存储的位置 
 //头插 
 void push_front(int x)
 {
 	id++;
 	e[id] = x;
 	mp[x] = id;//当有新元素进来时，标记x存储的位置 
 	
 	ne[id] = ne[h];
	ne[h] = id;  
  } 

 //遍历打印链表
 void print()
 {
 	for(int i = ne[h]; i; i = ne[i])
 	{
 		cout << e[i] << " ";
	 }
	 cout << endl;
  } 
  
  //按值查找
  int find(int x)
  {
//  	for(int i = ne[h]; i; i = ne[i])
//  	{
//  		if(e[i] == x)
//  		   return i;
//	  }

    return mp[x]; 
	  return 0;
   } 
  
  //任意插入
  void insert(int p, int x)
  {
  	id++;
  	e[id] = x;
  	mp[x] = id;
  	
  	ne[id] = ne[p];
  	ne[p] = id;
  }
  
  //任意删除
  void erase(int p)
  {
  	if(ne[p])
  	{
  		mp[e[ne[p]]] = 0;
  		ne[p] = ne[ne[p]];
	  }
   } 
   
 int main()
 {
 	for(int i = 1; i <= 5; i++)
 	{
 		push_front(i);
 		print();
	 }
	 
	 cout << find(1) << " ";
	 cout << find(3) << " ";
	 cout << find(4) << endl;
	 
	 insert(1, 10);
	 print();
	 insert(2, 100);
	 print();
	 
	 erase(2);
	 print();
	 erase(4);
	 print();
	 
	 
	 
	 
	 return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
