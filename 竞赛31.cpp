//#include <iostream>
//using namespace std;
//int x, y;
//int day[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//int main()
//{
//    cin >> x >> y;
//    int ret = 0;
//    // 枚举月日的组合 
//    for(int i = 1; i <= 12; i++)
//    {
//        for(int j = 1; j <= day[i]; j++)
//        {
//            int k = j % 10 * 1000 + j / 10 * 100 + i % 10 * 10 + i / 10;
//            int num = k * 10000 + i * 100 + j;
//            if(x <= num && num <= y) ret++;
//        }
//    }
//    cout << ret << endl;
//    return 0;
//}



//void fun(int N) 
//{ 
//    int count = 0; 
//    for(int i = 0; i < N; i++) 
//    { 
//        for(int j = 0; j < N; j++) 
//        { 
//            ++count; // 执行次数是 n*n，也就是 n^2 
//        } 
//    } 
//    for(int k = 0; k < 2 * N; k++) 
//    {
//        ++count; // 执行次数是 2*n 
//    } 
//    
//    int M = 10; 
//    while(M--) 
//    { 
//        ++count; // 执行次数 10
//    }
//}



int find (int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)      
            return i;
    }
    return -1;
}

































































































































