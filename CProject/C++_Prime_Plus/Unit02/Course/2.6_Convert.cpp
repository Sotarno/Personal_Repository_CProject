// convert.cpp -- converts stone to pounds

#include <iostream>
int stonetolb(int);                // function prototype

int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    return 0;
}

int stonetolb(int sts)
{
    return 14 * sts;
}


/*
stonetolb函数的格式可以优化的更好理解

int stonetolb(int sts)
{
    int pounds = 14 * sts;
    return pounds;
}

函数的标准结构如上所示，包含
    1.函数头和函数体;
    2.需要一个参数;
    3.有一个返回值;
    4.需要一个原型;
*/