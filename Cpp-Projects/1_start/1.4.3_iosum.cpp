#include <iostream>
#include <windows.h>
using namespace std;

int main()
{

    int sum = 0, value = 0;
    while (cin >> value)
        sum += value;
    cout << "输入的数字之和是" << sum << endl;
    system("pause");
    return 0;
}