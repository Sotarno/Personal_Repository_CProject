// 1.编写一个程序，不断要求用户输入两个数，知道其中一个为0。
// 对于每两个数，程序将使用一个函数来计算它们的调和平均数，并将结果返回给 main() ，
// 而后者将报告结果。调和平均数是指倒数平均值的倒数，计算公式如下：
// 调和平均数 = 2.0 * x * y / (x + y)

#include <iostream>
double Rec_Ave(double a, double b);

int main()
{
    double num1;
    double num2;
    do
    {
        std::cout << "Please enter the first number: ";
        std::cin >> num1;
        std::cout << "Please enter the second number: ";
        std::cin >> num2;
        double ra;
        ra = Rec_Ave(num1,num2);
        std::cout << "The reconcile average of " << num1
                  << " and " << num2 << " is " << ra << "."
                  << "\nLet`s continue(zero to stop)!\n";
    } while (num1 != 0 || num2 !=0);
    return 0;
}

double Rec_Ave(double a, double b)
{
    double y;
    y = 2.0 * a * b / (a + b);
    return y;
}