#include <stdio.h>

struct disciplina{
    char disciplina[30];
    float nota_prova1;
    float nota_prova2; 
};


struct ficha_de_aluno{
    char nome[50];
    long int matricula;
    struct disciplina dis;
};

void preenche(struct disciplina* d) {
    printf("Disciplina: "); 
    scanf ("%s", (*d).disciplina);
    printf("Informe a 1a. nota: ");
    scanf("%f", &(*d).nota_prova1);
    printf("Informe a 2a. nota: ");
    scanf("%f", &(*d).nota_prova2); 
}

void preenche2(struct ficha_de_aluno* al) {
    printf("Nome do aluno: ");
    scanf ("%s", (*al).nome);
    printf("Matricula: "); 
    scanf ("%li", &(*al).matricula);
    preenche (&(*al).dis);
    
}
 


int main(){
    struct ficha_de_aluno al;
    preenche2 (&al);
    printf("\n\n --------- Dados do Aluno ---------\n\n");
    printf("Nome: %s\n", al.nome);
    printf("Matricula: %li\n" , al.matricula);
    printf("Disciplina: %s\n", al.dis.disciplina);
    printf("Nota da Prova 1: %.2f\n" , al.dis.nota_prova1);
    printf("Nota da Prova 2: %.2f\n" , al.dis.nota_prova2);
    printf("Media: %.2f\n" , (al.dis.nota_prova1 + al.dis.nota_prova2)/2);
    return(0);
} 
