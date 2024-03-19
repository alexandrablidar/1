
// Programul defineste un sir de caractere care va fi afisat cu cout si alte siruri de caractere folosind secvente escape.

#define _CRT_SECURE_NO_WARNINGS
#define STRING "Scopul educatiei este sa inlocuiasca o minte goala cu una deschisa. (Malcolm S. Forbes)"
#include <iostream>
using namespace std;

int main()
{
	cout << STRING << endl;
	cout << " Limbajul \nC  a fost\tcreat in\n1972 in laboratorul\nAT&T de catre\nDennis Ritchie." << endl;
	return 0;
}
