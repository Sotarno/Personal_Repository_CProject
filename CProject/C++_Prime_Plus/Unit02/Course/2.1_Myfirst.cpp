// myfirst.cpp -- displasys a message

#include <iostream>                             // a PREPROCESSOR directive
int main()                                      // function header函数头，前面指返回类型，指返回给调用它的函数的信息，括号中是参数列表，指从调用的函数处获得的信息，main函数获取虚无
{                                               // start of function body
    using namespace std;                        // make definitions visibel
    cout << "Come up and C++ me some time.";    // message
    cout << endl;                               // start a new line
    cout << "You won't regret it !" << endl;    // more output
    return 0;                                   // terminate main()
}                                               // end of function body

// c++函数必须包含一个名为main()的函数