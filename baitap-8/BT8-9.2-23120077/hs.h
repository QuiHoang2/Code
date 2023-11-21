#ifndef HS_H
#define HS_H

struct hocsinh
{
    char hoten[51];
    char ngaysinh[11];
    int gioitinh;
    float diemvan;
    float diemtoan;
    float diemtrungbinh;
};

void dtb(hocsinh hs[], int size);
void input92(hocsinh hs[], int size);
void sort(hocsinh hs[], int size);
void output91(hocsinh hs[], int size);

#endif
