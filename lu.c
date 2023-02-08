#include <stdio.h>
int main()
{


    int a;
   

    printf("inserisci l'anno in cui sei nato \n");
    scanf("%d", &a );
     int b = a + 1969;
        int c = a - 1969;
    if (a == 1969)
    {
        printf("sei nato l'anno in cui l'uomo e andato sulla luna");
    }
   
       
      
   
   else if (a > 1969)
   {
     printf( "sei nato %d anni dopo l'atterraggio"  , c); 
   }
   else 
   {
     printf("sei nato %d anni prima l'atterraggio" , b);
   }

}