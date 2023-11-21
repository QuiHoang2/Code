#include "io82.h"
#include "process82.h"

int main(void)
{
    char s1[101] {}, s2[101] {}, ketqua[200] {};
    nhapChuoi82(s1, s2);
    kiemDuyet(s1, s2 , ketqua);
    xuatChuoi82(ketqua);
    return 0;
}