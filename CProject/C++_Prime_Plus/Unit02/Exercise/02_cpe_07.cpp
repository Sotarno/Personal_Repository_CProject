// 7.7.编写一个程序，要求用户输入小时数和分钟数。在 main()函数中，将这两个值传递给一个 void 函数，后者以下面这样的格式显示这两个值:
// Enter the number of hours: 9
// Enter the number of minutes: 28
// Time:9:28

#include <iostream>
void time(int n, int m);
using namespace std;

int main()
{
    int hour;
    cout << "Enter the number of hours: ";
    cin >> hour;
    int min;
    cout << "Enter the number of minutes: ";
    cin >> min;
    cout << "Time:";
    time(hour,min);
    return 0;
}

void time(int n, int m)
{
    cout << n << ":" << m;
}