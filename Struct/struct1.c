#include <stdio.h>

struct ficha_de_aluno{
    char nome[50];
    char disciplina[30];
    float nota_prova1;
    float nota_prova2; 
};

void preenche(struct ficha_de_aluno* al) {
    printf("Nome do aluno: ");
    scanf ("%s", (*al).nome);
    printf("Disciplina: "); 
    scanf ("%s", (*al).disciplina);
    printf("Informe a 1a. nota: ");
    scanf("%f", &(*al).nota_prova1);
    printf("Informe a 2a. nota: ");
    scanf("%f", &(*al).nota_prova2); 
}
 
int main(){
    struct ficha_de_aluno al;
    preenche (&al);
    printf("\n\n --------- Dados do Aluno ---------\n\n");
    printf("Nome: %s\n", al.nome);
    printf("Disciplina: %s\n", al.disciplina);
    printf("Nota da Prova 1: %.2f\n" , al.nota_prova1);
    printf("Nota da Prova 2: %.2f\n" , al.nota_prova2);
    return(0);
} 
