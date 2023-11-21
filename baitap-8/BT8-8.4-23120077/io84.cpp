#include <iostream>

void input84(char str[]);
void output84(char str[]);

void input84(char str[])
{
    std::cout << "Nhap chuoi = ";
    std::cin.getline(str, 100);
}

void output84(char str[])
{
    std::cout << '\"' << str << '\"';
}