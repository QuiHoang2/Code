#include <iostream>
#include <sstream>

int input64()
{
    char line[101];
    int a {}, b {};

    do
    {
        std::cout << "Nhap so dien cu va so dien moi (kWh) ";
        std::cin.getline(line, 100);
        
    } while(!((std::stringstream(line) >> a >> b) && (a >= 0) && (b >= a)));

    return (b - a);

}