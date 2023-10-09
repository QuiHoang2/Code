#include <iostream>

int main()
{
    int money;
    std::cout << "So tien can doi = ";
    std::cin >> money;
    std::cout << "So to 20000: " << money / 20000;
    money = money % 20000;
    std::cout << "\nSo to 10000: " << money / 10000;
    money = money % 10000;
    std::cout << "\nSo to 5000: " << money / 5000;
    money = money % 5000;
    std::cout << "\nSo to 1000: " << money / 1000;
    money = money % 1000;
    std::cout << "\nSo tien du: " << money;
    return 0;
}