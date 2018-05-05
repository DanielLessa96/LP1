#include <stdio.h>

int main(void){
   int soma=0,num;
   printf ("Digite um numero inteiro (zero para sair):");
   scanf ("%d", &num);
   while (num!=0){
        soma=soma+num;
        printf ("Digite um numero inteiro:");
        scanf ("%d", &num);}
   printf ("soma: %d\n",soma);
   return 0;
}

