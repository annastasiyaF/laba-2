#include <iostream>
#include "fraction.h"

int main(){
    int32_t num = 0;
    int32_t denom = 1;
    double n = 0.0;
    int32_t temp = 0;
    int32_t* pointer_temp = &temp;
    std::cout << "Введите числитель" << std::endl;
    std::cin >> num;
    std::cout << std::endl;
    std::cout << "Введите знаменатель" << std::endl;
    std::cin >> denom;
    std::cout << "Введите десятичную дробь" << std::endl;
    std::cin >> n;

    Fraction fract(num, denom);
    fract.Print();

    Fraction fract1(n, pointer_temp);
    fract1.PrintD(n, pointer_temp);

    return 0;
}