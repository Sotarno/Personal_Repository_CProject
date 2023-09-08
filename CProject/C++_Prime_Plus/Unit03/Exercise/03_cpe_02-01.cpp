// 2.编写一个小程序，要求以几英尺几英寸的方式输入其身高，并以几磅为单位输入期体重。（使用3个变量来存储这些信息。）
// 该程序报告其BMI（Body Mass Index，体重指数）。为了计算BMI，该程序以英寸的方式指出用户的身高（1英尺为12英寸）
// 并将以英寸为单位的身高转换为以米为单位的身高（1英寸=0.0254米）。然后将以磅为单位的体重转换为以千克为单位的体重（1千克=2.2磅）
// 最后，计算相应的BMI————体重（千克）除以身高（米）的平方。用符号常量表示各种转换因子。

#include <iostream>
int main()
{
    using namespace std;
    // cout.setf(ios_base::fixed, ios_base::floatfield);
    const float in_m = 0.0254;
    const float po_kg = 1 / 2.2;
    const float fe_in = 12;
    float feet, inch, pounds;
    float metre, kg, BMI;

    cout << "Please enter the flowing contents:" << endl;
    cout << "Your height(feet): _\b";
    cin >> feet;
    cout << "Your height(inch): _\b";
    cin >> inch;
    cout << "Your weight(pounds): ___\b\b\b";
    cin >> pounds;
    metre = inch * in_m + feet * fe_in * in_m;
    kg = pounds * po_kg;
    BMI = kg / (metre * metre);
    cout << "Wow your height is " << metre 
         << " meters and your weight is " << kg
         << " kg!" << endl;
    cout << "Your BMI is " << BMI << "; Please keep healthy life." << endl;
    return 0;
}