#include <iostream>

int main()
{
    std::cout << "So xe = ";
    int number, nut {};
    std::cin >> number;
    nut = (number % 10 + (number/10) % 10 + (number/100) % 10 + (number/1000)) % 10;
    std::cout << "So nut = " << nut;
    return 0;
}