#include <stdio.h>
int main(){
    int num1,num2;
    printf("escolha dois números:");
    scanf ("%d %d", &num1,&num2);
    if (num1>num2){
        printf("O maior é: %d\n",num1);}
    else {
        printf("O maior é: %d\n",num2);}
    return 0;
}
