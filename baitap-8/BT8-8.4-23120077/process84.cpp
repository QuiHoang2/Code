#include <cstring>
#include <cctype>

void process84(char str[], char ketqua[]);

void process84(char str[], char ketqua[])
{
    char space[] {' ', '\f', '\n', '\r', '\t', '\v'};
    int len {};
    char cach[] {" "};
    for(int i = 0; str[i]; ++i)
    {
        if(!(std::isspace(str[i])))
        {
            len = std::strcspn(str + i, space);
            std::strncat(ketqua, str + i, len);
            std::strcat(ketqua, cach);
            i += len - 1;
        }
    }
}