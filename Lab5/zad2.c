//Napisz program który wczyta od użytkownika parę liczb naturalnych a,b i zwróci wynik działania a do potęgi b. W rozwiązaniu nie kożystaj z potęgowania.


#include<stdio.h>

int main()  
{
int  a, b, wynik;
printf("Podaj liczbe a i b: \n");
scanf ("%d %d", &a, &b);

if (a < 1) 
printf("Podaj inna liczbe \n");

else if (a >= 1)

{
for (wynik=1; b>0; --b)
{
    wynik *= a;
}
printf("Wynik: %d \n", wynik);
}

}


