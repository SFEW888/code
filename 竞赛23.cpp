//#include <iostream>
//using namespace std;
//
//int main()
//{
//	
//}



//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    string s = "abcdefghi";
//    string str = "xxx";
//    cout << s << endl;
//    s.insert(3, str);
//    cout << s << endl;
//    return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    string s = "abcdefghi";
//    cout << s << endl;
//    s.insert(3, "xxx");
//    cout << s << endl;
//    return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    string s = "abcdefghi";
//    cout << s << endl;
//    s.insert(3, 3, 'x');
//    cout << s << endl;
//    return 0;
//}




//#include<iostream>
//using namespace std;
//
//int missingNumber(int* nums, int numsSize) {
//    int i = 0;
//    int miss = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        miss ^= nums[i];
//    }
//    for (i = 0; i <= numsSize; i++)
//    {
//        miss ^= i;
//    }
//    return miss;
//}
//
//int main()
//{
//	int arr[9] = {2,3,4,5,6,7,8};
//	int ret = missingNumber(arr,9);
//	cout << ret << endl;
//	return 0;
// } 



//#include <stdio.h>
//#include <stdlib.h>
//
//// 方法1：数学求和法
//int missingNumber_sum(int* nums, int numsSize) {
//    int total = numsSize * (numsSize + 1) / 2;
//    int sum = 0;
//    for (int i = 0; i < numsSize; i++) {
//        sum += nums[i];
//    }
//    return total - sum;
//}
//
//// 方法2：位运算法
//int missingNumber_xor(int* nums, int numsSize) {
//    int missing = numsSize;
//    for (int i = 0; i < numsSize; i++) {
//        missing ^= i ^ nums[i];
//    }
//    return missing;
//}
//
//// 方法3：优化求和法
//int missingNumber_opt(int* nums, int numsSize) {
//    int missing = numsSize;
//    for (int i = 0; i < numsSize; i++) {
//        missing += i - nums[i];
//    }
//    return missing;
//}
//
//int main() {
//    // 测试用例1
//    int nums1[] = {3, 0, 1};
//    int size1 = sizeof(nums1) / sizeof(nums1[0]);
//    printf("测试1: nums = [3, 0, 1]\n");
//    printf("  数学求和法: %d\n", missingNumber_sum(nums1, size1));
//    printf("  位运算法: %d\n", missingNumber_xor(nums1, size1));
//    printf("  优化求和法: %d\n", missingNumber_opt(nums1, size1));
//    printf("  预期结果: 2\n\n");
//    
//    // 测试用例2
//    int nums2[] = {0, 1};
//    int size2 = sizeof(nums2) / sizeof(nums2[0]);
//    printf("测试2: nums = [0, 1]\n");
//    printf("  数学求和法: %d\n", missingNumber_sum(nums2, size2));
//    printf("  位运算法: %d\n", missingNumber_xor(nums2, size2));
//    printf("  优化求和法: %d\n", missingNumber_opt(nums2, size2));
//    printf("  预期结果: 2\n\n");
//    
//    // 测试用例3
//    int nums3[] = {9, 6, 4, 2, 3, 5, 7, 0, 1};
//    int size3 = sizeof(nums3) / sizeof(nums3[0]);
//    printf("测试3: nums = [9, 6, 4, 2, 3, 5, 7, 0, 1]\n");
//    printf("  数学求和法: %d\n", missingNumber_sum(nums3, size3));
//    printf("  位运算法: %d\n", missingNumber_xor(nums3, size3));
//    printf("  优化求和法: %d\n", missingNumber_opt(nums3, size3));
//    printf("  预期结果: 8\n\n");
//    
//    // 测试用例4
//    int nums4[] = {0};
//    int size4 = sizeof(nums4) / sizeof(nums4[0]);
//    printf("测试4: nums = [0]\n");
//    printf("  数学求和法: %d\n", missingNumber_sum(nums4, size4));
//    printf("  位运算法: %d\n", missingNumber_xor(nums4, size4));
//    printf("  优化求和法: %d\n", missingNumber_opt(nums4, size4));
//    printf("  预期结果: 1\n");
//    
//    return 0;
//}



////代码1 
//#include <iostream>
//#include <string>    //添加string头文件 
//using namespace std;
//int main()
//{
//    string s = "hello world hello everyone";
//    string str = "llo";
//    //查找string类型的字符串 
//    size_t n = s.find(str);
//    cout << n << endl;
//    
//    n = s.find(str, n + 1); //从n+1这个指定位置开始查找 
//    cout << n << endl;
//    
//    //查找C风格的字符串 
//    n = s.find("llo");
//    cout << n << endl;
//    
//    n = s.find("llo", n + 1); //从n+1这个指定位置开始查找 
//    cout << n << endl;
//    
//    return 0;
//}




