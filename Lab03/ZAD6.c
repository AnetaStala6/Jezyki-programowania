#include<stdio.h>

int main()  
{
int rok, reszta4, reszta100, reszta400;
printf ("\n Podaj rok: \n");
scanf ("%d", &rok);

reszta4 = rok % 4;
reszta100 = rok % 100;
reszta400 = rok % 400;

    if ((reszta4 ==  0 && reszta100 == 0 && reszta400 == 0) || (reszta4 == 0 && reszta100 != 0))
        {
            printf ("%d rok jest przestepny \n", rok);
        }
    else
        printf ("%d rok nie jest przestepny \n", rok);
}

