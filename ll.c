#include <stdio.h>
int main()
{


 float a;
 int b;

 printf("inserisci due numeri \n");
 scanf("%f %d", &a , &b);
 int c = a;
if(b > 0)
{
 while ( b > 1)
 {
   
   b = b - 1;
   a = c * a;


 }
 

 printf("la potenza e: %f" , a );
}
 else if (b < -1)
 {
   while ( b < -1)
 {
   
   b = b + 1;
   a = 1 / a;


 }
  printf("potenza = %f" , a);
 }
}
