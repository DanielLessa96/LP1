#include <stdio.h>
#include <string.h>
        
int main() {
    int vit,emp,der,pontos,i;
    int mais_pontos = 0;
    int menos_pontos = 1000;
    char time[10];
    char melhor_time[10];
    char pior_time[10];

    for(i=0;i<4;i++){
        printf("Nome do time:");
        scanf("%s",time);
        printf("Quantidade de vitorias:");
        scanf("%d",&vit);
        printf("Quantidade de derrotas:");
        scanf("%d",&der);
        printf("Quantidade de empates:");
        scanf("%d",&emp);
        pontos = 3*vit+1*emp;
    
	if  (pontos > mais_pontos) {
		mais_pontos = pontos;
		strcpy(melhor_time, time);
	}
	else if (pontos < menos_pontos) {
		menos_pontos = pontos;
		strcpy(pior_time, time);
	}
    }
	printf ("O time com menos pontos e a quantidade de pontos foi:" "%s %d\n", pior_time, menos_pontos);
	printf ("O time com mais pontos e a quantidade de pontos foi:" "%s %d\n", melhor_time, mais_pontos);

	return 0;
}


