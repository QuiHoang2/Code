#include <iostream>

int main() 
{
    std::cout << "Nhap a, b = ";
    int a, b {};
    std::cin >> a >> b;
    std::cout << "Nhap phep tinh (+, -, *, /, %) = ";
    char c {};
    std::cin >> c;
    
    float ketqua {};

    if (b == 0 && (c == '/' || c == '%'))
    {
        std::cout << "Loi chia 0!";
    } else
    {
        switch (c)
        {
        case '+':
            ketqua = a + b;
            break;
        case '-':
            ketqua = a - b;
            break;
        case '*':
            ketqua = a * b;
            break;
        case '/':
            ketqua = a * 1.0 / b;
            break;
        case '%':
            ketqua = a % b;
            break;
        }
        std::cout << "Ket qua = " << ketqua;
    }
    return 0;
}