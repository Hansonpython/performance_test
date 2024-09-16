#include <iostream>
#include <time.h>
#include <algorithm>
#include <iomanip>
using namespace std;
const int T = 1000000000;
int main()
{
    cout.setf(ios::fixed);
    cout << setprecision(20);
#ifdef _WIN32
    system("chcp 65001");
    system("cls");
#elif __linux__
    system("clear");
#endif
    float a = 3.1415926535898, b = 30.1415926535898, c = 300.14159265358, d;
    cout << "将要进行算力测试:" << endl << "    执行十亿 ( " << T << " ) 次 d = a * b + c 计算。" << endl << "    a = " << a << " b = " << b << " c = " << c << " d 未初始化。" << endl;
    for (int i = 0 ; i < T ; i++) d = a * b + c;
    double result = (double)T / ((double)clock() / CLOCKS_PER_SEC);
    cout << setprecision(0) << "您的计算机一秒能执行 (向下取整) " << result << " 次运算。(相当于 " << result / T * 10 << " 亿次运算)。" << endl;
    return 0;
}
