#include <iostream>
#include <cctype>

int arrayfind(char c, char str[], int size);
int numberarrfind(int n, int arr[], int size);
int findmax(int arr[], int size);
void process83(char str[], char ascii[], int f[]);
void output83(char ascii[], int f[]);

int arrayfind(char c, char str[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        if (!(std::isspace(c)) && (c == str[i]))
            return i;
    }
    return -1;
}

void process83(char str[], char ascii[], int f[])
{
    int index {}, n {};

    for(int i = 0; str[i]; ++i)
    {
        index = arrayfind(str[i], ascii, 256);
        if(index >= 0)
        {
            f[index] += 1;
        }
        else if(!(std::isspace(str[i])))
        {
            ascii[n] = str[i];
            f[n] = 1;
            ++n;
        }
    }
}

int findmax(int arr[], int size)
{
    int max = 0;
    for(int i = 0; i < size; ++i)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int numberarrfind(int n, int arr[], int size)
{
    for(int i = 0; i < size; ++i)
    {
        if(arr[i] == n)
            return i;
    }
    return -1;
}

void output83(char ascii[], int f[])
{
    int max {};
    max = findmax(f, 256);
    for (int i = max; i > 0; --i)
    {
        if(numberarrfind(i, f, 256) >= 0)
        {
            std::cout << i << ": "; 
            for(int j = 0; j < 256; ++j)
            {
                if(f[j] == i)
                    std::cout << ascii[j] << " ";
            }
            std::cout << std::endl;
        }
    }
}