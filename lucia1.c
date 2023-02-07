#include <stdio.h>

int main()
{

    float a;
    float b = a * 1.8 + 32;
    float c = a + 273.15;
   
    
    
    printf("inserisci una temperatura in Celsius \n");
    scanf("%f" , &a);
    
   


    if (a < -273.15)
    { 
        printf("si segnala un problema");
    }
    else
    { 
      printf("in kelvin %f" , c);
        printf(" in Fahrenheit %f", b);
    }









}
    





   
