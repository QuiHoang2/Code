bool ktTang(int arr[], int size);
bool ktDoiXung(int arr[], int size);
bool ktCapSoCong(int arr[], int size);

bool ktTang(int arr[], int size)
{
    for (int i = 1; i < size; ++i)
    {
        if (arr[i] <= arr[i - 1])
            return false;
    }
    return true;
}
bool ktDoiXung(int arr[], int size)
{
    for (int i = 0; 2 * (i + 1) < size; ++i)
    {
        if (arr[i] != arr[size - 1 - i])
            return false;
    }
    return true;
}

bool ktCapSoCong(int arr[], int size)
{
    int d = arr[1] - arr[0];
    for (int i = 2; i < size; ++i)
    {
        if (arr[i] - arr[i - 1] != d)
            return false;
    }
    return true;
}