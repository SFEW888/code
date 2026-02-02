//铺地毯 
#include <iostream>

using namespace std;

const int N = 1e5 + 10;

int n;
int a[N], b[N], g[N], k[N];
int x, y;

int find()
{
	for(int i = n; i >= 1; i--)
	{
		if(a[i] <= x && b[i] <= y && a[i] + g[i] >= x && b[i] + k[i] >= y)
		{
			return i;
		}
	 } 
	 return -1;
}

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i] >> b[i] >> g[i] >> k[i];
	cin >> x >> y;
	
	cout << find() << endl;
	
	return 0;	
} 



//回文日期
#include <iostream>

using namespace std;

int x, y;
int day[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
	cin >> x >> y;
	int ret = 0;
	
	for(int i = 1; i <= 12; i++)
	{
		for(int j = 1; j <= day[i]; j++)
		{
			int k = j % 10 * 1000 + j / 10 * 100 + i % 10 * 10 + i / 10;
			int num = k * 10000 + i * 100 + j;
			if(x <= num && num <= y) ret++;
		}
	}
	cout << ret << endl;
	return 0;
}




//扫雷
#include <iostream>

using namespace std;

const int N = 1e4 + 10;

int n;
int a[N], b[N];

//不放地雷 
int check1()
{
	a[1] = 0;
	for(int i = 2; i <= n + 1; i++)
	{
		a[i] = b[i -1] - a[i - 2] - a[i - 1];
		if(a[i] < 0 || a[i] > 1) return 0;
	}
	if(a[n + 1] == 0) return 1;
	else return 0;
}

//放地雷 
int check2()
{
	a[1] = 1;
	for(int i = 2; i <= n + 1; i++)
	{
		a[i] = b[i -1] - a[i - 2] - a[i - 1];
		if(a[i] < 0 || a[i] > 1) return 0;
	}
	if(a[n + 1] == 0) return 1;
	else return 0;
}

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> b[i];
	
	int ret = 0;
	ret += check1();//a[1]不放地雷
	ret += check2();//a[2]放地雷
	
	cout << ret << endl; 
	
	return 0; 
 } 




//子集 
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ret;
        int n = nums.size();

        //枚举所有状态
        for(int i = 0; i < (1 << n); i++) {
            vector<int> tmp;
            for(int j = 0; j < n; j++) {
                if((i >> j) & 1) tmp.push_back(nums[j]);
            }
            ret.push_back(tmp);
        }
        return ret;
    }
};




//费解的开关
#include <iostream>
#include <cstring>

using namespace std;

const int N = 10;
int n = 5;
int a[N];
int t[N];

//计算x有多少1 
int calc(int x)
{
	int cnt = 0;
	while(x)
	{
		cnt++;
		x &= x - 1; 
	}
	return cnt;
}

int main()
{
	int T; cin >> T;
	while(T--)
	{
		memset(a, 0, sizeof a);
		
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				char ch; cin >> ch;
				//存相反
				if(ch == '0') a[i] |= 1 << j; 
			}
		}
		int ret = 0x3f3f3f3f;//统计所有合法按法的最小值
		//第一行的按法 
		for(int st = 0; st < (1 << n); st++)
		{
			memcpy(t, a, sizeof a);
			int push = st;//当前按法
			int cnt = 0;//统计按了多少次
			
			//依次后续行的结果以及按法
			for(int i = 0; i < n; i++)
			{
				cnt += calc(push);
				//修改当前行被按的结果
				t[i] = t[i] ^ push ^ (push << 1) ^ (push >> 1);
				t[i] = t[i] & (1 << n) - 1;
				//修改下一行
				t[i + 1] ^= push;
				//下一行按法
				push = t[i];  
			 }
			 if(t[n - 1] == 0) ret = min(cnt, ret);
		 } 
		if(ret > 6) cout << -1 << endl;
		else cout << ret << endl; 
	}
	
	return 0;
 } 
 



//Even Parity
#include <iostream>
#include <cstring>

using namespace std;

const int N = 20;

int n;
int a[N];
int t[N];

//判断是否合法
int calc(int x, int y)
{
	int sum = 0;
		
	for(int i = 0; i < n; i++)
    {
        if(((x >> i) & 1) == 0 && ((y >> i) & 1) == 1) sum++;
        if(((x >> i) & 1) == 1 && ((y >> i) & 1) == 0) return -1;
    }
    return sum;
} 

int solve()
{
	int ret = 0x3f3f3f3f;
	//枚举第一行最终状态
	for(int st = 0; st < (1 << n); st++)
	{
		memcpy(t, a, sizeof a);
		
		int change = st;
		int cnt = 0;//统计0->1个数 
		bool flag = 1;
		
		for(int i = 1; i <= n; i++)
		{
			//先判断change是否合法
			int c = calc(t[i], change);
			if(c == -1)
			{
				flag = 0;
				break;
			}
			
			cnt += c;//累加次数
			t[i] = change;
			
			change = t[i - 1] ^ (t[i] << 1) ^ (t[i] >> 1);
            change &= (1 << n) - 1; 
		}
		if(flag) ret = min(cnt, ret);
	 } 
	if(ret == 0x3f3f3f3f) return -1;
    else return ret;
}

int main()
{
	int T; cin >> T;
	
	for(int k = 1; k <= T; k++)
	{
		//多组测试数据要清空 
		memset(a, 0, sizeof a);
		
		cin >> n;
		for(int i = 1; i <= n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				int x; cin >> x;
				if(x) a[i] |= 1 << j;
			}
		}
		printf("Case %d: %d\n", k, solve());
	}
	return 0;
}





















































