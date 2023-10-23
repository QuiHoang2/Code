#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    char line [101];
    int n, i, max, min;
    i = 1;
    max = min = 0;
    do {
        cout << "So thu " << i << " = ";
        cin.getline(line, 100);
        if ((stringstream(line) >> n) && (n > 0)) 
            {
                if (i == 1)
                    max = min = n;

                if (n > max)
                    max = n;
                else 
                    min = n;
                ++i;    
            }
    } while ((n != 0 ) || !(stringstream(line) >> n));
    
    cout << "So lon nhat = " << max;
    cout << "\nSo nho nhat = " << min;

    return 0;
}