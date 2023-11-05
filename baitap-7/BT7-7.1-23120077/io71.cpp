#include <iostream>

int inputInteger(void);
void inputArray(int arr[], int size);
void output71(int, int);

int inputInteger(void)
{
    int n {};
    std::cout << "Nhap N = ";
    std::cin >> n;
    return n;
}

void inputArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Phan tu " << i << " = ";
        std::cin >> arr[i];
    }
}

void output71(int x, int y)
{
    std::cout << "Co " << x << " so am.\n";
    std::cout << "Co " << y << " so nguyen to.\n";
}