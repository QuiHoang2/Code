#include "hs.h"
#include <iostream>

int main(void)
{
    hocsinh hs[100] {};
    int size {};
    std::cout << "Nhap N = ";
    std::cin >> size;
    input92(hs, size);
    dtb(hs, size);
    sort(hs, size);
    output91(hs, size);
    return 0;
}