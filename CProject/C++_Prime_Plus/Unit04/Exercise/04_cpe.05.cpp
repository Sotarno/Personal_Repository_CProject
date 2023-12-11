// 结构CandyBar包含3个成员。第一个成员存储了糖块的品品牌:第二个成员存储糖块的重量(可以
// 有小数);第三个成员存储了糖块的卡路里含量(整数)。请编写一个程序,声明这个结构,创建一个名为
// snack的CandyBar变量,并将其成员分别初始化为"MochaMunch"、2.3和350。初始化应在声明snack
// 时进行。最后,程序显示snack变量的内容。

#include <iostream>
struct inflatable
{
    char brand [20];
    float weight;
    int calorie;
};

int main()
{
    using namespace std;
    inflatable snack =
    {
        "Mocha MUnch",
        2.3,
        350
    };

    cout << "A snack named " << snack.brand
         << "what is weight " << snack.weight << endl;
    cout << "Which calories is " << snack.calorie << endl;

    return 0;
}
