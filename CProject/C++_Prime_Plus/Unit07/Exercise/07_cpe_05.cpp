// 5.定义一个递归函数,接受一个整数参数,并返回该参数的阶乘。前面讲过,3的阶乘写作3!,等于
// 3*2!,依此类推;而0!被定义为1。通用的计算公式是,如果n大于零,则n!=n*(n-1)!。在程序中对该
// 函数进行测试,程序使用循环让用户输入不同的值,程序将报告这些值的阶乘。

#include <iostream>
int factorial(int n);

int main()
{
    using namespace std;
    int num;
    cout << "This is a function for calculate the factorial of some number\n"
         << "Please enter the number: ";
    cin >> num;
    cout << "The factorial of " << num << " is " << factorial(num);
    return 0;
}

int factorial(int n)
{
    int y;
    if (n > 0)
        y = n * factorial(n - 1);
    else
        y = 1;
    return y;
}