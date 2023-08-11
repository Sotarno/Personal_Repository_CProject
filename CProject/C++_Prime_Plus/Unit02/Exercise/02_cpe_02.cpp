// 02.编写一个C++程序，它要求用户输入一个以long为单位的距离，然后将它转换为码（一long等于220码）。

#include <iostream>
double Trans_long(double n);

int main()
{
    using namespace std;
    double length;
    cout << "How long is it?" << endl;
    cin >> length;
    double yard = Trans_long(length);
    cout << "Wow! It is " << yard << " yards." << endl;
    return 0;
}

double Trans_long(double n)
{
    double yard = n * 220;
    return yard;
}