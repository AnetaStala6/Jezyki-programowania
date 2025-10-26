#include<stdio.h>

int main()  
{
    int a, b;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);

    printf("Podaj druga liczbe: ");
    scanf("%d", &b);

    if (a > b)
        printf("%d jest wieksza od %d\n", a, b); 
    else  if (a < b)
        printf("%d jest wieksza od %d\n", b, a); 
    else
        printf("Liczby sa rowne\n"); 


}