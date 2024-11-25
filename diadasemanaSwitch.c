#include <stdio.h>
int main(){
    int dia;
    
    printf("Digite um número de 1 à 7 para verificar qual dia é:\n");
    scanf("%d",&dia);

    switch(dia){
        case 1:
        printf("O primeiro dia é Domingo.\n");
        break;
        case 2:
        printf("O segundo dia é Segunda-feira.\n");
        break;
        case 3:
        printf("O terceiro dia é Terça-Feira.\n");
        break;
        case 4:
        printf("O Quarto dia é Quarta-feira.\n");
        break;
        case 5:
        printf("O quinto dia é Quinta-feira.\n");
        break;
        case 6:
        ("O sexto dia é Sexta-feira.\n");
        break;
        case 7:
        printf("O sétimo dia é o Sabado.\n");
        break;
        default:
        printf("Dia inválido.\n");
        break;
    }
    return 0;

}