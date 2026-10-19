#include<stdio.h>
#include<math.h>

int main(void)
{
	int N = 12;
	double a = 0;
	double b = M_PI/3;
	double int_value = 0;
	double prefactor = (b-a)/(2*N);
	double diff;

	int_value += tan(a) + tan(b);

	double step_size = (b-a)/N;

	int i = 0;
	double x_n;

	for(i=1; i<N; i++)
	{
		x_n = a + i*step_size;
		int_value += 2*tan(x_n);
	}

	int_value *= prefactor;

	printf("The estimate area is = %.16lf\n", int_value);
	printf ("The actual area is = %.16lf\n", log(2));

	diff = int_value - log(2);
	printf("The difference between estimate and actual area is = %.16lf\n", diff);

	return 0;
}
