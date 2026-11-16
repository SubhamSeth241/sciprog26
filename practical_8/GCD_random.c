#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GCD_iterative(int a, int b)
{
	int temp;

	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}

	return a;
}


int GCD_recursive(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return GCD_recursive(b, a % b);
	}
}


int main(void)
{
	int rand_upper=100;
	int rand_lower=1;

	srand(time(NULL));

	int a = rand() % (rand_upper-rand_lower) + rand_lower;
	int b = rand() % (rand_upper-rand_lower) + rand_lower;

	printf("a is %d and b is %d.\n", a, b);

	int gcd_iterative_result = GCD_iterative(a, b);
	int gcd_recursive_result = GCD_recursive(a, b);

	printf("GCD of two integers %d and %d by iterative function using pseudo code is: %d\n", a, b, gcd_iterative_result);
	printf("GCD of two integers %d and %d by recursive function using formula is: %d\n", a, b, gcd_recursive_result);


	FILE* fp;
	fp = fopen("GCD_random.txt", "w");
	fprintf(fp, "a is %d and b is %d.\n", a, b);
	fprintf(fp, "GCD of two integers %d and %d by iterative function using pseudo code is: %d\n", a, b, gcd_iterative_result);
	fprintf(fp, "GCD of two integers %d and %d by recursive function using formula is: %d\n", a, b, gcd_recursive_result);
	return 0;
}
