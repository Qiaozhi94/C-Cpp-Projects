//Author: Qiaozhi LI
//Language: C++


#include <iostream>
#include <windows.h>

using namespace std;



int main()
{
   short short_value = 32767;
   short_value += 1;
   cout << "short_value: " << short_value << endl;

   system("pause");
   return 0;
}
// 输出结果为short_value: -32768，表现为数据经过运算后溢出