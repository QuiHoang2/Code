#include "io84.h"
#include "process84.h"

int main(void)
{
    char str[101] {}, ketqua[101] {};
    input84(str);
    process84(str, ketqua);
    output84(ketqua);
    return 0;
}