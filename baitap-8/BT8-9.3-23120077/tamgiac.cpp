#include <iostream>
#include <cmath>
#include "tamgiac.h"

void nhapDiem(diem &p)
{
    std::cin >> p.x >> p.y;
}

void nhapDinhTamGiac(tamgiac &tg)
{
    for(int i = 0; i < 3; ++i)
    {
        std::cout << "Nhap dinh thu " << i + 1 << " : ";
        nhapDiem(tg.dinh[i]);
    }
}

void tinhCanhTamGiac(tamgiac &tg)
{
    float x {}, y {};

    for(int i = 0; i < 2; ++i)
    {
        std::cout << "Do dai canh thu " << i + 1 << ": ";
        x = tg.dinh[i].x - tg.dinh[i + 1].x;
        y = tg.dinh[i].y - tg.dinh[i + 1].y;

        std::cout << sqrt(x * x + y * y) << std::endl;
    }
    std::cout << "Do dai canh thu " << 3 << ": ";
    x = tg.dinh[2].x - tg.dinh[0].x;
    y = tg.dinh[2].y - tg.dinh[0].y;
    std::cout << sqrt(x * x + y * y) << std::endl;
}

void tinhTrongTam(tamgiac tg)
{
    float x {}, y {};
    for(int i = 0; i < 3; ++i)
    {
        x += tg.dinh[i].x;
        y += tg.dinh[i].y;
    }
    std::cout << "Toa do trong tam giac la (" << x/3 << ", " << y / 3 << ")\n";
}
