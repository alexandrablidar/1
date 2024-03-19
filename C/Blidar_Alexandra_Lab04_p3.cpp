
// Programul defineste o variabila intreaga care va fi initializata cu valori constante.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int CitesteNr();
int main()
{
	int nr;
	nr = CitesteNr();
	cout << "Numarul intreg introdus:" << nr;
	return 0;
}
int CitesteNr()
{
	int x;
	cout << "Scrie o valoare intreaga: ";
	cin >> x;
	return x;
}