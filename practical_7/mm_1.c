#include <stdio.h>
#include <stdlib.h>

int* allocatearray(int n)
{
	return (int *)malloc(n * sizeof(int));
}

void fillwithones(int* a, int n)
{
	int i;
	for ( i = 0; i < n; i++ )
	{
		a[i] = 1;
	}
}

void printarray(int* a, int n)
{
        int i;
        for ( i = 0; i < n; i++ )
        {
		printf("%d\n", a[i]);
        }
}

void free_pointer(int* p)
{
	free(p);
}

int main(void)
{
	int n = 5;

	int *a = malloc(5*sizeof(int));
	if (a == NULL)
	{
		exit(1);
	}

	a[0] =1;
	a[1] = 51;

	printf("a[1] is %d\n", a[1]);
	printf("*(a+1) is %d\n", *(a+1));
	printf("1[a] is %d\n", 1[a]);

	return 0;
}
