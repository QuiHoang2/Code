#include "phanso.h"
#include <iostream>
#include <cmath>

void input91(phanso &ps)
{
    std::cout << "Nhap tu = ";
    std::cin >> ps.tu;
    std::cout << "Nhap mau = ";
    std::cin >> ps.mau;
}

void output91(phanso ps)
{
    std::cout << ps.tu << "/" << ps.mau;
}

int gcd(int a, int b)
{
    a = abs(a);
    b = abs(b);

    int temp {};
    while(a % b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    return b;
}

void rutgonps(phanso &ps)
{
    int g = gcd(ps.tu, ps.mau);
    ps.tu /= g;
    ps.mau /= g;
}