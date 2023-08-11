// 6. 这是第6题的一种改进做法，应当更合理
/* 这是一段涉及指针的代码，请后续研究 */
//
// 编写一个程序,其main()调用一个用户定义的函数(以光年值为参数,并返回对应天文单位的值)。
// 该程序按下面的格式要求用户输入光年值,并显示结果:
// Enter the number of light years: 4.2
// 4.2 light years = 265608 astronomical units.
// 天文单位是从地球到太阳的平均距离(约150000000公里或93000000英里),光年是光一年走的距离(约10万亿公里或6万亿英里)
//(除太阳外,最近的恒星大约离地球4.2光年)。请使用double类型(参见程序清单2.4),转换公式为:
// 1光年=63240天文单位

#include <iostream>
using namespace std;
void Input(string s, double *);
double cal(double);

int main()
{
    double Light_Year;
    double * ptr = &Light_Year;                        //定义一个整数指针，并把光年的地址给指针
    Input("Enter the number of light years:", ptr); //把指针传入函数中
    cout << Light_Year
         << " light years = "
         << cal(Light_Year)
         << " astronomical units.\n";
    return 0;
}

void Input(string s,double* n)                         //输入一句话+一个变量，把话打印，读取一个值给变量
{
    cout << s;
    double tmp = 0;
    cin >> tmp;
    *n = tmp;                                       //修改指针的值
}

double cal(double n)
{
    double ret_val = n * 63240;
    return ret_val;
}