#include "io71.h"
#include "count71.h"

int main(void)
{
    int soAm, soNguyenTo {};
    int size {}, arr[100] {};
    size = inputInteger();
    inputArray(arr, size);
    soAm = demSoAm(arr, size);
    soNguyenTo = demSoNguyenTo(arr, size);
    output71(soAm, soNguyenTo);
    return 0;
}