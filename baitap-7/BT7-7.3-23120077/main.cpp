#include "io73.h"
#include "process73.h"

int main(void)
{
    int size {}, cheoChinh {}, cheoPhu {};
    int arr2D[100][100];
    bool maphuong {};

    size = inputInteger();
    inputArray2D(arr2D, size);

    cheoChinh = tinhCheoChinh(arr2D, size);
    cheoPhu = tinhCheoPhu(arr2D, size);
    maphuong = ktMaPhuong(arr2D, size);

    output73(cheoChinh, cheoPhu, maphuong);

    return 0;
}