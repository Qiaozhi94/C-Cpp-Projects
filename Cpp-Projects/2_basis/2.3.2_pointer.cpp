//Author: Qiaozhi LI
//Language: C++


#include <iostream>
#include <windows.h>

using namespace std;



int main()
{
    int a = 42;
    int *b = &a;
    int *c = nullptr;
    int *d = 0;
    // int e = &a;  // 错误
    cout << a << endl;
    cout << b << endl;
    cout << *b << endl; // 利用指针访问对象
    cout << c << endl;
    cout << *d << endl;
    // cout << e << endl; 
    system("pause");
    return 0;
}
