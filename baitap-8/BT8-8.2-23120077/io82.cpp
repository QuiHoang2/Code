#include <iostream>

void nhapChuoi82(char s1[], char s2[]);
void xuatChuoi82(char str[]);

void nhapChuoi82(char s1[], char s2[])
{
    std::cout << "Nhap S = ";
    std::cin.getline(s1, 100);
    std::cout << "Nhap T = ";
    std::cin.getline(s2, 100);
}

void xuatChuoi82(char str[])
{
    std::cout << "Kiem duyet = ";
    std::cout << str;
}