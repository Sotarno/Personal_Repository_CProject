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
    int col;
    int raw;
    int i = 1;
    int j = 0;

    std::cout << "Please enter a raw number: ";
    std::cin >> raw;
    col = raw; 

    while(i <= raw)
    {
        std::cout << "\n";
        while(i + j < col)
        {
            std::cout << ".";
            j++ ;
        }
        while(j < col )
        {
            std::cout << "*";
            j++ ;
        }
        i++;
        j = 0;
    }
    return 0;
}
