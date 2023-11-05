#include <iostream>
void check74(int arr2D[][100], int row, int col);

void check74(int arr2D[][100], int row, int col)
{
    int sumHang {}, sumCot{}, dem{};
    for (int i = 0; i < row; ++i)
    {   
        for (int j = 0; j < row; ++j)
        {
            sumHang = sumCot = 0;
            for (int m = 0; m < col; ++m)
            {
                if (m == j)
                    continue;
                sumHang += arr2D[i][m];
            }
            for (int n = 0; n < row; ++n)
            {
                if (n == i)
                    continue;
                sumCot += arr2D[n][j];
            }

            if (arr2D[i][j] == sumHang + sumCot)
            {
                ++dem;
                std::cout << "Hang " << i << " cot " << j << " : " << arr2D[i][j] << std::endl;
            }
        }
    }
    if (dem == 0)
        std::cout << "Khong co phan tu nao thoa man.\n";
}