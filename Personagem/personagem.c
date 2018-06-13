#include <stdio.h>

#define L 10
#define C 10

struct Posicao{
    int x;
    int y;
};

struct Personagem{
    int identidade;
    int pontos;
    struct Posicao p;
};

void ler_pos(struct Posicao* pos){
    printf ("Posicao X:");
    scanf ("%d", &(*pos).x);
    printf ("Posicao Y:");
    scanf ("%d", &(*pos).y);
}

void ler_per(struct Personagem* per){ 
    printf("\n\n --------- Dados do Personagem ---------\n\n");
    printf ("Identidade:");
    scanf ("%d", & (*per).identidade);
    printf ("pontuacao:");
    scanf ("%d", & (*per).pontos);
    ler_pos(& (*per).p);
}


int main(){
    int i,j;
    int mat[L][C] = {
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
    };
    
   
    struct Personagem per[10];
    for (i=0; i<L; i++){
        ler_per (&per[i]);
        mat [per[i].p.x][per[i].p.y] = per[i].identidade;
    }
      
    printf("  ");
    for (j=0; j<C; j++){
        printf("%d ",j);
    }
    printf("\n");
    for (i=0; i<L; i++){
        printf("%d ",i);
        for (j=0; j<C; j++){
            if (mat[i][j]== 0){
                printf("* ");
            } else {
                printf("%d ", mat[i][j]);
            }
        }
        printf("\n"); 
    }
    return(0); 
}
