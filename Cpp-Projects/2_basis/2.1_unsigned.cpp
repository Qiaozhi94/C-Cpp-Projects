// 符号类型与无符号类型的区别
// 得到的两个数字分别是4294967285和84
// 4294967285本身无意义

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    unsigned i = 0;
    int a = -53;

    cout << i + a << endl;
    cout << i + i << endl;

    system("pause");
    return 0;
}

