#ifndef TIME94_H
#define TIME94_H

struct  time94
{
    short ngay {};
    short thang {};
    int nam {};
};

void nhapNgay(time94 &ng);
void nhapDanhSachNgay(time94 ng[], int size);
bool ssngay(time94 ng1, time94 ng2);
void sortNgay(time94 ng[], int size);
bool namNhuan(int nam);
void ngayHomQua(time94 ng);
void ngayMai(time94 ng);
void inNgay(time94 ng);
void inDanhSachNgay(time94 ng[], int size);

#endif