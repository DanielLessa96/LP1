#include <stdio.h>

int main(void){
    
    float cel;
    printf ("Preço do celular em dólares:");
    scanf ("%f", &cel);
    if (cel<1000/3.17){
         printf("BOM NEGÓCIO\n");}
    else{ printf("MAL NEGÓCIO\n");}
}
