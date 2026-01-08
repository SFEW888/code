//#include <iostream>
//using namespace std;
//
//const int N = 1e6 + 10;
//
//int a[N];
//int n;
//
//// 打印顺序表 
//void print()
//{
//    for(int i = 1; i <= n; i++)
//    {
//        cout << a[i] << " ";
//    }
//    cout << endl << endl;
//}    
//
////尾插
//void push_back(int x)
//{
//	a[++n] = x;
// } 
//
//
//
////头插
//void push_front(int x)
//{
//	//要把所有的元素全部右移一位，然后放到头部位置 
//	for(int i = n; i >= 1; i--)
//	{
//		a[i + 1] = a[i];
//	}
//	a[1] = x;//把x放在首位 
//	n++;//不要忘记总个数 +1 
// } 
//
//
//
////任意位置插
//void insert(int p, int x)
//{
//	for(int i = n; i >= p; i--)
//	{
//		a[i + 1] = a[i];
//	}
//	n++;//总个数+1 
// } 
//
//
//
//
////尾删
//void pop_back()
//{
//	n--;
// } 
// 
// 
// 
////头删
//void pop_front()
//{
//	//把所有元素向前移动一位
//	for(int i = 2; i <= n; i++)
//	{
//		a[i - 1] = a[i];
//	 } 
//	 n--;
// } 
//
//
//
////任意位置删 
//void erase(int p)
//{
//	for(int i = p + 1; i <= n; i++)
//	{
//		a[i - 1] = a[i];
//	 } 
//	 n--;//总个数-1 
// } 
// 
//
//
////按值查找
//int find(int x)
//{
//	for(int i = 1; i <= n; i++)
//	{
//		if(a[i] == x) return i;
//	}
//	return 0;
// } 
//
//
//
////按位查找
//int at(int p)
//{
//	return a[p];
// } 
//
//
//
////修改元素
//void change(int p, int x)
//{
//	a[p] = x;
// } 
//
//
//
////清空顺序表
//void clear()
//{
//	n = 0;
// } 
//
//
//
//int main()
//{
//	// 测试尾插 
//    push_back(2);
//    print();
//    push_back(5);
//    print();
//    push_back(1);
//    print();
//    push_back(3);
//    print();
//    // 测试头插 
//    push_front(10);
//    print();
//    // 测试任意位置插入 
//    insert(3, 0);
//    print();
//    // 测试尾删 
//     cout << "尾删：" << endl; 
//     pop_back();
//     print();
//     pop_back();
//     print();
//     pop_front();
//     pop_front();
//     print();
//    // 测试任意位置删除 
//    // cout << "任意位置删除：" << endl; 
//    // erase(3);
//    // print();
//    // erase(2);
//    // print();
//    // erase(4);
//    // print();
//    for(int i = 1; i <= 10; i++)
//    {
//        cout << "查找" << i << ": ";
//        cout << find(i) << endl;
//    }
//    return 0;
//}




//#include <iostream>
//using namespace std;
//const int N = 1e5 + 10;
//// 将顺序表的创建以及增删查改封装在一个类中 
//class SqList
//{
//    int a[N];
//    int n;
//public:
//    // 构造函数，初始化
//    SqList()
//    {
//        n = 0;
//    }
//    // 尾插 
//    void push_back(int x)
//    {
//        a[++n] = x;
//    }
//    // 尾删 
//    void pop_back()
//    {
//        n--;
//    }
//    // 打印 
//    void print()
//    {
//        for(int i = 1; i <= n; i++)
//        {
//            cout << a[i] << " ";
//        }
//        cout << endl;
//    }
//};
//int main()
//{
//    SqList s1, s2; // 创建了两个顺序表 
//    for(int i = 1; i <= 5; i++)
//    {
//        // 直接调用 s1 和 s2 里面的 push_back 
//        s1.push_back(i);
//        s2.push_back(i * 2);
//    }
//    s1.print();
//    s2.print();
//    for(int i = 1; i <= 2; i++)
//    {
//        s1.pop_back();
//        s2.pop_back();
//    }
//    
//    s1.print();
//    s2.print();
//    return 0;
//}





#include <iostream>
#include <vector>
using namespace std;

//// 2. size
//void test_size()
//{
//    // 创建一个一维数组 
//    vector<int> a1(6, 8);
//    for(int i = 0; i < a1.size(); i++)
//    {
//        cout << a1[i] << " ";
//    }
//    cout << endl << endl;
//    // 创建一个二维数组 
//    vector<vector<int>> a2(3, vector<int>(4, 5));
//    for(int i = 0; i < a2.size(); i++)
//    {
//        // 这里的 a2[i] 相当于一个 vector<int> a(4, 5) 
//        for(int j = 0; j < a2[i].size(); j++)
//        {
//            cout << a2[i][j] << " ";
//        }
//        cout << endl;
//    }
//    cout << endl << endl;
//} 

//// 3. begin/end
//void test_it()
//{
//    vector<int> a(10, 1);
//    // 迭代器的类型是 vector<int>::iterator，但是一般使用 auto 简化 
//    for(auto it = a.begin(); it != a.end(); it++)
//    {
//        cout << *it << " ";
//    }
//    cout << endl << endl;
//    // 范围 for 遍历 
//    for(auto x : a)
//    {
//        cout << x << " ";
//    }
//    cout << endl << endl;
//}   

//// 如果不加引用，会拷贝一份，时间开销很大 
//void print(vector<int>& a)
//{
//    for(auto x : a)
//    {
//        cout << x << " ";
//    }
//    cout << endl;
//}
//// 4. 添加和删除元素 
//void test_io()
//{
//    vector<int> a;
//    // 尾插 1 2 3 4 5 
//    a.push_back(1);
//    a.push_back(2);
//    a.push_back(3);
//    a.push_back(4);
//    a.push_back(5); 
//    print(a);
//    // 尾删 3 次 
//    a.pop_back();
//    a.pop_back();
//    a.pop_back();
//    print(a);
//}    

//// 5. 首元素和尾元素 
//void test_fb()
//{
//    vector<int> a(5);
//    for(int i = 0; i < 5; i++)
//    {
//        a[i] = i + 1;
//    }
//    cout << a.front() << " " << a.back() << endl;
//}

//// 如果不加引用，会拷贝一份，时间开销很大 
//void print(vector<int>& a)
//{
//    for(auto x : a)
//    {
//        cout << x << " ";
//    }
//    cout << endl;
//}
//// 6. resize
//void test_resize()
//{
//    vector<int> a(5, 1);
//    a.resize(10); // 扩大 
//    print(a);
//    a.resize(3); // 缩小 
//    print(a);
//}

// 如果不加引用，会拷贝一份，时间开销很大 
void print(vector<int>& a)
{
    for(auto x : a)
    {
        cout << x << " ";
    }
    cout << endl;
}
// 7. clear
void test_clear()
{
    vector<int> a(5, 1);
    print(a);
    a.clear();
    cout << a.size() << endl;
    print(a);
}   


int main()
{
	//test_size();
	//test_it(); 
	//test_io();
	//test_fb();
	//test_resize(); 
	test_clear(); 
	return 0;
}








