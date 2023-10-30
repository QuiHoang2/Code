#include <iostream>

void check63(int a, int b, int c)
{
    if((a + b > c) && (b + c > a) && (c + a > b))
    {
        std::cout << "Lap thanh tam giac.\nLoai tam giac la ";
        bool vuong = false;
        bool can = false;

        if ((a == b) && (a == c) && (b == c))
            std::cout << "deu.\n";
        else
        {
            if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (c * c + b * b == a * a))
                vuong = true;
            if ((a == b) || (b == c) || (a == c))
                can = true;
            if (vuong && can)
                std::cout << "vuong can.\n";
            else if (vuong)
                std::cout << "vuong.\n";
            else if (can)
                std::cout << "can.\n";
            else
                std::cout << "thuong.\n";
        }
    }
    else
        std::cout << "Khong lap thanh tam giac!\n";
}