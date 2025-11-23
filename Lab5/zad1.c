#include<stdio.h>

int main()  
{
int  n;
printf("Podaj liczbe: \n");
scanf ("%d", &n);

int wynik = 0;
int i;

for(i=1; i<n+1; i++)
{
wynik += i*i;
}

printf("Wynik: %d \n", wynik);
}



