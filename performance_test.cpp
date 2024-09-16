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
    cout << "Will conduct a computing power test:" << endl << "Execute one billion ( "<< T << " ) calculations d = a * b + c << endl << "    a = " << a << " b= " << b << " c= " << c << " d is not initialized. " << endl;
    for (int i = 0 ; i < T ; i++) d = a * b + c;
    double result = (double)T / ((double)clock() / CLOCKS_PER_SEC);
    cout << setprecision(0) << "Your computer can perform one second (rounded down) " << result << " operations. (Equivalent to " << result / T * 10 << " on hundred million operations)." << endl;
    return 0;
}