//#include <iostream>
//#include <string>    //添加string头文件 
//using namespace std;
//int main()
//{
//    string s = "hello world hello everyone";
//    //在s中，0这个指定位置开始查找"word"中的前3个字符 
//    size_t n = s.find("word", 0, 3);
//    cout << n << endl;
//    
//    n = s.find("everyday", n+1, 5);
//    cout << n << endl;
//        return 0;
//}



//#include <iostream>
//#include <string>    //添加string头文件 
//using namespace std;
//int main()
//{
//    string s = "hello world hello everyone";
//    size_t n = s.find('o');
//    cout << n << endl;
//    
//    n = s.find('o', n + 1);
//    cout << n << endl;
//    return 0;
//}




//#include <iostream>
//#include <string>    //添加string头文件 
//using namespace std;
//int main()
//{
//    string s = "hello world hello everyone";
//    string str = "sanfengerwang";
//    
//    size_t n = s.find(str);
//    cout << n << endl;
//    
//    if(n != string::npos)
//        cout << "找到了，位置是：" << n << endl;
//    else
//        cout << "没有找到" << endl;
//  
//    return 0;
//}



//#include <iostream>
//#include <string>    //添加string头文件 
//using namespace std;
//int main()
//{
//    //注意：npos是string中定义的，使用npos需要带上string::指明是string类中的 
//    cout << "npos:" << string::npos << endl; 
//    return 0;
//}





//#include <iostream>
//#include<string>    //添加string头文件 
//using namespace std;
//int main()
//{
//    string s = "hello world hello everyone";
//    string s1 = s.substr(7);
//    cout << s1 << endl;
//    string s2 = s.substr(7, 6);
//    cout << s2 << endl;
//        return 0;
//}




//#include <iostream>
//#include<string>    //添加string头文件 
//using namespace std;
//int main()
//{
//    string s = "hello world hello everyone";
//    size_t n = s.find("world");
//    string s2 = s.substr(n, 10);
//    cout << s2 << endl;
//    return 0;
//}



//#include <iostream>
//#include<string>
//using namespace std;
//int main()
//{
//    string s1 = "hello world";
//    string s2 = "hello";
//    if (s1 == (s2 + " world")) 
//    {
//        cout << "s1 == s2" << endl;
//    }
//    else
//    {
//        cout << "s1 != s2" << endl;
//    }
//    
//    return 0;
//}



//#include <iostream>
//#include <string>    
//using namespace std;
//int main()
//{
//    string s1 = "abcd";
//    string s2 = "abbcdef";
//    char s3[] = "bbc";
//    if (s1 > s2)
//        cout << "s1 > s2" << endl;
//    else
//        cout << "s1 <= s2" << endl;
//    if (s1 == s2)
//        cout << "s1 == s2" << endl;
//    else
//        cout << "s1 != s2" << endl;
//    if (s1 <= s3)
//        cout << "s1 <= s3" << endl;
//    else
//        cout << "s1 > s3" << endl;
//    return 0;
//}




//#include <iostream>
//#include<string>    
//using namespace std;
//int main()
//{
//    size_t pos = 0;
//    string s1 = "11x22";
//    int ret1 = stoi(s1, &pos, 16);
//    cout << ret1 << endl;
//    cout << "pos:" << pos << endl;
//    string s2 = "11x22";
//    int ret2 = stoi(s2, &pos, 2);
//    cout << ret2 << endl;
//    cout << "pos:" << pos << endl;
//    string s3 = "0x11x22";
//    int ret3 = stoi(s3, &pos, 0);
//    cout << ret3 << endl;
//    cout << "pos:" << pos << endl;
//    string s4 = "11x22";
//    int ret4 = stoi(s4, &pos);
//    cout << ret4 << endl;
//    cout << "pos:" << pos << endl;
//    return 0;
//}



//#include <iostream>
//#include<string>    
//using namespace std;
//int main()
//{
//    string s = "3.14x456";
//    double ret = stod(s, NULL);
//    cout << ret << endl;
//    return 0;
//}




#include <iostream>
#include<string>    
using namespace std;
int main()
{
	size_t pos = 0;
    string s = "3.14x456";
    double ret = stod(s, &pos);
    cout << ret << endl;
    cout << "pos:" << pos << endl;
    return 0;
}




