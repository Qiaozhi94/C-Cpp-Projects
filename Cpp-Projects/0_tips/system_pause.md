# C++程序运行结束后两种避免闪退的方法

C++编译完成的exe机器文件在双击打开后通常在自动运行完程序后回快速关闭，导致我们无法看到程序运行结果，在这里有两种方法可以避免程序运行完成后闪退

1. 一是在头文字位置加上#include <windows.h>,之后在 return 0; 之前加上 system("pause"); 这样可以实现程序运行完之后出现按下任意键继续字样从而阻止程序自动闪退
**代码如下：**

        #include<windows.h>
        #include <iostream>
        int main()
        {
            std::cout << "Hello World!" << std::endl;
            system("pause");
            return 0;
        }
2. 二是在头文字位置加上#include <conio.h>,之后在 return 0; 之前加上 getch(); 这样可以实现程序运行完之后停下来从而阻止程序自动闪退
**代码如下：**

        #include <conio.h>
        #include <iostream>
        int main()
        {
            std::cout << "Hello World!" << std::endl;
            getch();
            return 0;
        }
