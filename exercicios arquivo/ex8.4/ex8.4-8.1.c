#include <stdio.h>
#include <string.h>

void escreva_string (FILE* f, char* str){
    int i, tamanho;
    printf("string:");
    scanf("%s", str);
    tamanho = strlen(str);
    for (i=0; i<tamanho; i++){
        fputc(str[i], f);
    }
    
}

int main(){
    char str[25];
    FILE* f = fopen("/home/daniel/Documentos/exercicios arquivo/ex8.4/arq8.4-8.1.txt", "w");
    escreva_string (f,str);
    fclose(f);
    return 0;
} 


