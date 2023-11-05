
int demSoAm(int arr[], int size);
int demSoNguyenTo(int arr[], int size);
bool kiemTraNguyenTo(int n);

int demSoAm(int arr[], int size)
{
    int count {};
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] < 0)
            ++count;
    }
    return count;
}

int demSoNguyenTo(int arr[], int size)
{
    int count {};
    for (int i = 0; i < size; ++i)
    {
        if (kiemTraNguyenTo(arr[i]))
            ++count;
    }
    return count;
}

bool kiemTraNguyenTo(int n)
{
    if (n < 2)
        return false;
    else
    {
        for(int i = 2; i * i <= n; ++i)
        {
            if (n % i == 0)
                return false;
        }
    }
    return true;
}