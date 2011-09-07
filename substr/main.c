#include <stdio.h>
#include <string.h>

bool comp(char src[], char des[])
{
    int len = strlen(src);
    char s[2 * len];

    strcpy(s, src);
    strcat(s, src);
    printf("%s\n", s);
    if(strstr(s, des) != NULL)
        return true;

    return false;
    }
int main(int argc, char * argv[])
{
    char src[] = "aabbcd";
    char des[] = "cdaa";
    bool b;
    
    b = comp(src, des);
    printf("%d\n", b);
    
    return 0;
}
