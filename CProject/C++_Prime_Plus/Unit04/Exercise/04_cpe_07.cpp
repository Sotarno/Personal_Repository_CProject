// Wiliam Wingate 从事比萨饼分析服务。对于每个披萨饼，他都需要记录以下信息：、
// 披萨饼公司的名称，可以用多个单次组成。
// 披萨饼的直径。
// 披萨饼的重量。
// 请设计一个能够存储这些信息的结构，饼编写一个使用这种结构变量的程序。程序将请求用户输入上述信息，然后显示这些信息。
// 请使用cin（或它的方法）和cout。

#include <iostream>
struct inflatable
{
    char company [80];
    float diameter;
    float weight;
};

int main()
{
    using namespace std;
    // inflatable Pizza[100]; 
    //题目没说多少个Pizza，我们暂定只有3个
    inflatable Piz[3];
    cout << "Please input the NO.1 company name:" << endl;
    cin.getline(Piz[0].company,80);//读取结构中第一个的公司名字
    cout << "Please input diameter of NO.1 :" << endl;
    cin >> Piz[0].diameter;
    cout << "Please input the weight of NO.1 :" << endl;
    cin >> Piz[0].weight;
    // ... 以此类推 写三个
    // ... 再对他们依次进行输出
    cout << Piz[0].company;
    cout << Piz[1].diameter;
    // ... 就不一一举例了
    return 0;
};