#include <stdio.h>
int eh_primo (int n){
  int i;
  for (i=2;i<= n/2 ; i++){
  if ( n % i==0){
    return(0);}
  }
  return(1);
}

int main() {

  int N;
  printf("Entre com um numero para verificar se ele e primo:");
  scanf ("%d", &N);
  if (eh_primo(N)==0){
    printf ("Nao e primo\n");}
  else{
    printf ("E primo\n");}
   
}
