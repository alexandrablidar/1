
// Programul determina media geometrica dintre doua numere intregi.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int CitesteNr();
float Media(int, int);

int main()
{
	int a, b;
	a = CitesteNr();
	b = CitesteNr();
	printf("\n Media geometrica este: %.3f", Media(a, b));
	return 0;
}
int CitesteNr()
{
	int x;
	printf("O valoare intreaga: ");
	scanf("%d", &x);
	return x;
}
float Media(int m, int n)
{
	float med;
	med = sqrt(m * n);
	return med;
}