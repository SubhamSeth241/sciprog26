#include <stdio.h>
#include <stdlib.h>

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
	int a , b;
	printf("Please enter two integers for GCD: ");
	scanf("%d %d", &a, &b);

	if (a < 0)
	{
		a = -a;
	}
	if (b < 0)
	{
		b = -b;
	}

	int gcd_iterative_result = GCD_iterative(a, b);
	int gcd_recursive_result = GCD_recursive(a, b);

	printf("GCD of two integers %d and %d by iterative function using pseudo code is: %d\n", a, b, gcd_iterative_result);
	printf("GCD of two integers %d and %d by recursive function using formula is: %d\n", a, b, gcd_recursive_result);

	return 0;
}
