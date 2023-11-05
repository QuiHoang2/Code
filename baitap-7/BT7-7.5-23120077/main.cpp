#include <iostream>
#include "io75.h"
#include "process75.h"

int main(void)
{
    int row {}, col {}, rowLeft {}, colLeft {}, rowRight {}, colRight {};
    int arr2D[100][100] {}, arr2DLeft[100][100] {}, arr2DRight[100][100] {};

    inputmn(row, col);
    inputArray2D(arr2D, row, col);

    xoaytrai(arr2D, arr2DLeft, row, col, rowLeft, colLeft);
    xoayphai(arr2D, arr2DRight, row, col, rowRight, colRight);
    std::cout << "Xoay trai 90 do: \n";
    printArray2D(arr2DLeft, rowLeft, colLeft);
    std::cout << "Xoay phai 90 do: \n";
    printArray2D(arr2DRight, rowRight, colRight);

    return 0;
}