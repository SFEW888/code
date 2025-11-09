//#include <iostream>
//using namespace std;
//int main()
//{
//    int a;
//    char c;
//    float f;
//    
//    cin >> a; // 读取一个整数 
//    cin >> c; // 读取一个字符 
//    cin >> f; // 读取取一个浮点数 
//    
//    cout << "打印结果:"<<endl;
//    cout << a << endl;
//    cout << c << endl;
//    cout << f << endl;
//    return 0;
//}




//#include <iomanip>
//int main() {
//    int a = 123;
//    
//    cout << "默认宽度: " << a << endl;
//    cout << "宽度设置为10: " << setw(10) << a << endl;
//    cout << "宽度为10，不够时填充*: " << setw(10) << setfill('*') << a << endl;
//    
//    return 0;
//}




//#include <iomanip>
//int main() 
//{
//    double pi = 31.41592653589793;
//    
//    cout << "默认: " << pi << endl;
//    cout << "固定小时点方式: " << fixed << pi << endl;
//    cout << "科学计数法方式: " << scientific << pi << endl;
//    cout << "固定小数点，小数点后2位有效数字: " << setprecision(2) << pi << endl;
//    cout << "固定小数点，小数点后2位有效数字: " << fixed << setprecision(2) << pi << endl;
//    return 0;
//}




//#include <iostream>
//using namespace std; 
//#include <iomanip>
//int main() {
//    int n = 255;
//    
//    cout << "十进制  : " << dec << n << endl;
//    cout << "十六进制: " << hex << n << endl;
//    cout << "八进制  : " << oct << n << endl;
//    
//    return 0;
//}





#include <iostream>
using namespace std; 
#include <iomanip>
int main() {
    int n = 123;
    cout << "右对齐: " << setw(10) << n << endl;
    cout << "右对齐: " << setw(10) << right << n << endl;
    cout << "左对齐: " << setw(10) << left << n << endl;
    return 0;
}




















