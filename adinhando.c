#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
     int opcao;
     int numeros,palpite;

     printf("****MENU PRINCIPAL****\n");
     printf("1. Iniciar \n");
     printf("2. Regras do jogo\n");
     printf("3. Sair \n");
     printf("Digite a opção:\n");
     scanf("%d",&opcao);

     switch (opcao)
     {
        case 1:
        srand(time(0));
        numeros = rand() % 10;

        
        break;
        case 2:
        printf("As regras são....\n");
        break;
        case 3:
        printf("Fim do jogo.....\n");
        break;
        default:
        printf("Opção inválida.\n");
        break;
     }

     return 0;

}