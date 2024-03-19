
/*Programul citeste de la tastura doua valori intregi care reprezinta 
catetele unui triunghi dreptunghic si determina ipotenuza si perimetrul triunghiului*/

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>

int main()
{
	int c1, c2;
	float ip, p;
	printf("Catetele triunghiului dreptunghic sunt:\n");
	scanf("%d", &c1);
	scanf("%d", &c2);
	ip = sqrt(c1 * c1 + c2 * c2);
	p = c1 + c2 + ip;
	printf("Ipotenuza triunghiului este:%.2f", ip);
	printf("\nPerimetrul triunghiului este:%.2f", p);
}