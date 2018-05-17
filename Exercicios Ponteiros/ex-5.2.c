#include <stdio.h>
void compra (int* conta, int valor){
	*conta=*conta-valor;
}

int main(){
	int minha_conta1,minha_conta2,valor=500;
	int* conta;
	printf ("Entre com os saldos das contas:");
	scanf ("%d %d", &minha_conta1,&minha_conta2);
	
	if(minha_conta1>=minha_conta2){
		conta = &minha_conta1;
	}else{
	    conta = &minha_conta2;
	}
	compra(conta,valor);
	printf ("Saldos das contas apos a compra: %d %d\n",minha_conta1,minha_conta2);
}
