#include <stdio.h>
void compra (int* conta, int valor){
	*conta=*conta-valor;
}

int main(){
	int minha_conta1,minha_conta2,i,compras[]={100,50,80,30,20};
	int* conta;
	printf ("Entre com os saldos das contas:");
	scanf ("%d %d", &minha_conta1,&minha_conta2);
	for (i=0;i<5;i++){
	   if(minha_conta1>=minha_conta2){
		    conta = &minha_conta1;
	    }else{
	        conta = &minha_conta2;
            }
            compra(conta, compras[i]);
	    printf ("Saldo das contas apos a compra: %d %d\n",minha_conta1,minha_conta2);
        }
}
