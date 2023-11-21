#include <iostream>

void input85(char str[], char c[]);

void input85(char str[], char c[])
{
    std::cout << "Nhap chuoi = ";
    std::cin.getline(str, 100);
    std::cout << "Nhap ky tu = ";
    std::cin >> c;
}

