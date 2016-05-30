#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include "sort.h"

int main()
{

int arr[] = {1, 2, 3, 4, 3, 2, 4, 5, 6, 75, 3, 2, 34, 5, 6, 7,3 ,43, 3,4};
int min = arr[0], max = arr[0];


for (int i = 1; i < 21; i++)
	{
 		if (min > arr[i])
		{   		
		min = arr[i];
		}
 		if (max < arr[i])
		{
   		max = arr[i];
		}
	}

cs(arr, 21, min, max);

return 0;

}
