//栈 
#include <iostream>

using namespace std;

const int N = 1e6 + 10;

int n;
int stk[N]; 


// 进栈 - 本质就是顺序表里面的尾插 
void push(int x)
{
    stk[++n] = x;
}
// 出栈 - 顺序表的尾删操作 
void pop()
{
    n--;
}
// 查询栈顶元素 
int top()
{
    return stk[n];
}
// 判断是否为空 
bool empty()
{
    return n == 0;
}
// 查询有效元素的个数 
int size()
{
    return n;
}
int main()
{
    for(int i = 1; i <= 10; i++)
    {
        push(i);
    }
    // 当栈不为空的时候 
    while(size()) // while(!empty()) 
    {
        cout << top() << endl;
        pop();
    }
    return 0;
}




#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    // 先讲 1~10 进栈 
    for(int i = 1; i <= 10; i++)
    {
        st.push(i);
    }
    while(st.size()) // !st.empty()
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}        





















































































