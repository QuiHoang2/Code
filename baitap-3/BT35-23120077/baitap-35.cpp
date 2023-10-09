#include <iostream>
#include <cmath>

int main()
{
    float p, q, x{};
    std::cout << "Nhap p, q = ";
    std::cin >> p >> q;
    x = cbrt(sqrt(pow(p * p / 3, 3) + pow(q / 2, 2)) - q / 2) - cbrt(sqrt(pow(p * p / 3, 3) + pow(q / 2, 2)) + q / 2);
    std::cout << "Nghiem x = " << x;
    return 0;
}