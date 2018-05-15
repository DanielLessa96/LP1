#include <stdio.h>
int todos_os_primos (int num)
{
    int i;
	for (i=2;i<= num/2 ; i++){
        if ( num % i==0){
	        return(0);}
    }
    return(1);
}

int main ()
{
    int max,j;
    scanf("%d", &max);
    for (j=2; j<max; j++){
        if (todos_os_primos(j)==1)
        {
            printf ("%d ", j);}
    }
}
