#include <cstring>
#include <iostream>

void output85(char str[], char c[]);
void clear(char str[]);

void clear(char str[])
{
    for(int i = 0; str[i]; ++i)
    {
        str[i] = '\0';
    }
}

void output85(char str[], char d[])
{
    int i, j {};
    char c[]{d[0]};
    char ketqua[101] {};
    char cnull[] {'\0'};
    size_t len = std::strlen(str);
    while(i < len)
    {
        j = std::strcspn(str + i, c);
        clear(ketqua);
        std::strncpy(ketqua, str + i, j);
        std::cout << '\"' << ketqua << "\"\n";
        i += j + strspn(str + i + j, c);
    }
}