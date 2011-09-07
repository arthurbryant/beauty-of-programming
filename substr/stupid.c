#include <stdio.h>
#include <string.h>

bool comp(char src[], char des[])
{
    int i, j;
    int tmp;
    int len = strlen(src);
    for(i = 0; i < len; ++i)
    {
        tmp = src[0];
        if(strstr(src, des) != NULL)
        {

            printf("true\n");
            return true;
        }
        for(j = 0; j < len-1; ++j)
            src[j] = src[j+1];
        src[len-1] = tmp;
    }
            printf("false\n");
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
