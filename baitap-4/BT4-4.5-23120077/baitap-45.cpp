#include <iostream>

int main() 
{
    int count{};
    for (int i = 100; i < 1000; i++)
    {
        if ((i / 100 + i % 10) == (i / 10 % 10)) 
        {
            std::cout << i << std::endl;
            ++count;
        }    
    }
    std::cout << "Co tat ca " << count << " so thoa tinh chat.";
    return 0;
}