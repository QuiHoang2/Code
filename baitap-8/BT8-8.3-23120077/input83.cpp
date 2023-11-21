#include <iostream>

void nhapChuoi83(char str[]);

void nhapChuoi83(char str[])
{
    std::cout << "Nhap chuoi = ";
    std::cin.getline(str, 100);
}
