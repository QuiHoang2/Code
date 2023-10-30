#include <iostream>

void money(int x)
{
    const long long money1 = 100 * 1549;
    const long long money2 = 50 * 1600;
    const long long money3 = 50 * 1858;
    const long long money4 = 100 * 2340;
    const long long money5 = 100 * 2615;

    int money {};
    if (x > 400)
        money = money1 + money2 + money3 + money4 + money5 + (x - 400) * 2701;
    else if (x > 300)
        money = money1 + money2 + money3 + money4 + (x - 300) * 2615;
    else if (x > 200)
        money = money1 + money2 + money3 + (x - 200) * 2340;
    else if (x > 150)
        money = money1 + money2 + (x - 150) * 1858;
    else if (x > 100)
        money = money1 + (x - 100) * 1600;
    else
        money = x * 1549;

    std::cout << "Tien dien la "  << money << std::endl;
}