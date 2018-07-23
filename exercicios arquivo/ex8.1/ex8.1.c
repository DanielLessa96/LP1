#include <stdio.h>
#include <string.h>

int main(){
    char str[25];
    int i, tamanho;
    printf("string:");
    scanf("%s", str);
    tamanho = strlen(str);
    FILE* f = fopen("/home/daniel/Documentos/exercicios arquivo/ex8.1/arq8.1.txt", "w");
    for (i=0; i<tamanho; i++){
        fputc(str[i], f);
    }
    fclose(f);
    return 0;
} 


