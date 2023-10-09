// 编写一个程序，要求用户按欧洲风格输入汽车的耗油量（每100公里消耗的汽油量（升）），然后将其转换为美国风格的耗油量————每加仑多少英里。
// 注意，除了使用不同的单位计量外，美国方法（距离/燃料）与欧洲方法（来两/距离）相反。
// 100公里等于62.14英里，1加仑等于3.875升。因此，19mpg 大约合 12.41/100km。 127mpg 大约合 8.71/100km。

#include <iostream>
int main()
{
    using namespace std;
    const float kilo2mile = 0.6214;
    const float liter2gallon = 1 / 3.875;

    float FuelConsumption_EU;
    float FuelConsumption_US;
    
    cout << "Please enter the fuel consumption in European style(/100km): ";
    cin >> FuelConsumption_EU;
    FuelConsumption_US = ( 100 * kilo2mile ) / ( FuelConsumption_EU * liter2gallon );

    cout << FuelConsumption_EU << "/100km is roughly equivalent to " << FuelConsumption_US << "mpg.";

    return 0;
}