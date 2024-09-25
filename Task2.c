#include <locale.h>      

#include <stdio.h> 
#define _USE_MATH_DEFINES
#include <math.h>

void main()       //íîìåð 2
{
	setlocale(LC_ALL, "RUS");

	float x, a, b, y, k = -4;

	printf("ââåäèòå õ:\n");
	scanf("%f", &x);

	a = log((-1) * k * x);
	b = exp(2 * x) + (a * x);
	y = x * (a * a * a) + (b * b);
	printf("Îòâåò: y=%.1f\n", y);
	printf(" \n");
	printf("(a=%f   b=%f)\n", a, b);
}
