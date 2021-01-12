#include <stdio.h>
#include <stdlib.h>

void main()
{
	int n, i, j, temp, min;
	int *ar = NULL;
	printf("How many numbers you want to input? : ");
	scanf("%d", &n);
	ar = (int *)malloc(n * sizeof(int));

	// Input Numbers
	printf("Please enter %d integers in random order :\n", n);
	for (i = 0 ; i < n ; i++)
		scanf("%d", &ar[i]);

	// Bubble Sort Algorithm
	for (i = 0 ; i < n ; ++i)
	{
		min = i;
		for (j = i + 1 ; j < n ; ++j)
		{
			if (ar[j] < ar[min])
				min = j;
		}
		if (min != i)
		{
			temp = ar[i];
			ar[i] = ar[min];
			ar[min] = temp;
		}
	}
	
	// Print the Sorted Array
	printf("Sorted list in Ascending Order : \n");
	for (i = 0; i < n ; i++)
		printf("%d\n", ar[i]);
}
