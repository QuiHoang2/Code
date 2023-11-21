#include "hs.h"
#include <iostream>

void input92(hocsinh hs[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Nhap ho ten hoc sinh: ";
        std::cin >> hs[i].hoten;
        std::cout << "Nhap diem van: ";
        std::cin >> hs[i].diemvan;
        std::cout << "Nhap diem toan: ";
        std::cin >> hs[i].diemtoan;
    }
}

void dtb(hocsinh hs[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        hs[i].diemtrungbinh = (hs[i].diemvan + hs[i].diemtoan) / 2;
    }
}

void sort(hocsinh hs[], int size)
{
    float max {};
    hocsinh temp {};
    for (int i = 0; i < size; ++i)
    {
        max = hs[i].diemtrungbinh;
        for (int j = i + 1; j < size; ++j)
        {
            if (hs[j].diemtrungbinh > max)
            {
                temp = hs[j];
                hs[j] = hs[i];
                hs[i] = temp;
            }
        }
    }
}

void output91(hocsinh hs[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << hs[i].hoten << " diem trung binh la " << hs[i].diemtrungbinh << std::endl;
    }
}