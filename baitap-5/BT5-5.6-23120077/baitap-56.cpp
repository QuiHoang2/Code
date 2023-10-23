#include <iostream>

using namespace std;

int main()
{
    int N, M, bit;
    
    cout << "Nhap N, M = ";
    cin >> N >> M;

    bit = 1 << (M - 1);

    cout << M << " bit dau tien cua " << N << ": ";
    for(int i = 0; i < M; ++i)
    {
        cout << (N & bit) / bit;
        bit = bit >> 1;
    }
    
    return 0;
}