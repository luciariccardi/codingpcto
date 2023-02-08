#include <stdio.h>
int main()
{

int a; 
printf("inserisci un anno \n");
scanf("%d" , &a);

if (a % 400 == 0)
{
    printf("l'anno e bisestile");
}

if(a % 4 == 0 && a % 100 != 0)
{
    printf("l 'anno e bisestile");
}


else
{
     printf("l'anno non e bisestile");
}



}