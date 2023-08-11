// 4.编写一个C++程序，让用户输入其年龄，然后显示该年龄包含多少个月，如下所示：
// Enter your age: 29

#include <iostream>
void Output(int n);

int main()
{
    using namespace std;
    cout << "Enter your age: ";
    int year;
    cin >> year;
    Output(year);
    return 0;
}

void Output(int n)
{
    using namespace std;
    int month = n * 12;
    cout << "There are " << month << " months.";
}