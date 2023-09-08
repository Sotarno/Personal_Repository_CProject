// 1.编写一个小程序，要求用户使用一个整数指出自己的身高（单位为英寸），然后将身高转换为英尺和英寸。该程序使用下划线字符来只是输入位置。另外，使用一个const符号常量来表示转换因子。

#include <iostream>
int main()
{
    using namespace std;

    const int ftin = 12;
    int feet, inch, modfi;
    cout << "Please enter your height(inch):---\b\b\b";
    cin >> inch;
    feet = inch / ftin;
    modfi = inch % ftin;
    cout << "Well ,your height is " << feet << " feet and "
         << modfi << " inch!" << endl;
    return 0;
}