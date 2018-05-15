#include <stdio.h>

int eh_primo (int n){
    int i;	
    for (i=2;i<= n/2 ; i++){
         if ( n % i==0){
	     return(0);}
    }
    return(1);
}
int todos_os_primos (int num){
    int j;
    for (j=2; j<num; j++){
        if (eh_primo(j)==1){
            printf ("%d ", j);}
    }
}
int main (){
    int max;
    printf("Entre com um nº para exibir todos os primos entre 1 e esse nº");
    scanf("%d", &max);
    printf("Os primos entre 1 e %d sao: \n",max); ;
    todos_os_primos(max);
}
