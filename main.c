#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int j, i, k, number;
	int c[20] = { 0 }, u[10] = { 0 };
	double x, fraction;
	printf("Podaj liczbe dziesietna\n");
	scanf("%lf", &x);
	number = abs(x);
	fraction = fabs(x) - number;
	printf("czesc calkowita= %d czesc ulamkowa= %.8lf\n", number, fraction);

	i = 0;
	while (number != 0)
	{

		c[i] = number % 2;
		number /= 2;
		i++;
	};
	k = i;

	for (i = 0; i < 10; i++)
	{

		fraction = fraction * 2;
		if (fraction >= 1)
		{
			u[i] = 1;
			fraction -= 1;
			j = i;
		}
		else
		{
			u[i] = 0;
		}

	}

	for (i = k - 1; i >= 0; i--)
	{
		printf("%1d", c[i]);
	}

	if (k == 0)
	{
		printf("0.");
	}
	else
	{
		printf(".");
	}
	for (i = 0; i < 10 && i <= j; i++)
	{
		printf("%1d", u[i]);
	}
	printf("\n");



}
