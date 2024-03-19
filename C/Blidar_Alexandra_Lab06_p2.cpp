//Blidar Alexandra, 2115, Lab 06 p2
/*Programul citeste lungimile laturilor unui triughi si afiseaza aria triunghiului ca valoare reala.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>

int main()
{
	int l1, l2, l3, p;
	float a;
	printf_s("Laturile triunghiului sunt:");
	scanf("%d", &l1);
	scanf("%d", &l2);
	scanf("%d", &l3);
	p = (l1 + l2 + l3) / 2;
	a = (float)sqrt(p * (p - l1) * (p - l2) * (p - l3));
	printf("\nAria triunghiului este:%.2f", a);
}