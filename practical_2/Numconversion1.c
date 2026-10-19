#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void) {

/* Declare variables */
	int i, inumber, tmp, numberdigits;
	float fnumber;
	char binnumber[80];

/* Intialise 4-byte integer */
	inumber = 15;//33554431;

/* Convert to 4-byte float */
	fnumber = (float) inumber;

/* Convert to binary number (string)*/
	i = 0; tmp = inumber;
	while (tmp > 0) {
	sprintf(&binnumber[i], "%1d", tmp%2);
	tmp = tmp / 2;
	i++;
	}

/* Terminate the string */
	binnumber[i] = '\0';

//reverse the String binnum
	int length, mid, j;
	char aux;
	length = strlen(binnumber);
	mid = length / 2;
	for(i = 0; i < mid; i++) {
	j = length-i-1;
	aux = binnumber[i];
	binnumber[i] = binnumber[j];
	binnumber[j] = aux;
	}

/* TODO: Complete the expression */
	numberdigits = ceil(logf(fnumber)/logf(2));
	printf("The number of digits is = %d\n",numberdigits);


	printf("inumber=%d, fnumber=%f, inumber in binary is = %s\n",inumber,fnumber,binnumber);

	return 0;
}
