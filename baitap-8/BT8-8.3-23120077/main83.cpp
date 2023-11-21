#include "input83.h"
#include "output83.h"

int main(void)
{
    char ascii[256] {}, str[101]{};
    int f[256] {};
    nhapChuoi83(str);
    process83(str, ascii, f);
    output83(ascii, f);

    return 0;
}