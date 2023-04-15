#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    std::cout<<"Введите размер вклада: ";
    int deposit;
    std::cin>>deposit;

    std::cout<<"Введите процентную ставку (%): ";
    int percent;
    std::cin>>percent;

    std::cout<<"Введите желаемую сумму: ";
    int wishSum;
    std::cin>>wishSum;

    int years=0;

    std::string info="Неверные данные";

    bool check=(wishSum>deposit) && (percent>0) && (wishSum>0) && (deposit>0);

    while (check) {
        deposit += deposit * percent / 100;
        check = wishSum>deposit;
        ++years;
        info="Придется подождать "+std::to_string(years)+" лет";
    }

    std::cout<<info;

}
