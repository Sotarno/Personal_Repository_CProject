// 5.假设要销售《C++ For Fools》一书。请编写一个程序,输入全年中每个月的销售量(图书数量,而
// 不是销售额)。程序通过循环,使用初始化为月份字符串的char*数组(或string对象数组)逐月进行提示,
// 并将输入的数据储存在一个int数组中。然后,程序计算数组中各元素的总数,并报告这一年的销售情况。

#include <iostream>
#include <array>
#include <string>

int main()
{
    std::array<std::string, 12> month = 
    {
        "Jan", 
        "Feb", 
        "Mar", 
        "Apr", 
        "May",
        "Jun",
        "Jul",
        "Aug",
        "Sep",
        "Oct",
        "Nov",
        "Dec"
    };
    int sales[12];
    int total;
    int i = 0;
 
    do
    {

        std::cout << "Please enter the sales of <<C++ For Fools>> in "
                  << month[i]
                  << ": ";
        std::cin >> sales[i];
        total += sales[i];
        i++;
    } while (i < 12);
    std::cout << "This year, the summation of sales of <<C++ For Fools>> is" 
              << total << "." 
              << std::endl;
    return 0;
}