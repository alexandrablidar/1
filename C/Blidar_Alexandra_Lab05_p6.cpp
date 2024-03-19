
/*Programul citeste numele a 2 studenti si nota fiecaruia de la programare.
Se afiseaza pe linii distincte numele fiecarui student intr-un camp de afisare cu dimensiunea de 20, aliniat la dreapta,
respectiv la stanga si media notelor lor cu o precizie de 2 zecimale.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char n1[31], n2[31];
	int nota1, nota2;
	float m;
	printf("Numele primului student este:");
	scanf("%s", &n1);
	printf("\nNota primului stundent este:");
	scanf("%d", &nota1);
	printf("\nNumele celui de al doilea student este:");
	scanf("%s", &n2);
	printf("\nNota celui de al doilea student este:");
	scanf("%d", &nota2);
	m = (float)(nota1 + nota2) / 2;
	printf("\nPrimul sudent : %*s",+20, n1);
	printf("\nAl doilea sudent : %*s", -20, n2);
	printf("\nMedia notelor este:%.2f", m);
}