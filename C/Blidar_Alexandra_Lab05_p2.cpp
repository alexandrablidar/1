
/*Programul citeste doua valori pentru capacitatile C1 si C2 si apeleaza functii care calculeaza capacitatea echivalenta gruparii in serie,
respectiv gruparii in paralel.*/

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

float paralel(float a, float b);
float serie(float a, float b);



int main()
{
	float p, s, C1, C2;
	printf("\n Introduceti valoarea primei rezistente: ");
	scanf("%f", &C1);
	printf("\n Introduceti valoarea celei de-a doua rezistente: ");
	scanf("%f", &C2);
	p = paralel(C1, C2);
	s = serie(C1, C2);

	printf("\nRezistenta echivalenta in serie este: %.3f", s);
	printf("\nRezistenta echivalenta in paralel este: %.3f", p);



	return 0;
}

float paralel(float a, float b)
{
	return a+b;
}

float serie(float a, float b)
{
	return (1 / (1 / a + 1 / b));
}