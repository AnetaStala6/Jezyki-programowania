//Napisz program który wczyta od użytkownika parę liczb a,b i zwróci pierwszą liczbę c, taką że a do potęgi c jest większe od b.


#include<stdio.h>

int main()  
{

int  a, b;
printf("Podaj liczbe a i b: \n");
scanf ("%d %d", &a, &b);
int c=0;
int suma=1;
while ( suma <= b )
{
    c++;
 

     suma *= a;

}
printf ("Liczba c to: %d \n", c);
}
