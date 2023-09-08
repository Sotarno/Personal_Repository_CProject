// 3.编写一个程序，要求用户以度、分、秒的方式输入一个纬度，然后以度为单位显示该纬度。
// 1度为60分，1分等于60秒，请以符号常量的方式表示这些值。对于每个输入值，应使用一个独立的变量存储它。
// 下面是该程序运行时的情况：
/*
    Enter a latitude in degrees, minutes, and seconds:
    First, enter the degrees: 37
    Next, enter the minutes of arc: 51
    Finally, enter the seconds of arc: 19
    37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
*/

#include <iostream>
int main()
{
    using namespace std;
    const int dtom = 60;
    const int mtos = 60;
    float degree, minute, second;
    float dms;

    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> degree; 
    cout << "Next, enter the minutes of arc: ";
    cin >> minute;
    cout << "Finally, enter the seconds of arc: ";
    cin >> second;
    dms = ( degree * dtom * mtos + minute * mtos + second ) / ( dtom * mtos );
    cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = " << dms << " degrees";
    return 0;
}