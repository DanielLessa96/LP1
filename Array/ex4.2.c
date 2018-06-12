#include <stdio.h>

void preenche (int arr[3][4]){
    int i,j,n;
    for(i = 0; i < 3; i++){
       for(j = 0; j < 4; j++){
            printf ("Elemento da %d linha %d coluna:\n",i,j);
            scanf("%d", &n);
            arr[i][j] = n;
       }
    }
}

int media (int arr[3][4]){
    int i,j,soma = 0, media;
    for(i = 0; i < 3; i++){
       for(j = 0; j < 4; j++){
        soma = soma + arr[i][j];
       }
    }
    return soma;
}
int main(void){
    int i,j;
    float media_arr;
    int arr[3][4];
    preenche(arr);
    media_arr = media(arr);
    printf ("\narray\n");
    for(i = 0; i < 3; i++){
       for(j = 0; j < 4; j++){
          printf("%d\t", arr[i][j]);
       }
       printf("\n");
    }
    printf("\nMedia: %.1f\n", media_arr/(4*3));
    return 0;
}
