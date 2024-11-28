#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    int idade ;
    int resultado;
    printf("Digite a sua idade: ");
    scanf("%d",&idade);
    resultado = idade >= 18 ? 1:0;
    if(resultado == 1){
        printf("Você é maior!\n");
        }else{
        printf("Você é menor de idade!\n");
        }
    return 0;
}