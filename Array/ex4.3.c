#include <stdio.h>

struct Pontos{
      int x;
      int y;
};


void preenche_ponto(struct Pontos* pontos){
        printf ("Posicao X:");
        scanf ("%d", &(*pontos).x);
        printf ("Posicao Y:");
        scanf ("%d", &(*pontos).y);
}
void preenche_vetor(struct Pontos ps[10]){
     int i;
     for (i=0; i<=9; i++){
         struct Pontos p;
         preenche_ponto (&p);
         ps[i] = p;
     } 
}
struct Pontos mais_distante(struct Pontos ps[10]){
     int i;
     struct Pontos maior_ponto = { 0,0 };
     for (i=0; i<=9; i++){
         if (ps[i].x >= maior_ponto.x && ps[i].y >= maior_ponto.y || ps[i].y >= maior_ponto.y && ps[i].x >= maior_ponto.x){
             maior_ponto = ps[i];
         }
     } 
     return maior_ponto;
}       

int main(){
      int i;
      struct Pontos maior_ponto;
      struct Pontos vet[10];
      preenche_vetor(vet);
      for (i=0; i<=9; i++){
         maior_ponto = mais_distante(vet);
      } 
      printf ("o ponto mais distante de (%d,%d) e: (%d,%d)\n",0,0,maior_ponto.x,maior_ponto.y);
      return(0); 
}
