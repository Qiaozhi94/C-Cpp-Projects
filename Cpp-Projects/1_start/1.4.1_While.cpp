#include <iostream>
//#include<windows.h>
#include <conio.h>
int main()

{
    int sum = 0 , val = 1;
    while (val<=10) {
        sum = sum + val;
        val = val + 1;
    }
    std::cout << "Sum of 1 to 10 inclusive is "
    << sum << std::endl;
    getch();
    return 0;
    //system("pause");
    
} 