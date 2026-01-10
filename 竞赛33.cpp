//单链表 
#include <iostream>

const int N = 1e5 + 10;
int h; // 头指针 
int id; // 下一个元素分配的位置 
int e[N], ne[N]; // 数据域和指针域 
// 下标 0 位置作为哨兵位 
// 其中 ne 数组全部初始化为 0，其中 ne[i] = 0 就表示空指针，后续没有结点 
// 当然，也可以初始化为 -1 作为空指针，看个人爱好

/*
    e[i] 和 ne[i] 是绑定在一起使用的，也有一种写法是定义一个结构体，把这两个变量放在一
起，比如： 
    
    struct node
    {
        int e, ne;
    }list[N];
    但是，定义成结构体之后，代码书写不方便。我们只要知道 e[i] 和 ne[i] 是绑定在一起使用
的即可 
*/



//头插
void push_front(int x)
{
	//先把x放在一个格子里面 
	id++;
	e[id] = x;
	
	//修改指针，顺序不能颠倒
	//1. x的右指针指向哨兵位的后继
	//2. 哨兵位的右指针指向x
	ne[id] = ne[h];
	ne[h] = id; 
 } 

//任意位置后插
void insert(int p, int x)//一定注意这里的p是位置，不是元素
{
	id++;
	e[id] = x;
	ne[id] = ne[p];
	ne[p] = id;
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

////按值查找
//int find(int x)
//{
//	for(int i = ne[h]; i; i = ne[i])
//	{
//		if(e[i] == x)
//		{
//			return i;
//		}
//	}
//	//找不到就返回0
//	return 0; 
// } 

//按值查找
int mp[i];// mp[i] 表示 i 在这个元素存放的位置 
/*
    push_front 和 insert 的时候，打上标记 
    mp[x] = id; // x 这个元素存放的位置是 id 
    
    erase 的时候，消除标记 
    mp[x] = 0;
*/
int find(int x)
{
	return mp[x];
 } 


// 删除存储位置为 p 后面的元素 
void erase(int p) // 注意 p 表示元素的位置 
{
    if(ne[p]) 
    {
        mp[e[ne[p]]] = 0; // 将 p 后面的元素从 mp 中删除 
        ne[p] = ne[ne[p]]; // 指向下一个元素的下一个元素 
    }
}


























































































