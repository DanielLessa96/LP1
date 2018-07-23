#include <stdio.h>
#include <string.h>

int main(){
    char str[25];
    int i = 0;
    FILE* f = fopen("/home/daniel/Documentos/exercicios arquivo/ex8.1/arq8.1.txt", "r");
    while (str[i] != EOF){
          str[i] = fgetc(f);
          printf ("%c", str[i]);
          i++;
    }

    fclose(f);
    return 0;
}
          
