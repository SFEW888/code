//双链表 
#include <iostream>
using namespace std;

const int N = 1e5 + 10;
int h; // 头结点 
int id; // 下一个元素分配的位置 
int e[N]; // 数据域 
int pre[N], ne[N]; // 前后指针域 
// h 默认等于 0，指向的就是哨兵位 
// 此时链表为空，没有任何几点，因此 ne[h] = 0


//头插
void push_back(int x)
{
	id++;
	e[id] = x;
	mp[x] = id;
	
	pre[id] = h;
	ne[id] = ne[h];
	
	pre[ne[h]] = id;
	ne[h] = id;
	
 } 



// 在存储位置为 p 的元素后面，插入一个元素 x 
void insert_back(int p, int x)
{
    id++;
    e[id] = x;
    mp[x] = id; // 存一下 x 这个元素的位置 
    // 先左指向 p，右指向 p 的后继 
    pre[id] = p;
    ne[id] = ne[p];
    // 先让 p 的后继的左指针指向 id 
    // 再让 p 的右指针指向 id 
    pre[ne[p]] = id;
    ne[p] = id;
}



// 在存储位置为 p 的元素前面，插入一个元素 x
void insert_front(int p, int x)
{
    id++;
    e[id] = x;
    mp[x] = id; // 存一下 x 这个元素的位置 
    // 先左指针指向 p 的前驱，右指针指向 p 
    pre[id] = pre[p];
    ne[id] = p;
    // 先让 p 的前驱的右指针指向 id 
    // 再让 p 的左指针指向 id 
    ne[pre[p]] = id;
    pre[p] = id;
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



// 删除下标为 p 的元素 
void erase(int p)
{
    mp[e[p]] = 0; // 从标记中移除 
    ne[pre[p]] = ne[p];
    pre[ne[p]] = pre[p];
}



#include <list>
using namespace std;
int main()
{
    list<int> lt; // 创建一个存储 int 类型的链表 
    return 0;
}


void testadd()
{
    list<int> lt;
    // 尾插 
    for(int i = 1; i <= 5; i++)
    {
        lt.push_back(i);
        print(lt);
    }
    
    
    // 头插 
    for(int i = 1; i <= 5; i++)
    {
        l.push_front(i);
        print(l);
    }
}







