
// Programul defineste constante simbolice de tipuri diferite. Valorile sunt afisate folosind operatorul "<<" si fluxul"cout".

#define _CRT_SECURE_NO_WARNINGS
#define STRING "Afara ploua."
#define NUMBER 1582
#define PI 3.14
#include <iostream>
using namespace std;

int main()
{
	cout << STRING << " " << "este o propozitie." << endl;
	cout << PI <<" " << "este un numar real" << endl;
	cout << NUMBER <<" " << "este un numar intreg" << endl;
	return 0;
}