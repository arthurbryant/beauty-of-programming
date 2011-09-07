#include <stdio.h>

void printStation(int arr[2][5], int l, int n)
{
   if(n-1 < 0)
   {
       printf("%d line in station %d\n", l, n);
       return;
   }
   printf("arr[%d][%d]=\n", l, n);
   printStation(arr, arr[l][n-1], n-1);
   printf("%d line in station %d\n", l, n);
    }

int main(int argc, char * argv[])
{
    int arr[2][5] = {0,1,0,0,1, 0,1,0,1,1};
    printStation(arr, 0, 5);
    
    return 0;
}
