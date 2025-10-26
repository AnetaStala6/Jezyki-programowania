#include<stdio.h>

int main()  
{
    int a, b, suma, roznica, iloczyn, iloraz, reszta_dzielenia;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);

    printf("Podaj druga liczbe: ");
    scanf("%d", &b);

    suma = a + b;
    roznica = a - b;
    iloczyn = a * b;
    iloraz = a / b;
    reszta_dzielenia = a % b;

    printf("Suma wynosi: %d\n", suma);
    printf("Roznica wynosi: %d\n", roznica);
    printf("Iloczyn wynosi: %d\n", iloczyn);
    printf("Iloraz wynosi: %d\n", iloraz);
    printf("Reszta z dzielenia wynosi: %d\n", reszta_dzielenia);


}
