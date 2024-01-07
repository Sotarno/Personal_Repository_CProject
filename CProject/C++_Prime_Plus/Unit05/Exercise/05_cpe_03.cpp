// 3.编写一个要求用户输入数字的程序。每次输入后,程序都将报告到目前为止,所有输入的累计和。
// 当用户输入0时,程序结束。

#include <iostream>

int main()
{
    int num;
    do
    {
        std::cout << "Please enter a number: ";
        std::cin >> num;
        int i;
        i += num;
        std::cout << "The sum of these numbers is " << i << ". If you enter zero, the function would be stopped.\n";
    } while (num !=0);
    std::cout << "You enter 0. The function was stopped by you.";
    return 0;  
}