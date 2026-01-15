//#include <iostream>
//using namespace std;
//const int N = 1e5 + 10;
//// 创建 
//int q[N], h, t;
//// 入队 
//void push(int x)
//{
//    q[++t] = x;
//}
//// 出队 
//void pop()
//{
//    h++;
//}
//// 查询队头元素 
//int front()
//{
//    return q[h + 1];
//}
//// 查询队尾元素 
//int back()
//{
//    return q[t];
//}
//// 判断是否为空 
//bool empty()
//{
//    return h == t;
//}
//// 有效元素的个数 
//int size()
//{
//    return t - h;
//}
//int main()
//{
//    // 测试 
//    for(int i = 1; i <= 10; i++)
//    {
//        push(i);
//    }
//    while(size()) // while(!empty())
//    {
//        cout << front() << " " << back() << endl;
//        pop();
//    }
//    return 0;
//}




//#include <iostream>
//#include <queue>
//using namespace std;
//typedef pair<int, int> PII;
//int main()
//{
//    // 测试 queue 
//    queue<PII> q;
//    for(int i = 1; i <= 10; i++)
//    {
//        q.push({i, i * 10});
//    }
//    while(q.size()) // while(!q.empty())
//    {
//        auto t = q.front();
//        q.pop();
//        cout << t.first << " " << t.second << endl;
//    }
//    return 0;
//}




#include <iostream>
#include <deque>
using namespace std;

struct node
{
    int x, y, z;
};
int main()
{
    deque<node> q;
    // 头插 
    for(int i = 1; i <= 5; i++)
    {
        q.push_front({i, i * 2, i * 3});
    }
    // 头删 
    while(q.size())
    {
        auto t = q.front(); q.pop_front();
        cout << t.x << " " << t.y << " " << t.z << endl;
    }
    // 尾插 
    for(int i = 1; i <= 5; i++)
    {
        q.push_back({i, i * 2, i * 3});
    }
    // 尾删 
    while(q.size())
    {
        auto t = q.back(); q.pop_back();
        cout << t.x << " " << t.y << " " << t.z << endl;
    }
    return 0;
}





