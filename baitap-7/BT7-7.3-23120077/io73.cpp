#include <iostream>

int inputInteger(void);
void inputArray2D(int arr2D[][100], int size);
void output73(int cheochinh, int cheophu, bool maphuong);

int inputInteger(void)
{
    int n {};
    std::cout << "Nhap N = ";
    std::cin >> n;
    return n;
}

void inputArray2D(int arr2D[][100], int size)
{
    std::cout << "Nhap ma tran vuong " << size << "x" << size << ":\n";
    for (int row = 0; row < size; ++row)
    {
        std::cout << "Phan tu cot " << row << " = ";
        for (int col = 0; col < size; ++col)
        {
            std::cin >> arr2D[row][col];
        }
    }
}

void output73(int cheochinh, int cheophu, bool maphuong)
{
    std::cout << "Tong cheo chinh = " << cheochinh << ".\n";
    std::cout << "Tong cheo phu = " << cheophu << ".\n";
    if (maphuong)
        std::cout << "Ma tran la ma phuong.\n";
    else
        std::cout << "Ma tran khong la ma phuong.\n";
}
