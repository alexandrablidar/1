//Blidar Alexandra, 2115, Lab 06 p5
/*citirea de la intrarea standard a unui numar intreg si afisarea numarului de zerouri din reprezentarea sa binara*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a, nr = 0;
    printf("Introduceti un numar intreg: ");
    scanf("%d", &a);
    while (a > 0)
    {
        if (!(a % 2))
            nr++;
        a = a >> 1;
    }
    printf("Numarul de zerouri din reprezentarea binara a numarului introdus este: %d", nr);
}

