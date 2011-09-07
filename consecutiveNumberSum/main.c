#include <stdio.h>

void find(int N)
{
    int i, j, k;
    int sum = 0;
    for(i = 1; i < N; ++i)
    {
        sum = i;
        for(j = i+1; j <= ( N/(j-i+1)+(j-i+1)/2+1 ); ++j)
        {
            sum += j;
            if(sum == N)
            {
                for(k = i; k < j; ++k) 
                    printf("%d+", k);
                printf("%d=%d\n", j, N);
                }
            }
        }
    }
int main(int argc, char * argv[])
{
    int N;
    scanf("%d", &N);
    find(N);
    
    return 0;
}
