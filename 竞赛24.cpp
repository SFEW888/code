#include <iostream>
using namespace std;

const int N = 1e6 + 10;
//创建循序表 
int a[N];//用足够大的数组来模拟顺序表 
int n;//标记顺序表里面有多少个元素

//打印顺序表
void print()
{
	for(int i = 1; i <= n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
 } 
 
//尾插
void push_back(int x)
{
	a[++n] = x;//下标为0的位置空出来 
}

//头插
void push_front(int x)
{
	//1.把[1,n]的元素统一向后移动一位
	for(int i = n; i >= 1; i--)//由于是让后面的元素先移动，所以是先赋值n，再--
	{
		a[i + 1] = a[i];
	 } 
	 //2.把x放在表头 
	 a[1] = x;
	 n++;//元素个数+1 
 } 
 
//在任意位置插入
void insert(int p, int x)
{
	//1.先把[p,n]的元素统一向后移一位
	for(int i = n; i >= p; i--)
	{
		a[i + 1] = a[i];
	 } 
	 a[p] = x;
	 n++;
 } 
 
//尾删
void pop_back()
{
	n--;
 } 
 
//头删
void pop_front() 
{
	//1.先把[2,n]区间内所有的元素向前统一移动一位 
	for(int i = 2; i <= n; i++)
	{
		a[i - 1] = a[i];
	}
	n--;
 } 
 
//任意删
void erase(int p)
{
	for(int i = p + 1; i <= n; i++)
	{
		a[i - 1] = a[i];
	}
	n--;
 } 
 
//按值查找
int find(int x)
{
	for(int i = 1; i <= n; i++)
	{
		if(a[i] == x)
		   return i;
	}
	return 0;
 } 

//按位查找
int at(int p)
{
	return a[p];
 } 

//按位测试
int change(int p, int x)
{
	a[p] = x;
 } 




 
int main()
{
	//测试尾插
	push_back(1); 
	print();
	push_back(2);
	print();
	push_back(3);
	print();
	push_back(4);
    print(); 
    
    //测试头插 
    push_front(10);
	print(); 
	
	//测试任意插
	insert(3, 0);
	print();
	
	//测试尾删
	pop_back(); 
	print();
	
	//测试头删
	pop_front();
	print(); 
	
	//测试任意删
	erase(3);
	print(); 
	 
	//测试按值查找
	for(int i = 1; i <= 10; i++)
	{
		cout << "查找" << i << ":"; 
		cout << find(i) << " ";
	 } 
	 cout << endl; 
	 
	//测试按位查找
	cout << at(3) << endl;
	
	//测试按位修改
	change(2, 6); 
	print();
	 
    return 0;
 } 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
