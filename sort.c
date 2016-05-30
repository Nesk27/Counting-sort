#include "sort.h"

void swap(int *x, int *y)
{
	int temp;
	temp = *x;  
	*x = *y;    
	*y = temp;  
}


void cs(int *array, int n, int min, int max)
{
	int i, j, z = 0;
	int range = max - min + 1;
	int *count = malloc(range * sizeof(*array));
	for(i = 0; i < range; i++)
	{ 
	count[i] = 0;
	}
	for(i = 0; i < n; i++)
	{ 
	count[ array[i] - min ]++;
	}
	for(i = min; i <= max; i++) 
	{
		for(j = 0; j < count[i - min]; j++) 
		{
		array[z] = i;
		z++;		
		}
	}  
	free(count);
}
