// 8.编写一个程序,它使用一个char数组和循环来每次读取一个单词,直到用户输入done为止。随后,
// 该程序指出用户输入了多少个单词(不包括done在内)。下面有是该程序的运行情况:
// Enter words (to stop, type the word done):
// anteater birthday category dumpster
// envy finagle geometry done for sure
// You entered a total of 7 words.
// 您应在程序中包含头文件cstring,并使用函数strcmp()来进行比较测试。


#include<iostream>
#include<cstring>
using namespace std;

int main() 
{
    cout << "Enter words (to stop, type the word done):" << endl;
    char ch[20];
    int count = 0;
    while ((cin >> ch) && strcmp(ch, "done"))
        count++;
    cout << count << endl;

    system("pause");
    return 0;
}