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
      int i,j,x,y,id;
      int mat[L][C];
      struct Personagem per[10];
      for (i=0; i<L; i++){
          ler_per (&per[i]);
      }
      printf("  ");
      for (j=0; j<C; j++){
          printf("%d ",j);
      }
      printf("\n");
      for (i=0; i<L; i++){
          printf("%d ",i);
          x = per[i].p.x;
          y = per[i].p.y;
          id = per[i].identidade;
          for (j=0; j<C; j++){
              mat[i][j]=0;
              if (i == x && j == y){
                  mat[i][j] = id;
              }
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

