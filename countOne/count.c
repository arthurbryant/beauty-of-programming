#include <stdio.h>

int count(int n)
{
    int sum = 0;

    while(n)
    {
        sum += (n & 0x1);
        n = n >> 1;
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
