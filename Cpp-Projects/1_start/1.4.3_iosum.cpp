#include <iostream>
#include <windows.h>
using namespace std;

int main()
{

    int sum = 0, value = 0;
    while (cin >> value)
        sum += value;
    cout << "�ܺ��ǣ�" << sum << endl;
    system("pause");
    return 0;

}