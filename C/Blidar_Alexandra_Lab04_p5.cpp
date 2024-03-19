
// Programul calculeaza suma ponderata a trei numere intregi, unde ponderile sunt numere subunitare, iar suma lor este 1.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int CitesteNr();
float CitestePon();
float SumaPonderata(int, int, int, float, float, float);
int main()
{
	int a, b, c;
	float p1, p2, p3;
	a = CitesteNr();
	p1 = CitestePon();
	b = CitesteNr();
	p2 = CitestePon();
	c = CitesteNr();
	p3 = CitestePon();
	printf("\n Suma ponderata este: %.3f", SumaPonderata(a, b, c, p1, p2, p3));
	return 0;
}
int CitesteNr()
{
	int x;
	printf("Valoare intreaga: ");
	scanf("% d", &x);
	return x;
}
float CitestePon()
{
	float y;
	printf("Ponderea valorii: ");
	scanf("%f", &y);
	return y;
}
float SumaPonderata(int m, int n, int p, float pm, float pn, float pp)
{
	if ((pm + pn + pp) == 1)
		return (m * pm + n * pn + p * pp);
	else return 0;
}