#include <cstring>

void kiemDuyet(char s1[], char s2[], char ketqua[]);

void kiemDuyet(char s1[], char s2[], char ketqua[])
{
    char sharp[] {"###"};
    size_t len1 {std::strlen(s1)}, len2 {std::strlen(s2)};
    
    for(int len = 0; s1[len]; ++len)
    {
        if ((s1[len] == s2[0]) && (std::strncmp(s1 + len, s2, len2) == 0))
        {
            std::strcat(ketqua, sharp);
            len += len2 - 1;
        }
        else
        {
            std::strncat(ketqua, s1 + len, 1);
        } 
    }
}