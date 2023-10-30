#include <iostream>
#include <sstream>

void input63(float &a, float &b, float &c)
{
    char line[101];

    do 
    {
        std::cout << "Nhap a, b, c = ";
        std::cin.getline(line, 100);
        
    } while(!((std::stringstream(line) >> a >> b >> c) && (a > 0) && (b > 0) && (c > 0)));  
}