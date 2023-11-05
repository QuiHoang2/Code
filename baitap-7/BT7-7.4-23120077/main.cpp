#include "input74.h"
#include "ouput74.h"

int main(void)
{
    int row {}, col {};
    int arr2D[100][100] {};

    inputmn(row, col);
    inputArray2D(arr2D, row, col);

    check74(arr2D, row, col);

    return 0;
}