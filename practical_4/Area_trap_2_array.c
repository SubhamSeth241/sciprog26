#include<stdio.h>
#include<math.h>

#define N 12
float degtorad(float degang);
float traprule(float TanArr[N+1]);
float TanArr[N+1];

int main(void)
{
	int i;
	float deg;
	for (i = 0; i <=N; i++)
	{
		deg = i * 5.0;
		TanArr[i] = tan(degtorad(deg));
		printf(" x = %f, f(x) = %f\n", deg, TanArr[i]);
	}

	return 0;
}


float degtorad(float degang)
{
	return ((M_PI * degang) / 180.0);
}
