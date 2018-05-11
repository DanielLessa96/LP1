#include <stdio.h>


int todos_os_primos (int num)
{
    int i, primo = 1;

    for (i=2; i<num; i++)
    {
        if (num%i==0)
            primo = 0;
    }

    return primo;
}

int main ()
{
    int max,i, cont = 1;
    printf ("Entre com max para exibir todos os primos entre 1 e max:");
    scanf("%d", &max);

    for (i=2; i<max; i++)
    {
        if (todos_os_primos(i))
        {
            printf ("%d\n",i);
            
        }
    }
}

