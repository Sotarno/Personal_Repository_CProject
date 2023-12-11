// 编写一个程序，它要求用户首先输入其名，然后输入其姓；然后程序使用一个逗号和一个空格将姓何名组合起来。
// 并存储和显示组合效果。请使用string对象和头文件string中的函数。下面是该程序运行时的情形：
// Enter your first name: Flip
// Enter your last name: Fleming
// Here's the information in a sigle string: Fleming, Flip

#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string strr1;
    string strr2;

    cout << "Enter your first name: ";
    getline(cin, strr1);
    cout << "Enter your last name: ";
    getline(cin, strr2);

    strr2 += ", ";
    strr2 += strr1;
    cout << "Here's the information in a sigle string: " << strr2 << endl;
    
    return 0;
}