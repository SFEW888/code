//双链表 
#include <iostream>

using namespace std;

const int N = 1e5 + 10;
int h;//头节点 
int id;//下一个元素分配的位置
int e[N];//数据域
int pre[N], ne[N];//前后指针 
int mp[N];//mp[i]表示i这个值存储的位置 

//头插
void push_front(int x)
{
	id++;
	e[id] = x;
	mp[x] = id; 
	
	pre[id] = h;
	ne[id] = ne[h];
	pre[ne[h]] = id;
	ne[h] = id;
 } 

//遍历链表
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
	return mp[x];
 } 

//任意后插入
void insert_back(int p, int x)
{
	id++;
	e[id] = x;
	mp[x] = id; 
	
	pre[id] = p;
	ne[id] = ne[p];
	pre[ne[p]] = id;
	ne[p] = id;
 }  

//任意前插入
void insert_front(int p, int x)
{
	id++;
	e[id] = x;
	mp[x] = id; 
	
	pre[id] = pre[p];
	ne[id] = p;
	ne[pre[p]] = id;
	pre[p] = id;
 }  

//删除下标为p的元素
void erase(int p)
{
	mp[e[p]] = 0;
	ne[pre[p]] = ne[p];
	pre[ne[p]] = pre[p];
 } 

int main()
{
	for(int i = 1; i <= 5; i++)
	{
		push_front(i);
		print();
	}
	
	cout << find(3) << " ";
	cout << find(5) << " ";
	cout << find(0) << endl;
	
	insert_back(3, 10);
	print();
	insert_back(4, 6);
	print();
	
	insert_front(2, 22);
	print();
	insert_front(5, 55);
	print();
	
	erase(4);
	print();
	erase(2);
	print();
	return 0;
 } 


