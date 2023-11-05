#include <iostream>

void inputmn(int &row, int &col);
void inputArray2D(int arr2D[][100], int row, int col);

void inputmn(int &row, int &col)
{
    std::cout << "Nhap so hang va so cot = ";
    std::cin >> row >> col;
}

void inputArray2D(int arr2D[][100], int row, int col)
{
    std::cout << "Nhap vao ma tran " << row << "x" << col << std::endl;
    for (int i = 0; i < row; ++i)
    {
        std::cout << "Nhap phan tu hang " << i << " = ";
        for (int j = 0; j < col; ++j)
        {
            std::cin >> arr2D[i][j];
        }     
    }
}