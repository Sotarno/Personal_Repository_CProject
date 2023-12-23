// 结构CandyBar包含三个成员，如编程练习5所示。请编写一个程序，创建一个包含三个元素的CandyBar数组，并将他们初始化为所选择的值，然后显示每个结构的内容。

#include <iostream>
struct inflatable
{
    char brand [20];
    float weight;
    int calorie;
};

int main()
{
    using namespace std;
    inflatable CandyBar[1] =                        // 必须先在外部声明结构才能使用结构数组，否则结构无效
    {
        {"Mocha MUnch",
        2.3,
        350}
    };
    cout << "A snack named " << CandyBar[0].brand
         << "what is weight " << CandyBar[0].weight << endl;
    cout << "Which calories is " << CandyBar[0].calorie << endl;
    return 0;
}