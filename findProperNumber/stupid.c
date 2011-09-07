#include <stdio.h>

int OneOrZero(int m)
{
	int i;

	while(m)
	{
		i = m % 10;
		if((0 != i) && (1 != i))
			return 1;
		m /= 10;
	}

	return 0;
}

int find(int n)
{
	int i, result; 
	for(i = 1; ; ++i)
	{
		result = n * i;
		if(!OneOrZero(result))
			break;
	}
	
	return result;
}

int main(int argc, char * argv[])
{
	int n; 
	scanf("%d", &n);
	printf("%d\n", find(n));
    
    return 0;
}
