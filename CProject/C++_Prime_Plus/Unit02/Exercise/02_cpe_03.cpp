// 3.编写一个C++程序,它使用3个用户定义的函数(包括 main() ),并生成下面的输出:
// Three blind mice
// Three blind mice
// See how they run
// See how they run
// 其中一个函数要调用两次,该函数生成前两行;另一个函数也被调用两次,并生成其余的输出。

#include <iostream>
void Mice(void);
void Run(void);

int main()
{
    Mice();                 // 无需调用任何参数，直接为空即可
    Run();                  // 无需调用任何参数，直接为空即可
    Run();                  // 无需调用任何参数，直接为空即可
    return 0;
}

void Mice(void)
{
    using namespace std;
    cout << "Three blind mice" << endl
         << "Three blind mice" << endl;
}

void Run(void)
{
    using namespace std;
    cout << "See how they run" << endl;
}