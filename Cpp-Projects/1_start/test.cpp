#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int sum = 0;
    for (int val = 1; val<=10; ++val)
    sum += val;
    //cout << "1到10之和是" << sum <<endl;
    cout << "1到10之和是" << sum <<endl;
    system("pause");
    return 0;

} 