#include <stdio.h>

int count(int n)
{
    int sum = 0;

    while(n)
    {
        n &= n - 1;
        ++sum;
    }

    return sum;
}
int main(int argc, char * argv[])
{
    int n;
    scanf("%d", &n);
    printf("%d\n", count(n));

    return 0;
}
