// 1.第一段代码  这是一段来自于互联网上的复制代码，用于验证IDE的可行性；

#include <stdio.h>

int main(void)
{
    printf("hello world! I'm VSCode\n");
 return 0;
} 



// 2.如何换行，换行可以通过 \n 来转义，\加上某个字符将具有某种功能；

#include <stdio.h>

int main(void)
{
    printf("hello world!\nI'm xiaoming\nwe'd better do our best");  /*1 这里就是换行符的位置*/
    return 0;
}



// 3.如何input；
#include <cs50.h>   /* 这是CS50课程中的特殊库（library)，需要网上下载；*/
#include <stdio.h>

int main(void)
{
    string answer = get_string("What's your name?");
    printf("hello,%s\n",answer);    /* %s是一个占位符，教科书上这样解释：把输入解释成一个字符串:输入的内容以第一个非空白字符作为开始，并且包含直到下-个空白字符的全部字符；*/
}



// 4.这个里面带有1个getchar()获取字符 和1个打印字符putchar()的函数；

#include <stdio.h>

int main(void)
{
    int ch;
    ch = getchar();
    putchar(ch);
    return 0;
}



// 5.1个典型的scanf函数的用法；
#include <stdio.h>

int main(void)
{
    char name[40];  /* name[]表示这个是1个数组，char放在name[]前面表示这个数组存放字符；#2 [40]在这里表示name这个数组可以存放40个字符大小的内容；*/
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello , %s\n", name);
}



// 6.另一个典型的scanf函数的用法

#include <stdio.h>

int main(void)
{
    printf("How old are you?:");
    int n;
    scanf("%i" , &n);   /* scanf()是1个从标准输入流（标准输入流=键盘）读取输入的函数，如果是从文件读取，函数是fscanf()（即filescanformat）；*/
    printf("Well , you have been living for %e seconds!\n", n * 3.156e7);
    return 0;
}