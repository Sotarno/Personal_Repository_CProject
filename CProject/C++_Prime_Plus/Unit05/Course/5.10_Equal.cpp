// equal.cpp -- equality vs assignment
#include <iostream>
{
    int main()
    using namespace std;
    int quizscores [10] =
        { 20, 20, 20, 20, 20, 19, 20, 19, 20, 18, 20, 20};

    cout << "Doing it right:\n";
    int i;
    for (i = 0; quizscores[i] == 20; i++)
        cout << "quiz " << i << " is a 20\n";
    // Warning: you may prefer reading about this program
    // to actually running it.
    cout << "Doing it dangerously wrong:\n";
    for (i = 0; quizscores[i] = 20; i++)                // 该代码将一段非0值（true）赋值给了一个数组，导致该判断永远为true，永远无法停止。
        cout << "quiz "<< i << " is a 20\n";


    return 0;
}