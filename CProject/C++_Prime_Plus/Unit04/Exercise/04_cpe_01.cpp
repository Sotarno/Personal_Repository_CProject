// 编写一个C++程序，如下述输出示例所示的那样请求并显示信息：
// What is your first name? Betty Sue
// What is your last name? Yewe
// What letter garade do you deserve? B
// What is your age? 22
// Name: Yewe, Betty Sue
// Grade: C
// Age: 22

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    char alpha;
    char firstname[20];
    char lastname[20];

    cout << "What is your first name?";
    cin.getline(firstname,20);

    cout << "What is your last name?";
    cin.getline(lastname,20);

    cout << "What letter garade do you deserve?";
    cin >> alpha;

    cout << "What is your age?";
    cin >> age;

    cout << "Name: " << lastname << ", " << firstname << endl;
    cout << "Grade: " << alpha + 1 << endl;
    cout << "Age: " << age;

    return 0;
}