// 8.编写一个程序,它使用一个char数组和循环来每次读取一个单词,直到用户输入done为止。随后,
// 该程序指出用户输入了多少个单词(不包括done在内)。下面有是该程序的运行情况:
// Enter words (to stop, type the word done):
// anteater birthday category dumpster
// envy finagle geometry done for sure
// You entered a total of 7 words.
// 您应在程序中包含头文件cstring,并使用函数strcmp()来进行比较测试。


#include <iostream>
#include <cstring>

int main()
{
    char word[20];
    int count = 0;

    std::cout << "Enter words (to stop, type the word done): " 
              << std::endl;
    std::cin >> word;
    while (std::strcmp(word, "done"))
    {
        count++;
        std::cin >> word;
    }
    std::cout << "You entered a total of " << count << " words.";
    return 0;
}