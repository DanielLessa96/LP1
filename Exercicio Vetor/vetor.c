#include <stdio.h>

void preenche(int* vec, int n){
    int i, v;
    for(i = 0; i < n; i++){
       scanf("%d", &v);
       *(vec + i) = v;
    }
}

int media(int* v, int n){
    int j, soma = 0, media = 0;
    for(j = 0; j < n; j++){
        soma = soma + *(v + j);
    }
    media = soma / n;
    return media;
}
int main(void){
    int k, v[10], media_vec = 0;
    preenche(v, 10);
    for(k = 0; k < 10; k++){
        printf("%d ", *(v + k));
    }
    media_vec = media(v, 10);
    printf("Media: %d\n", media_vec);
	return 0;
}
