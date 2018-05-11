#include <stdio.h>
int eh_primo (int n){
	int primo =1,i;
	for (i=2;i<= n/2 ; i++){
    if ( n % i==0){
	  primo=0;}
	else{ primo = 1;}	
	return primo;
	}
}
int main() {

int PRIMO, N;
 printf("Entre com um numero para verificar se ele e primo:");
 scanf ("%d", &N);

PRIMO = eh_primo(N);

if (PRIMO==1){
    printf ("E primo\n");}
else{
    printf ("Nao e primo\n");}
   
}

