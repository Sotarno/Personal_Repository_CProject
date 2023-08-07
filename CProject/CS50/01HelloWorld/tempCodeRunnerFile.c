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