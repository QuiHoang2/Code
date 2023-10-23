#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    char line [101];
    int n, nR, lastDigit, copy;
    do {
        cout << "Nhap vao so nguyen duong N = ";
        cin.getline(line, 100);
    } while (!(stringstream(line) >> n) || (n <= 0));

    copy = n;

    lastDigit = copy % 10;
    copy = copy / 10;

    bool laSoGiamDan = 1;

    while(copy > 0)
    {
        if (copy % 10 < lastDigit)
        {
            lastDigit = copy % 10;
            copy = copy / 10;
        } else 
        {
            laSoGiamDan = 0;
            break;
        }
    }
    if(laSoGiamDan)
        cout << "Cac chu so giam dan tu hang don vi.\n";
    else
        cout << "Cac chu so khong giam dan tu hang don vi.\n";

    copy = n;
    nR = 0;

    while(copy > 0)
    {
        lastDigit = copy % 10;
        copy = copy / 10;
        nR = nR * 10 + lastDigit;
    }
    if (nR == n)
        cout << "Cac chu so doi xung.";
    else
        cout << "Cac chu so khong doi xung.";

    return 0;
}