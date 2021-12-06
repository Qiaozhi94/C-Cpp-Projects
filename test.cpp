#include <iostream>
using namespace std;

int main()
{
    int sum = 0, val = 1;
    while (val <= 100) {
        sum = sum + val;
        val = val + 1;
    }
    cout <<sum<< endl;
    return 0;
}