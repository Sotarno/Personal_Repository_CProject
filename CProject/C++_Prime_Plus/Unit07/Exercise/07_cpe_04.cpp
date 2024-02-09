// 4.许多州的彩票发行机构都使用如程序清单7.4所示的简单单彩票玩法的变体。在这些玩法中,玩家从
// 一组被称为域号码(field number)的号码中选择几个。例如如,可以从域号码1~47中选择5个号码;还可
// 以从第二个区间(如1~27)选择一个号码(称为特选号码)。要赢得头奖,必须正确猜中所有的号码。中
// 头奖的几率是选中所有域号码的几率与选中特选号码几率的乘积。例如,在这个例子中,中头奖的几率是
// 从47个号码中正确选取5个号码的几率与从27个号码中正确确选择1个号码的几率的乘积。请修改程序清
// 单7.4,以计算中得这种彩票头奖的几率。


#include <iostream>

long double probability(unsigned numbers, unsigned picks);

int main()
{
    using namespace std;
    double normal_total, normal_choices, sp_total, sp_choices;
    cout << "Enter the normal total number of choices on the game card and\n"
            "the normal number of picks allowed:\n"
            "the sp total of number of choices on the game card and\n"
            "the sp number of picks allowed:\n";
    while ((cin >> normal_total >> normal_choices >> sp_total >> sp_choices) && normal_choices <= normal_total && sp_choices <= sp_total)
    {
        cout << "You have one chance in ";
        cout << probability(normal_total, normal_choices) * probability(sp_total, sp_choices);         // compute the odds
        cout << " of winning.\n";
        cout << "Next two numbers (q to quit): ";
    }
    cout << "bye\'n";
    return 0;
}

// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;                       //here come somelocal variables
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result;
}