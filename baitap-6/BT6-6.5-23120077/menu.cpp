#include <iostream>
#include <sstream>

short menu()
{
    char line[101];
    int choice {};
    for (int i = 1; i < 5; ++i)
        std::cout << i << ". Bai tap 6." << i << ".\n";
    std::cout << "5. Thoat.\n";
    std::cout << "Lua chon cua ban (1-5): ";

    std::cin.getline(line, 100);
    std::stringstream(line) >> choice;
    
    return choice;
}