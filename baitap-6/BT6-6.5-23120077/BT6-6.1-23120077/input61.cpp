#include <iostream>
#include <sstream>

int input61()
{
    int n;
    char line[101];

    do
    {
        std::cout << "Nhap N = ";
        std::cin.getline(line, 100);
        
    } while (!((std::stringstream(line) >> n) && (n > 0)));

    return n;
}