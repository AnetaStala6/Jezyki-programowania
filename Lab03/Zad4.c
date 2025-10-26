#include<stdio.h>

int main()  
{
    int a, b, c;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);

    printf("Podaj druga liczbe: ");
    scanf("%d", &b);

    printf("Podaj trzecia liczbe: ");
    scanf("%d", &c);

    if (a > b && a > c)
        printf("%d jest najwieksza", a); 
    else  if (b > c && b > a)
        printf("%d jest najwieksza", b); 
    else if (c > b && c > a)
        printf("%d jest najwieksza", c); 
    else 
        printf("Liczby sa rowne\n"); 


}