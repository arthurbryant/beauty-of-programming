#include <stdio.h>

void insert(int arr[], int N, int m)
{
   if(arr[0] > m)
   {
        
   }
   else
   {

   }
}

void buildHeap(int arr[], int N)
{
   int i;
   for(i = 0; i < N; ++i)
   {
       insert(arr, i+1, arr[i+1]);
   }
}

int main()
{

    return 0;
}
