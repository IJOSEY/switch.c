#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int escolhaj, escolhac;
    srand(time(0));
    printf("****JOKENPÔ****\n\n");
    printf("Escolha ua das opções:\n");
    printf("1.Pedra.\n");
    printf("2.Papel.\n");
    printf("3.Tesoura.\n");
    printf("Escolha: ");
    scanf("%d",&escolhaj);
    escolhac = rand() % 3 +1;
    switch(escolhaj){
        case 1:
        printf("Jogador: Pedra-\n");
        break;
        case 2:
        printf("Jogador: Papel-\n");
        break;
        case 3:
        printf("Jogador: Tesoura-\n");
        break;
        default:
        printf("Opção invalida.\n");
        break;
    }
    switch(escolhac){
        case 1:
        printf("Computador: Pedra-\n");
        break;
        case 2:
        printf("Computador: Papel-\n");
        break;
        case 3:
        printf("Computador: Tesoura-\n");
        break;
        
    }
    if (escolhaj == escolhac){
        printf("EMPATE!\n");    
    }else if ((escolhac == 1) && (escolhaj == 3) || 
              (escolhac == 2) && (escolhaj == 1) ||
              (escolhac == 3) && (escolhaj == 2)){
        
        printf("O Computador venceu!\n");
    }else {
        printf("### Jogador venceu!!###\n");
    }
    return 0;
}