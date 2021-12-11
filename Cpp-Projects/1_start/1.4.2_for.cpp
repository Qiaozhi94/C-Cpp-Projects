#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int num = 0;
    for (int val = 1; val <= 10; ++val)
        num += val;
        
    cout << "1到10之和是" << num << endl;

    system("pause");
    return 0;
}