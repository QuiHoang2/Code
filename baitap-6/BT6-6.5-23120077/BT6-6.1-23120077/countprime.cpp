#include <iostream>

void countprime(int n)
{
    int count {};
    if (n >= 2)
    {
        std::cout << "#1 = 2\n";
        ++count;
    }

    for (int i = 3; i <= n; i += 2)
    {
        bool isPrime = true;
        for (int j = 3; j * j <= i; ++j)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            ++count;
            std::cout << "#" << count << " = " << i << std::endl;
        }
    }

    std::cout << "Co tat ca " << count << " so nguyen to.\n";
}