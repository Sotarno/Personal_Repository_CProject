// 编写一个程序，它要求用户首先输入其名，然后输入其姓；然后程序使用一个逗号和一个空格将姓何名组合起来。
// 并存储和显示组合效果。请使用char数组和头文件cstring中的函数。下面是该程序运行时的情形：
// Enter your first name: Flip
// Enter your last name: Fleming
// Here's the information in a sigle string: Fleming, Flip

#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20];

    cout << "Enter your first name: ";
    cin.getline(charr1,20);
    cout << "Enter your last name: ";
    cin.getline(charr2,20);

    strcat(charr2,", ");
    strcat(charr2, charr1);
    cout << "Here's the information in a sigle string: " << charr2 << endl;
    
    return 0;
}