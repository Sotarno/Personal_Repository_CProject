// 2.使用array对象(而不是数组)和long double(而不是long long)
// 重新编写程序清单5.4,并计算100!的值。

// 程序清单5.4 formore.cpp -- more looping with for
// #include <iostream>
// const int ArSize = 16;          //    example of external declaration
// int main()
// {
//     long long factorials [ArSize];
//     factorials[1] = factorials[0] = 1LL;
//     for (int i = 2; i < ArSize; i++)
//         factorials[i] = i * factorials[i-1];
//     for (int i = 0; i < ArSize; i++)
//         std::cout << i << "! = " << factorials[i] << std::endl;
//     return 0;
// }

#include <iostream>
#include <array>
const int ArSize = 101;
int main()
{
    std::array<long double,ArSize> factorials;
    factorials[1] = factorials[0] = 1L;
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i-1];
//  for (int i = 0; i < ArSize; i++)
//      std::cout << i << "! = " << factorials[i] << std::endl;
    std::cout << "100! = " << factorials[ArSize - 1] << std::endl;  // 可以直接只输出该结果，不需要每个都算一遍
    return 0;
}