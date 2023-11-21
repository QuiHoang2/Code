#ifndef TAMGIAC_H
#define TAMGIAC_H

struct diem
{
    float x{};
    float y{};
};

struct tamgiac
{
    diem a;
    diem b;
    diem c;
    diem dinh[3] {a, b, c};
};

void nhapDiem(diem &p);
void nhapDinhTamGiac(tamgiac &tg);
void tinhCanhTamGiac(tamgiac &tg);
void tinhTrongTam(tamgiac tg);

#endif