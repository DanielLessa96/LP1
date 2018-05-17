#include <stdio.h>
int main(){
	int a,b;
	int* p;
	printf ("Entre com os valores de a e b:");
	scanf ("%d %d", &a,&b);
	printf ("Valor de a e b: %d %d\n",a,b);
	if(a>=b){
		p=&a;
	}else{
		p=&b;
	}
	*p=*p-50;
	printf ("Valores finais de a e b: %d %d\n",a,b);
}
