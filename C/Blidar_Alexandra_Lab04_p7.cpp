
// Programul defineste 3 numere reale a, b, c. Se afiseaza rezultatul operatiei  1/a+1/b+1/c.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

float CitesteA();
float CitesteB();
float CitesteC();
float Impartire(float, float, float);
int main()
{
	float m, n, p;
	m = CitesteA();
	n = CitesteB();
	p = CitesteC();
	printf("\n Rezultatul operatiei 1/a+1/b+1/c este: %.3f", Impartire(m, n, p));
	return 0;
}
float CitesteA()
{
	float a;
	printf("O valoare reala pentru a: ");
	scanf("%f", &a);
	return a;
}
float CitesteB()
{
	float b;
	printf("O valoare reala pentru b: ");
	scanf("%f", &b);
	return b;
}
float CitesteC()
{
	float c;
	printf("O valoare reala pentru c: ");
	scanf("%f", &c);
	return c;
}
float Impartire(float a, float b, float c)
{
	return (1 / a + 1 / b + 1 / c);
}