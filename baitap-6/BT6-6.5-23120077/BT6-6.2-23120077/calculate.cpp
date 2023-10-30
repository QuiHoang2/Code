#include <iostream>

void calculate(float x, float y, char o)
{
    float ans{};

    switch (o)
    {
        case '+':
            ans = x + y;
            break;
        
        case '-':
            ans = x - y;
            break;

        case '*':
            ans = x * y;
            break;

        case '/':
            if (y == 0)
            {
                std::cout << "Loi chia 0!" << std::endl;
                return;
            }
            else
            {
                ans = x / y;
                break;
        }
    }

    std::cout << "Ket qua = " << ans << std::endl;

}