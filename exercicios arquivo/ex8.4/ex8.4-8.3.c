#include <stdio.h>
#include <string.h>

void escrevaStrings (FILE* f, char strings[][25]) {
	int i,j,tamanho;	
	for (i=0; i<10; i++) {
		tamanho = strlen(strings[i]);
		for (j=0; j<tamanho; j++) {
			fputc(strings[i][j], f);
		}
	fprintf(f,"\n");	
	}

	
}


int main() {
	int i;
	FILE* f = fopen("/home/daniel/Documentos/exercicios arquivo/ex8.4/arq8.4-8.3.txt", "w");
	char strings[10][25];
	for (i=0; i<10; i++) {
		printf("Digite cada string: ");
		scanf("%s", strings[i]);
	}
    
	escrevaStrings (f, strings);
	fclose(f);
	return 0;
}

