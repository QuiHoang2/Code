#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main() 
{
    char line [101];
    int thu, ngay, thang, nam;
    do {
        cout << "Muon xem lich thang va nam nao? ";
        cin.getline(line, 100);
    } while(!(stringstream(line) >> thang >> nam) || (thang < 1) || (thang > 12) || (nam <= 0));
    cout << "Ngay dau thang la thu may? ";
    cin.getline(line, 100);
    if((stringstream(line) >> thu))
        thu = thu - 1;
    else
        thu = 7;

    short laNamNhuan = 1;
    if ((nam % 4 != 0) || ((nam % 100 == 0) && (nam % 400 != 0)))
        laNamNhuan = 0;
    switch (thang)
    {
        case 2:
            ngay = 28 + laNamNhuan;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            ngay = 30;
            break;
        default:
            ngay = 31;
            break;
    }

    cout << "Mon Tue Wed Thu Fri Sat Sun\n";
    for (int i = 1; i < thu; i++)
    {
        cout << "    ";
    }
    for (int i = 1; i <= ngay; ++i)
    {
        if(((i + thu -2) % 7) == 0 && ((i + thu -2) > 0))
            cout << endl;
        cout << setw(3) << i << " ";
    }

    return 0;
}