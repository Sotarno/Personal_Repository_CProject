// 4.Daphne以10%的单利投资了100美元。也就是说,每一年的利润都是投资额的10%,即每年10美元
//                          利息=0.10×原始存款
// 而Cleo以5%的复利投资了100美元。也就是说,利息是当前存款(包括获得的利息)的5%,
//                          利息=0.05×当前存款
// Cleo在第一年投资100美元的盈利是5%--得到了105美元。下一年的盈利是105美元的5%--即
// 5.25美元,依此类推。请编写一个程序,计算多少年后,Cleo的投资价值才能超过Daphne的投资价值,
// 并显示此时两个人的投资价值。

#include <iostream>
#include <math.h>
#include <array>

int main()
{
    const float simp_interest = 0.10;
    const float comp_interest = 0.05;
    const float invest = 100;
    
    float Daphne_invest = invest;
    float Cleo_invest = invest;
    // float Daphne_value[100];
    // float Cleo_value[100];
    std::array<float,100> Daphne_value;
    std::array<float,100> Cleo_value;

    for(int i = 0; i < 30; i++)
    {

        Daphne_value[i] = (i * simp_interest + 1) * Daphne_invest; 
        Cleo_value[i] = Cleo_invest * pow(1+comp_interest,i);
        std::cout << "The " << i << " year,"
                  << " Daphne`s investment value is " 
                  << Daphne_value[i]
                  << ", Cleo`s investment value is " 
                  << Cleo_value[i]
                  << std::endl;
    }
    return 0;
}

// 该题完全不应该使用for循环，for循环使用i作为判断依据，数组大小无法判断。