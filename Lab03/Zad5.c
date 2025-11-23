#include<stdio.h>

int main()  
{
char znak;
printf ("Podaj jeden znak \n");
scanf ("%c", &znak);

if (znak >= '0' && znak <= '9') 

printf("Jest to liczba \n", znak);
else if (znak >= 'A' && znak <= 'Z' || znak >= 'a' && znak <= 'z')
printf ("Jest to litera \n", znak);
else 
printf ("Nie jest to litera ani liczba \n");
}



