// 1.加减法计算器代码，该段代码仍然使用了CS50的库，换一种方案实现可能需要别的代码协助

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    printf("/%i\n",x + y);
}



// 2.该代码为上述代码的优化版
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    int z = x + y
    printf("/%i\n",z);
}



// 3.该段代码为上述代码的可实现版本
#include <stdio.h>

int main(void)
{
    printf("Please input the X:");
    int x ;
    scanf("%i", &x );
    printf("Please input the Y:");
    int y ;
    scanf("%i", &y );
    int z = x + y ;
    printf("Well , the sum(X,Y) equals %i \n", z);
    return 0;
}


// 4.我们可以通过一个调整，把加法封装到一个函数中，调用函数来实现这个功能
#include <stdio.h>

int sum(int n, int m);/* 函数签名，函数声明，函数原型，这几个叫法都行，意思是提示cpu，我们有个函数叫这个，参数是n和m，返回值是int*/

int main(void)
{
    printf("Please input the X:");
    int x;
    scanf("%i", &x);
    printf("Please input the Y:");
    int y;
    scanf("%i", &y);
    int z = sum(x , y);/* 调用函数*/
    printf("Well, the sum(x,y) equals %i \n", z);
    return 0 ;
}

int sum(int n, int m)/* 这就是函数,出于书写习惯，把main函数放在最前面，把sum函数放在最后面*/
{
    int ret_val = 0;
    ret_val = n + m;
    return ret_val;
}


// 5.上述代码的优化版本，我们可以通过把原先main函数中的函数拆分开来，把主函数拆分成多个子函数，模块化整个程序，封装每一个子功能
#include <stdio.h>

int sum(int n, int m);

void print_x(void)/* 用来打印一段话的函数*/
{
    printf("Please input the X:");
}

void print_y(void)/* 用来打印一段话的函数,同上*/
{
    printf("Please input the Y:");
}

int main(void)
{
    print_x();
    int x;
    scanf("%i", &x);
    print_y();
    int y;
    scanf("%i", &y);
    int z = sum(x , y);
    printf("Well,thesum(X,Y)equals %i\n",z);
    return 0;
}

int sum(int n, int m)
{
    int ret_val =0;
    ret_val = n + m;
    return ret_val;
}