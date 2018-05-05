#include <stdio.h>

int main(void){
   float vel;
   printf ("velocidade do carro(em mph):");
   scanf ("%f", &vel);
   if(vel>100/1.6){
        printf ("DESACELERE\n");}
   else if(vel<80/1.6){
        printf ("ACELERE\n");}
   else {
        printf ("MANTENHA\n");}
   return 0;
}
        
