#include <iostream>

int main() 
{
    std::cout << "Nhap vao so nguyen duong N = ";
    int n {};
    unsigned long n_factorial {1};
    double pi {1};
    double ln2, S {};
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        n_factorial = n_factorial * i;
        ln2 += (1.0 / i) * ((i % 2) * 2 - 1);
        pi += (1.0 / (2 * i + 1)) * ((i % 2) * 2 - 1) * (-1);
        if (i * i <= n) S += i * i;
    }
    std::cout << "N! = " << n_factorial;
    std::cout << "\nln(2) = " << ln2;
    std::cout << "\nPI = " << 4 * pi;
    std::cout << "\nS = " << S;

    return 0;
}