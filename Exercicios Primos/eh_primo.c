#include <stdio.h>
int eh_primo (int n){
	int primo =1,i;
	for (i=2;i<= n/2 ; i++){
    if ( n % i==0){
	 return(0);}
    }
    return(1);
}

int main() {

int PRIMO, N;
 printf("Entre com um numero para verificar se ele e primo:");
 scanf ("%d", &N);

PRIMO = eh_primo(N);

if (eh_primo(N)==0){
    printf ("Nao e primo\n");}
else{
    printf ("E primo\n");}
}

