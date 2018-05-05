#include <stdio.h>

int main(void){

   int n,i,soma=0;
   printf ("entre com o número de parcelas do somatório:");
   scanf ("%d",&n);
   for (i=1; i<=n; i++){
     soma = soma + i*i;}
   printf ("soma: %d\n", soma);
   return 0;
}
