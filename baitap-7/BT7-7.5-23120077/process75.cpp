void xoaytrai(int arr2D1[][100], int arr2D2[][100], int row1, int col1, int &row2, int &col2);
void xoayphai(int arr2D1[][100], int arr2D2[][100], int row1, int col1, int &row2, int &col2);

void xoaytrai(int arr2D1[][100], int arr2D2[][100], int row1, int col1, int &row2, int &col2)
{
    for(int i = 0; i < col1; ++i)
    {
        for (int j = 0; j < row1; ++j)
        {
            arr2D2[i][j] = arr2D1[j][col1 - 1 - i];
        }
    }
    row2 = col1;
    col2 = row1;
}

void xoayphai(int arr2D1[][100], int arr2D2[][100], int row1, int col1, int &row2, int &col2)
{
    for(int i = 0; i < col1; ++i)
    {
        for (int j = 0; j < row1; ++j)
        {
            arr2D2[i][j] = arr2D1[row1 - 1 - j][i];
        }
    }
    row2 = col1;
    col2 = row1;
}