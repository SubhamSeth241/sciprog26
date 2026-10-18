#include <stdio.h>

int main(void) {
	int number1, number2, error;

	printf("Please input two positive integers\n");
	error = scanf("%d %d",&number1,&number2);
	if (error != 2) {
	printf("Sorry, please try again!\n");
	return 1;
	}

	if (number1<=0 || number2<=0) {
	printf("Oops, these numbers are negative!\n");
	return 1;
	}

	printf(" You entered the numbers: %d and %d\n",number1,number2);
	if (number1%2 == 0) {
	printf(" number1 is even and");
	} else {
	printf(" number1 is odd and");
	}

	if (number2%2 == 0) {
	printf(" number2 is even\n");
	} else {
	printf(" number2 is odd\n");
	}
	printf("\n");

      return 0;
}
