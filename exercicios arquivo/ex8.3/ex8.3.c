#include <stdio.h>
#include <string.h>

int main(){
    char str[10][25];
    int i,j, tamanho;
    for (i=0; i<10;i++){
      printf("string:");
      scanf("%s", str[i]);
    }
    FILE* f = fopen("/home/daniel/Documentos/exercicios arquivo/ex8.3/arq8.3.txt", "w");
    for (i=0; i<10;i++){
      tamanho = strlen(str[i]);
      for (j=0; j<tamanho; j++){
        fputc(str[i][j], f);
      }
    }
    fclose(f);
    return 0;
} 


