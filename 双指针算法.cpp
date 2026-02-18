//唯一的雪花 
#include <iostream>
#include <unordered_map>

using namespace std;

const int N = 1e6 + 10;

int n;
int a[N];

int main()
{
	int T; cin >> T;
	while(T--)
	{
		cin >> n;
		for(int i = 1; i <= n; i++) cin >> a[i];
		
		//初始化
		int left = 1, right = 1, ret = 0;
		unordered_map<int, int> mp;//维护窗口所有元素出现的次数
		while(right <= n)
		{
			//进窗口
			mp[a[right]]++;
			//判断
			while(mp[a[right]] > 1)
			{
				//出窗口
				mp[a[left]]--;
				left++; 
			 } 
			//窗口合法化，更新结果
			ret = max(ret, right - left + 1);
			right++; 
		 }
		cout << ret << endl;  
	}
	return 0;
 } 




//逛画展
#include <iostream>

using namespace std;

const int N = 1e6 +10;

int n,m;
int a[N];

int kind;//窗口内有效元素的个数
int mp[N];//窗口每个元素的出现次数

int main()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	
	int left = 1, right = 1;
	int ret = n, begin = 1;
	
	while(right <= n)
	{
		//进窗口
		if(mp[a[right]]++ == 0) kind++;
		//判断
		while(kind == m)
		{
			//更新结果
			int len = right - left + 1;
			if(len < ret)
			{
				ret = len;
				begin = left;
			 }
			//出窗口
			if(mp[a[left]]-- == 1) kind--;
			left++;  
		 }
		right++;  
	}
	cout << begin << ' ' << begin + ret - 1 << endl; 
	
	return 0;
 } 




//字符串
#include <iostream>

using namespace std;

string s;
int mp[26];
int kind;

int main()
{
	cin >> s;
	int n = s.size();
	int ret = n;
	
	//初始化
	for(int left = 0, right = 0; right < n; right++)
	{
		//进窗口
		if(mp[s[right] - 'a']++ == 0) kind++;
		//判断
		while(kind == 26)
		{
			//更新结果
			ret = min(ret, right - left + 1);
			//出窗口
			if(mp[s[left] - 'a']-- == 1) kind--;
			left++; 
		}   
	 } 
	cout << ret << endl;
	
	return 0; 
 } 



//丢手绢
#include <iostream>

using namespace std;

typedef long long LL;

const int N = 1e5 + 10;

int n;
LL a[N]; 

int main()
{
	cin >> n;
	LL sum = 0;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	
	//初始化
	int left = 1, right = 1;
	LL k = 0;
	LL ret = 0;
	
	//进窗口
	while(right <= n)
	{
		k += a[right];
		while(2 * k >= sum)
		{
			//更新结果
			ret = max(ret, sum - k); 
			k -= a[left++];
		}
		
		//更新结果
		ret = max(ret, k);
		right++; 
	 } 
	cout << ret << endl;
	
	return 0; 
}













































































