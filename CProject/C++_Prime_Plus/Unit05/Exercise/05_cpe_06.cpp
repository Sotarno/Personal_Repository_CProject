// 6.完成编程练习5,但这一次使用一个二维数组来存储输入--3年中每个月的销售量。程序将报告
// 每年销售量以及三年的总销售量。
#include <iostream>
#include <array>
#include <string>


const int Months = 12;
const int Years = 3;
int main()
{
    std::array<std::string, Months> month = 
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

    std::array<std::string, Years> year = 
    {
        "First year",
        "Second year",
        "Third year"
    };

    int sales [Years] [Months];             // define the 2-D array

    // input the 2-D array
    for (int i = 0; i < Years; i++)
    {
        for (int j = 0; j < Months; j++)
        {
            std::cout << "Please enter the sales of " << year[i]
                      << " and the month of " << month[j] << ": ";
            std::cin >> sales[i][j];
        }       
    }
    
    // output the 2-D array
    std::cout << "The three years sales is following: " << std::endl;
    for (int i = 0; i < Years; i++)
    {
        for (int j = 0; j < Months; j++)
        {
            std::cout << sales[i][j] << "\t";
            if (j == Months - 1)   // 如果到达行末尾，则换行
            {
                std::cout << std::endl;
            }
        }
    }
    
    // sum the 2-D array
    int total;
    for (int i = 0; i < Years; i++)
    {
        for (int j = 0; j < Months; j++)
        {
            total += sales[i][j];
        }
    }
    
    std::cout << "\nThe total summation of sales is " << total << "." << std::endl;
    return 0;
}