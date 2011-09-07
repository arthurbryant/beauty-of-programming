#include <stdio.h>

int
sum (int arr[], int n)
{
  int i, j;
  int result = -32768;
  int tmp;
  for (i = 0; i < n; ++i)
    {
      tmp = 0;
      for (j = i; j < n; ++j)
	{
	  tmp += arr[j];
	  if (tmp > result)
	    result = tmp;
	}
    }
  return result;
}

int
main (int argc, char *argv[])
{
    int arr[] = {2, -3, 4, 1, 7, -3, 9 };
    int arr1[] = {-9, -2, -5, -3};
    int arr2[] = {0, -2, 3, 5, -1, 2};
    int arr3[] = {1, -2, 3, 5, -3, 2};
    int length = sizeof(arr) / sizeof(int);
    printf("%d\n", sum(arr, sizeof(arr) / sizeof(int)));
    printf("%d\n", sum(arr1, sizeof(arr1) / sizeof(int)));
    printf("%d\n", sum(arr2, sizeof(arr2) / sizeof(int)));
    printf("%d\n", sum(arr3, sizeof(arr3) / sizeof(int)));
  
  return 0;
}
