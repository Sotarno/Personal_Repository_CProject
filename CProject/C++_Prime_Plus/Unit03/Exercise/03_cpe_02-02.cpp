// 2.为了获得比较精确的英尺、英寸和磅，编写一个程序获取自己的身高和体重，并转化为英尺、英寸和磅。

#include <iostream>
int main()
{
    using namespace std;
    // cout.setf(ios_base::fixed, ios_base::floatfield);
    const float in_m = 0.0254;
    const float po_kg = 1 / 2.2;
    const int fe_in = 12;
    int feet, inch, pounds;
    float metre, kg, BMI;

    cout << "Please enter the flowing contents:" << endl;
    cout << "Your height(meter): ____\b\b\b\b";
    cin >> metre;
    cout << "Your weight(kg): __\b\b";
    cin >> kg;
    inch = metre / in_m;
    cout << "You are " << inch << " inch.";
    feet = inch / fe_in;
    inch = inch % fe_in;
    pounds = kg / po_kg;
    cout << "You height is " << feet << " feet and " << inch << " inch." << endl;
    cout << "You weight is " << pounds << " pounds." << endl;
    return 0;
}