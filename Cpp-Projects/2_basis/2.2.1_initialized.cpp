//Author: Qiaozhi LI
//Language: C++


#include <iostream>
#include <windows.h>

using namespace std;



int main()
{
    long double ld = 3.1415926536;
    int a{ld}, b = {ld};
    int c(ld), d = (ld);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    system("pause");
    return 0;
}

// 使用花括号初始化时，在从long double到int的转换中C++会提示存在数据丢失的风险，但最后程序还是会运行。使用普通括号则不会提示，程序照常运行，最后数据小数部分确实丢失