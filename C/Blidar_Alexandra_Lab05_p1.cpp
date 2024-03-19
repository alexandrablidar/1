
/*Programul citeste doua valori pentru rezistentele R1 si R2 si apeleaza functii care calculeaza rezistenta echivalenta gruparii in serie,
respectiv gruparii in paralel.*/

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

float paralel(float a, float b);
float serie(float a, float b);



int main()
{
	float p, s, R1, R2;
	printf("\n Introduceti valoarea primei rezistente: ");
	scanf("%f", &R1);
	printf("\n Introduceti valoarea celei de-a doua rezistente: ");
	scanf("%f", &R2);
	p = paralel(R1, R2);
	s = serie(R1, R2);

	printf("\nRezistenta echivalenta in serie este: %.3f", s);
	printf("\nRezistenta echivalenta in paralel este: %.3f", p);



	return 0;
}

float paralel(float a, float b)
{
	return (a * b / (a + b));
}

float serie(float a, float b)
{
	return a + b;
}