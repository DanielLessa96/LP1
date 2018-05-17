#include <stdio.h>
void compra (int* conta, int valor){
	*conta=*conta-valor;
}

int main(){
	int minha_conta1,minha_conta2,qnt,i,valor;
	int* conta;
	printf ("Entre com os saldos das contas:");
	scanf ("%d %d", &minha_conta1,&minha_conta2);
        printf ("Entre com a quantidade de compras:");
	scanf ("%d", &qnt);
	for (i=1;i<=qnt;i++){
	    printf ("Entre com os valores das compras:");
	    scanf ("%d", &valor);
	    if(minha_conta1>=minha_conta2){
		    conta = &minha_conta1;
	    }else{
	        conta = &minha_conta2;
        }
            compra(conta, valor);
	    printf ("Saldo das contas apos a compra: %d %d\n",minha_conta1,minha_conta2);
    }
	
}
