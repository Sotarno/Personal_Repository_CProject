// 1.编写一个要求用户输入两个整数的程序。该程序将计算并输出这两个整数之间(包括这两个整数)
// 所有整数的和。这里假设先输入较小的整数。例如,如果用户输入的是2和9,则程序将指出2~9之间所
// 有整数的和为44。

#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    int result;
    cout << "Please enter the first number: ";
    cin >> num1;
    cout << "Please enter the second number: ";
    cin >> num2;
    for (int i = num1; i <= num2; i++)
        result += i;
    cout << "The sum of numbers between the two numbers is " << result << endl;
    return 0;
}