#include <stdio.h>

int main(void) {
/* Declare variables */
	int i;
	float Sum1, Sum2, Diff;

/* First sum */
	Sum1 = 0.0;
	for (i=1; i<=1000; i++) 
	{
	          Sum1 = Sum1 + 1.0 / (float) i;
	}

/* Second sum */
	Sum2 = 0.0;
	for (i=1000; i>0; i--) 
	{
	          Sum2 = Sum2 + 1.0 / (float) i;
	}

	printf(" Sum1 = %f\n",Sum1);
	printf(" Sum2 = %f\n",Sum2);

/* Find the difference */

	Diff = Sum1 - Sum2;

	printf(" Difference between the two Sum is = %f\n",Diff);

}
