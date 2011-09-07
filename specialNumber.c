#include <stdio.h>

void findTheNumber()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    int length = sizeof(arr) / sizeof(int);
    long i, j;
    for(i = 1; i < 9999999999; ++i)
    {
        int hit = 0;
        int hit1 = -1;
        int hit2 = -1;
        for(j = 0; (j < length) && (hit <= 2); ++j)
        {
            if(i % arr[j] != 0)
            {
                ++hit;
                if(1 == hit)
                    hit1 = j;
                else if(2 == hit)
                    hit2 = j;
                else
                    break;
                }
            }
        if((2 == hit) && (hit1 + 1 == hit2))
            printf("%d\n", i);
        }
    }
int main(int argc, char * argv[])
{
    findTheNumber();
    
    return 0;
}
