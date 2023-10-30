#include "./BT6-6.1-23120077/baitap61.h"
#include "./BT6-6.2-23120077/baitap62.h"
#include "./BT6-6.3-23120077/baitap63.h"
#include "./BT6-6.4-23120077/baitap64.h"
#include "baitap65.h"

int main()
{
    do
    {
        float x {}, y {};
        float a {}, b {}, c{};
        char o {};
        int choice = menu();

        switch (choice)
        {
            case 1:
                countprime(input61());
                break;
            
            case 2:

                input62(x, y, o);
                calculate(x, y, o);
                break;

            case 3:
                input63(a, b, c);
                check63(a, b, c);
                break;
            
            case 4:
                money(input64());
                break;

            case 5:
                return 0;
        }

    } while (true);
}