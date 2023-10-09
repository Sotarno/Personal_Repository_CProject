// 编写一个程序，要求用户输入全球当前的人口和美国当前的人口（或其他国家的人口）。将这些信息存储在long long变量中，并让程序限时美国（或其他国家）的人口占全球人口的百分比。该程序的输出应与下面类似：
// Enter the world's populatioon: 6898758899
// Enter the population of the US: 310783781
// The population of the US is 4.50492% of the world poputlation.

# include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    long long World_popu;
    long long US_popu;
    double Mod;
    cout << "Enter the world`s population: ";
    cin >> World_popu;
    cout << "Enter the population of the US: ";
    cin >> US_popu;
    Mod = double(US_popu) / double(World_popu) * 100;               //* longlong类型会自动取整，每次计算时需要把其中一个数值重置为double型
    cout << "The population of the US is " << Mod << "% of the world poputlation.";
    return 0;
}