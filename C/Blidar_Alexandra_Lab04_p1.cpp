// Programul determina media aritmetica a 3 numere neintregi

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

float CitesteNr();
float Media(float, float, float);

int main()
{
	float a, b, c;
	a = CitesteNr();
	b = CitesteNr();
	c = CitesteNr();
	printf("\n Media aritmetica este: %.3f", Media(a, b, c));
	return 0;
}
float CitesteNr()
{
	float x;
	printf("Valoare neintreaga: ");
	scanf("%f", &x);
	return x;
}
float Media(float m, float n, float p)
{
	float med;
	med = (m + n + p) / 3;
	return med;
}