#include <iostream>
#include <cmath>

int main()
{
    float a, b, c, delta{};
    std::cout << "Nhap he so a, b, c = ";
    std::cin >> a >> b >> c;
    delta = b * b - 4 * a * c;
    if (delta < 0)
        std::cout << "Phuong trinh vo nghiem!";
    else if (delta == 0)
        std::cout << "Nghiem kep = " << (-b + sqrt(delta)) / (2 * a);
    else if (delta > 0)
    {
        std::cout << "Nghiem 1 = " << (-b - sqrt(delta)) / (2 * a) << std::endl;
        std::cout << "Nghiem 2 = " << (-b + sqrt(delta)) / (2 * a);
    }
    return 0;
}