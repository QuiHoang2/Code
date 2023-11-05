#include "io72.h"
#include "check72.h"

int main(void)
{
    int size {}, arr[100] {};
    bool tang {}, doixung {}, cong {};

    size = inputInteger();
    inputArray(arr, size);

    tang = ktTang(arr, size);
    doixung = ktDoiXung(arr, size);
    cong = ktCapSoCong(arr, size);

    output72(tang, doixung, cong);
    
    return 0;
}