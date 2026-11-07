#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 5;
/*
	int *a = (int *) calloc(n, sizeof(int));*/ /*this do basically what the malloc and for loop did below, everything set to be 0*/
/*
	if (a == NULL)
	{
		exit(1);
	}
*/
	int *a = malloc(n * sizeof(int)); /*standard one*/
	if (a == NULL)
	{
		exit(1);
	}

	int i;
	for (i = 0; i < n; i++)
	{
		a[i] = i;
	}

	a = (int *)realloc(a, 6 * sizeof(int)); /*copy everything in the array to new piece of memory allocated position give more space*/
	printf("%d\n", a[5]);


	free(a);
	a = NULL;

	a[0] =1;
	a[1] = 51;

	printf("a[1] is %d\n", a[1]);
	printf("*(a+1) is %d\n", *(a+1));
	printf("1[a] is %d\n", 1[a]);

	return 0;
}
