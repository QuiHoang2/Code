#include <iostream>
#include <cmath>

int main()
{
    int h1, m1, s1, h2, m2, s2{};
    std::cout << "Thoi diem T1 (h m s) = ";
    std::cin >> h1 >> m1 >> s1;
    std::cout << "Thoi diem T2 (h m s) = ";
    std::cin >> h2 >> m2 >> s2;
    std::cout << "Khoang cach = " << abs((h2 - h1) * 3600 + (m2 - m1) * 60 + s2 - s1); 
    return 0;
}