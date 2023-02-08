#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
     printf("inserisci tre numeri \n");
     scanf("%d %d %d" , &a , &b , &c);
     if (a + b > c && b + c > a && c + a > b)
     {
        printf("le lunghezze sono i lati del triangolo");
         
         if ( a != b && a != c && b != c)
    {
        printf("scaleno");
    
    }
     
      else if ( a == b && a == c)
    {
        printf("equilatero");
    }
     else  
    {
        printf("isoscele");
    }

     

     }
     
     else 
     {
         printf("le lunghezze non sono i lati di un triangolo");
     }


}