#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int a, b, c, gcd, lcm;
    char line [101];
    do {
        cout << "Nhap 2 so nguyen duong a, b = ";
        cin.getline(line, 100);
    } while(!(stringstream(line) >> a >> b) || (a <=0) || (b <=0));

    lcm = a * b;

    if (b > a)
    {
        c = a;
        a = b;
        b = c;
    }

    while(a % b != 0)
    {
        c = a;
        a = b;
        b = c % b;
    }
    gcd = b;
    lcm = lcm / gcd;

    cout << "UCLN = " << gcd;
    cout << "\nBCNN = " << lcm;

    return 0;
}