#include "time94.h"
#include <iostream>

int main(void)
{
    time94 ng[100];
    int size {};
    std::cout << "Nhap N = ";
    std::cin >> size;

    nhapDanhSachNgay(ng, size);
    sortNgay(ng, size);
    inDanhSachNgay(ng, size);
    ngayHomQua(ng[0]);
    ngayMai(ng[size - 1]);

    return 0;
}