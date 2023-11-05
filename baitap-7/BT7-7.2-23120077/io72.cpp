#include <iostream>

int inputInteger(void);
void inputArray(int arr[], int size);
void output72(bool tang, bool doixung, bool cong);

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

void output72(bool tang, bool doixung, bool cong)
{
    if (tang)
        std::cout << "Mang tang dan.\n";
    else
        std::cout << "Mang khong tang dan.\n";

    if (doixung)
        std::cout << "Mang doi xung.\n";
    else
        std::cout << "Mang khong doi xung.\n";

    if (cong)
        std::cout << "Mang lap thanh cap so cong.\n";
    else 
        std::cout << "Mang khong lap thanh cap so cong.\n";
}   