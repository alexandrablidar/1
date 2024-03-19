/*Blidar Alexandra, gr 2115, Lab02, p1
Construiti o functie recursiva care caluculeaza aranjamente de n luate cate k, unde n, k sunt citite de la tastatura, k<n.*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

float aranjamente(int n, int k);

int main()
{
	int n, k;
	cout << "Scrieti un numar natural pentru n:";
	cin >> n;
	cout << "Scrieti un numar natural pentru k:";
	cin >> k;
	cout << "Rezultatele aranjamentelor de n luate cate k este:" << aranjamente(n, k);

}

float aranjamente(int n, int k)
{
	if (n == 0 && k == 0) return 1;
	if (k == 1) return n;
	else return (n*aranjamente(n-1,k-1));
}*/


/*Blidar Alexandra, gr 2115, Lab02, p2
Construiti o functie recursiva care caluculeaza combinari de n luate cate k, n si k fiind luate de la tastatura, k<n, 
utilizand o functie recursiva.*/

/*#include <iostream>
using namespace std;

int combinari(int n, int k);


int main()
{
	int n, k;
	cout << "Scrieti un numar natural pentru n:";
	cin >> n;
	cout << "Scrieti un numar natural pentru k:";
	cin >> k;

	if (k < n)
		cout << "Rezultatul combinarilor de n luate cate k este:" << combinari(n, k);
	else return 0;
}


int combinari(int n, int k)
{
	if (k == 1) return n;
	if (k == 0 || n == k) return 1;
	else return (combinari(n - 1, k) + combinari(n - 1, k - 1));
}*/


/*Blidar Alexandra, gr 2115, Lab02, p3
Programul calculeaza cel mai mare divizor comun a doua numere folosind o functi recursiva.*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int cmmdc( int a, int b);

int main()
{
	int a, b;
	cout << "Scrieti un numar natural pentru a:";
	cin >> a;
	cout << "Scrieti un numar natural pentru b:";
	cin >> b;
	cout << "Cel mai mare divizor comun al numerelor"<< a<<" si" <<b<<" este:" << cmmdc(a, b);
}

int cmmdc(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    if (a == b) {
        return a;
    }

    if (a > b) {
        return cmmdc(a - b, b);
    }
    else {
        return cmmdc(a, b - a);
    }
}*/



/*Blidar Alexandra, gr 2115, Lab02, p3
Programul citeste un sir de caractere de la tastatura cu ajutorul unei functii bazate pe caracter. Afisati sirul in ordine inversa folosind 
o functie recursiva.*/

/*#include <iostream>
using namespace std;
#include <cstring>

char afis(char s[], int n);

int main()
{
	char s[121];
	cout << "Introduceti un sir de caractere:";
	cin.getline(s, 121);
	int n = strlen(s);
	cout << "Sirul de caractere scris invers este:" << afis(s,n);
}

char afis(char s[], int n)
{
	char s2[121];
	if (n == 0) return 0;
	else return afis()
}*/



/*Blidar Alexandra, gr 2115, Lab02, p6
Programl calculeaza produsul scalar al doi vectori (tablouri unidimensionale de aceesi lungime).*/

/*#include <iostream>
using namespace std;

double produs(int n, int v[], int u[]);

int main()
{
	int n, v[101], u[101];
	cout << "Introduceti o valoare intreaga pentru n:";
	cin >> n;
	cout << "Introduceti valorile pentru primul vector:";
	for (int i = 0;i <= n - 1;i++)
		cin >> v[i];
	cout << "Introduceti valorile pentru cel de al doilea vector:";
	for (int i = 0;i <= n - 1;i++)
		cin >> u[i];
	cout << "Produsul scalar al celor doi vectori este:" << produs(n, v, u);
}


double produs(int n, int v[], int u[])
{
	if (n==0) return 0;
	else return (v[n - 1] * u[n - 1] + produs(n - 1, v, u));
}*/



/*Blidar Alexandra, gr 2115, Lab02, p7
Programul calculeaza suma elementelor impare ale unui tablou unidimensional de numere intregi in mod recursiv.*/

/*#include <iostream>
using namespace std;

double suma(int n, int v[]);

int main()
{
	int n, v[101];
	cout << "Introduceti o valoare intreaga pentru n:";
	cin >> n;
	cout << "Introduceti valorile tabloului unidimensional:";
	for (int i = 0;i <= n - 1;i++)
		cin >> v[i];
	cout << "Suma numerelor impare din tablou este:" << suma(n,v);
}

double suma(int n, int v[]) {
	if (n == 1 && (v[0] % 2 != 0)) return v[0];
	else if (n == 1 && (v[0] % 2 == 0)) return 0;
	if (v[n - 1] % 2 != 0) return(suma(n - 1, v) + v[n - 1]);
	if (v[n - 1] % 2 == 0) return suma(n - 1,v);
}*/



/*Blidar Alexandra, gr 2115, Lab02, p8
Programul calculeaza suma elementelor de pe pozitii impare ale unui tablou unidimensional de numere intregi*/

/*#include <iostream>
using namespace std;

int suma(int n, int v[]);

int main()
{
	int n, v[101];
	cout << "Introduceti o valoare intreaga pentru n:";
	cin >> n;
	cout << "Introduceti valorile tabloului unidimensional:";
	for (int i = 0;i <= n - 1;i++)
		cin >> v[i];
	cout << "Suma elementelor aflate pe pozitii impare in tablou este:" << suma(n, v);
}
int suma(int n, int v[]) {
	if (n == 1) return 0;
	else if (n <= 0) return 0;
	if (n % 2 != 0) return(suma(n - 2, v) + v[n-2]);
	if (n % 2 == 0) return (suma(n - 1, v)+v[n-1]);
}*/



/*Blidar Alexandra, gr 2115, Lab02, p10
Programul determina in mod recursiv si nerecursiv numarul de aparitii ale unei valori intregi x intr un tablou unidemsional cu n valori intregi
(n<=30).*/

#include <iostream>
using namespace std;

int nr_ap_rec(int n, int v[], int x);
int nr_ap_nerec(int n, int v[], int x);

int main()
{
	int n, v[31], x;
	cout << "Introduceti o valoare intreaga pentru n(<=30):";
	cin >> n;
	while (n > 30) {
		cout << "Introduceti o alta valoare intreaga pentru n(<=30):";
		cin >> n;
	}
	cout << "Introduceti o valoare intreaga pentru x:";
	cin >> x;
	cout << "Introduceti valorile tabloului unidimensional:";
	for (int i = 0;i <= n - 1;i++)
		cin >> v[i];
	
	cout << "Numarul de aparitii al lui "<< x <<" in tablou(nerecursiv) este:" << nr_ap_nerec(n, v, x)<<'\n';
	cout << "Numarul de aparitii al lui "<<x<<" in tablou(recursiv) este:" << nr_ap_rec(n, v, x);

}

int nr_ap_rec(int n, int v[], int x) {
	int k = 1;
	if (n == 1 && v[0] == x) return 1;
	else if (n == 1 && v[0] != x) return 0;
	if (v[n-1] == x) return (k + nr_ap_rec(n - 1, v, x));
	else if (v[n - 1] != x) return nr_ap_nerec(n - 1, v, x);
}

int nr_ap_nerec(int n, int v[], int x) {
	int k = 0;
	for (int i = 0;i <= n - 1;i++)
		if (v[i] == x)
			k++;
	return k;
}


