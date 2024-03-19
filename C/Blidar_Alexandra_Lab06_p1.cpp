//Blidar Alexandra, grupa 2115, lab06 p1
//Programul afiseaza valoarea polinomului de gradul 3 pentru o anumita valoare a variabilei reale x.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float polinom(float x);
int a, b, c, d;
int main()
{

	float p, X;
	printf("\nIntroduce valoarea lui a: ");
	scanf("%d", &a);
	printf("\nIntroduce valoarea lui b: ");
	scanf("%d", &b);
	printf("\nIntroduce valoarea lui c: ");
	scanf("%d", &c);
	printf("\nIntroduce valoarea lui d: ");
	scanf("%d", &d);
	printf("\nIntroduce valoarea lui X: ");
	scanf("%f", &X);
	p = polinom(X);
	printf("\nValoarea polinomului este: %.3f", p);
	return 0;
}
float polinom(float x)
{
	return a * x * x * x + b * x * x + c * x + d;
}