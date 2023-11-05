int tinhCheoChinh(int arr2D[][100], int size);
int tinhCheoPhu(int arr2D[][100], int size);
bool ktMaPhuong(int arr2D[][100], int size);
bool ktPhanTu(int arr2D[][100], int size);
bool ktHang(int arr2D[][100], int size);
bool ktCot(int arr2D[][100], int size);

int tinhCheoChinh(int arr2D[][100], int size)
{
    int sum {};
    for (int i = 0; i < size; ++i)
    {
        sum += arr2D[i][i];
    }
    return sum;
}

int tinhCheoPhu(int arr2D[][100], int size)
{
    int sum {};
    for (int i = 0; i < size; ++i)
    {
        sum += arr2D[i][size - 1 - i];
    }
    return sum;
}

bool ktPhanTu(int arr2D[][100], int size)
{
    int dem {};
    int arr[10000];
    for (int i = 0; i < size * size; ++i)
        arr[i] = i + 1;
    for (int row = 0; row < size; ++row)
    {
        for (int col = 0; col < size; ++col)
        {
            if (arr2D[row][col] != 0)
            {
                for (int i = 0; i < size * size; ++i)
                {
                    if (arr2D[row][col] == arr[i])
                    {
                        ++dem; 
                        arr[i] = 0;
                    }
                }
            }
        }
    }
    
    if (dem == size * size)
        return true;
    else 
        return false;
}

bool ktHang(int arr2D[][100], int size)
{
    int sum {}, test{};
    for (int col = 0; col < size; ++col)
    {
        test += arr2D[0][col];
    }

    for(int row = 1; row < size; ++row)
    {
        sum = 0;
        for (int col = 0; col < size; ++col)
            sum += arr2D[row][col];
        if (sum != test)
            return false;
    }
    return true;
}

bool ktCot(int arr2D[][100], int size)
{
    int sum {}, test{};
    for (int row = 0; row < size; ++row)
    {
        test += arr2D[row][0];
    }

    for(int col = 1; col < size; ++col)
    {
        sum = 0;
        for (int row = 0; row < size; ++row)
            sum += arr2D[row][col];
        if (sum != test)
            return false;
    }
    return true;
}

bool ktMaPhuong (int arr2D[][100], int size)
{
    if (ktHang(arr2D, size) && (ktCot(arr2D, size)) && (ktPhanTu(arr2D, size) && (tinhCheoChinh(arr2D, size) == tinhCheoPhu(arr2D, size))))
        return true;
    else
        return false;
}