#include "time94.h"
#include <iostream>

void nhapNgay(time94 &ng)
{
    std::cout << "Nhap ngay thang nam: ";
    std::cin >> ng.ngay >> ng.thang >> ng.nam;
}

void inNgay(time94 ng)
{
    std::cout << "Ngay " << ng.ngay << " thang " << ng.thang << " nam " << ng.nam << std::endl;
}

void inDanhSachNgay(time94 ng[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        inNgay(ng[i]);
    }
}

void nhapDanhSachNgay(time94 ng[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        nhapNgay(ng[i]);
    }
}

bool ssngay(time94 ng1, time94 ng2)
{
    if (ng1.nam > ng2.nam)
        return true;
    else if(ng1.nam < ng2.nam)
        return false;
    else
    {
        if (ng1.thang > ng2.thang)
            return true;
        else if(ng1.thang < ng2.thang)
            return false;
        else
        {
            if (ng1.ngay > ng2.ngay)
                return true;
            else
                return false;
        }
    }
}

void sortNgay(time94 ng[], int size)
{
    time94 temp {};
    for (int i = 0; i < size; ++i)
    {
        for (int j = i + 1; j < size; ++j)
        {
            if (!(ssngay(ng[j], ng[i])))
            {
                temp = ng[j];
                ng[j] = ng[i];
                ng[i] = temp;
            }
        }
    }
}

bool namNhuan(int nam)
{
    if ((nam % 4 != 0) || ((nam % 100 == 0) && (nam % 400 != 0)))
        return false;
    return true;
}

void ngayHomQua(time94 ng)
{
    short ngay {}, thang {}, nam {};
    int ngayTrongThang[] = {0 , 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (ng.nam)
        ngayTrongThang[2] += 1;

    if (ng.ngay == 1)
    {
        if(ng.thang == 1)
        {
            ngay = 31;
            thang = 12;
            nam = ng.nam - 1;
        }
        else
        {
            thang = ng.thang - 1;
            ngay = ngayTrongThang[thang];
            nam = ng.nam;
        }
    }
    else
    {
        ngay = ng.ngay - 1;
        thang = ng.thang;
        nam = ng.nam;
    }

    std::cout << "Ngay hom qua ngay " << ng.ngay << " thang " << ng.thang << " nam " << ng.nam << 
        " la ngay " << ngay << " thang " << thang << " nam " << nam  << ".\n";
}

void ngayMai(time94 ng)
{
    short ngay {}, thang {}, nam {};
    int ngayTrongThang[] = {0 , 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (ng.nam)
        ngayTrongThang[2] += 1;
    
    if (ngay == ngayTrongThang[thang])
    {
        if (ng.thang == 12)
        {
            ngay = 1;
            thang = 1;
            nam = ng.nam + 1;
        }
        else
        {
            ngay = 1;
            thang = ng.thang + 1;
            nam = ng.nam;
        }
    }
    else
    {
        ngay = ng.ngay + 1;
        thang = ng.thang;
        nam = ng.nam;
    }
    std::cout << "Ngay mai ngay " << ng.ngay << " thang " << ng.thang << " nam " << ng.nam << 
        " la ngay " << ngay << " thang " << thang << " nam " << nam  << ".\n";

}

