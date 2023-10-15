#include <iostream>

int main() 
{
    std::cout << "Nhap thang va nam = ";
    int day, month, year {};
    std::cin >> month >> year;
    short isLeapYear = 1;
    if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0))
        isLeapYear = 0;
    switch (month)
    {
    case 2:
        day = 28 + isLeapYear;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        day = 30;
        break;
    default:
        day = 31;
        break;
    }
    std::cout << "Thang " << month << " nam " << year << " co " << day << " ngay.";
    return 0;
}