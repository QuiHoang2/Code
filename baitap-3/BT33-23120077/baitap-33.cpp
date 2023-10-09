#include <iostream>

int main()
{
    std::cout << "Do C = ";
    float c, f, k {};
    std::cin >> c;
    f = c * 1.8  + 32;
    k = c + 273;
    std::cout << "Do F = " << f << std::endl;
    std::cout << "Do C = " << k;
    return 0;
}