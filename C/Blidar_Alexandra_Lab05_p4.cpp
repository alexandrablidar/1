
/*Programul citeste doua valori a si b intregi (a!=0), unde a si b sunt coeficientii ecuatiei ax+b=0. Se rezolva ecuatia si se afiseaza rezultatul.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	float x;
	printf("Introduceti dou valori pentru a si b, unde a diferit de 0;\n");
	scanf("%d", &a);
	scanf("%d", &b);
	x = (float)-b / a;
	printf("Rezultatul ecuatiei este:%.1f", x);
}