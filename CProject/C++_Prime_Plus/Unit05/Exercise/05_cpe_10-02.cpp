// 10.编写一个使用嵌套循环的程序,要求用户输入一个值,指出要显示多少行。然后,程序将显示相
// 应行数的星号,其中第一行包括一个星号,第二行包括两个星星号,依此类推。每一行包含的字符数等于用
// 户指定的行数,在星号不够的情况下,在星号前面加上句点。该程序的运行情况如下:
// Enter number of rows: 5
// ....*
// ...**
// ..***
// .****
// *****


#include <iostream>

int main()
{
    int raw;

    std::cout << "Please enter a raw number: ";
    std::cin >> raw;

    for(int i = 1; i <= raw; i++)
    {
        std::cout << "\n";
        for(int j = 1; i + j <= raw; j++)
        {
            std::cout << ".";
        }
        for(int j = 1; j <= i; j++)
        {
            std::cout << "*";
        }
    }
    return 0;
}
