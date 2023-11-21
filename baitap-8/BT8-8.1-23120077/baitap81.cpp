#include <sstream>

short strcmp2(char s1[], char s2[]);
bool strfind(char c, char str[]);
int strcspn2(char s1[], char s2[]);
float atof(char str[]);
short checkNumber(char c);


short strcmp2(char s1[], char s2[])
{
    for (int i = 0; s1[i] || s2[i]; ++i)
    {
        if(s1[i] < s2[i])
            return -1;
        if(s1[i] > s2[i])
            return 1;
    }
    return 0;
}


bool strfind(char c, char str[])
{
    for (int i = 0; str[i]; ++i)
    {
        if (c == str[i])
            return 1;
    }
    return 0;
}


int strcspn2(char s1[], char s2[])
{
    int len {};
    for(int i = 0; s1[i]; ++i)
    {
        len = i;
        if(strfind(s1[i], s2))
            break;
    }
    return len;
}


float atof(char str[])
{
    float number{};
    std::stringstream(str) >> number;
    return number;   
}

