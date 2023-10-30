#include <iostream>
#include <sstream>

void input62(float &x, float &y, char &o)
{
    char line[101];
    float a {}, b {}, c {}, d {};

    do
    {
        std::cout << "Phan so 1 (a/b) = ";
        std::cin.getline(line, 100);

    } while(!((std::stringstream(line) >> a >> b) && (b != 0)));

    do
    {
        std::cout << "Phan so 2 (c/d) = ";
        std::cin.getline(line, 100);
        
    } while(!((std::stringstream(line) >> c >> d) && (d != 0)));

    do 
    {
        std::cout << "Phep tinh (+, -, *, /) = ";
        std::cin.getline(line, 100);
        
    } while(!((std::stringstream(line) >> o) && ((o == '+') || (o == '-') || (o == '*') || (o == '/'))));

    x = a / b;
    y = c / d;
}