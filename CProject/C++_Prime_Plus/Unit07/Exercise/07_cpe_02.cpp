// 2.编写一个程序,要求用户输入最多10个高尔夫成绩,并将其存储在一个数组中。程序允许用户提
// 早结束输入,并在一行上显示所有成绩,然后报告平均成绩。请使用3个数组处理函数来分别进行输入、
// 显示和计算平均成绩。
#include <iostream>
const int Arsize = 10;
int fill_arr(float arr[], int n);
void output_arr(float arr[], int n);
float ave_arr(float arr[], int n);

int main()
{
    float golfscore[Arsize];
    int size = fill_arr(golfscore, Arsize);

    std::cout << "The score of golf is following\n";
    output_arr(golfscore, size);
    
    std::cout << "The average score is: " << ave_arr(golfscore, size);
    return 0;
}


int fill_arr(float arr[], int n)
{
    using namespace std;
    float temp;
    int i;
    for(i = 0; i < n; i++)
    {
        cout << "Please enter the #" << i + 1 << " score: ";
        cin >> temp;
        if(!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)  // signal to terminate
            break;
        arr[i] = temp;
    }
    return i;
}

void output_arr(float arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << ";\n";
}

float ave_arr(float arr[], int n)
{
    float total_score = 0;
    float ave_score = 0;
    for (int i = 0; i < n; i++)
    {
        total_score += arr[i];
    }
    ave_score = total_score / n;
    return ave_score;
}