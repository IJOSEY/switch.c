#include <stdio.h>
int main() {
     int opcao;

     printf("****MENU PRINCIPAL****\n");
     printf("1. Iniciar \n");
     printf("2. Regras do jogo\n");
     printf("3. Sair \n");
     printf("Digite a opção:\n");
     scanf("%d",&opcao);

     switch (opcao)
     {
        case 1:
        printf("Executar jogo.\n");
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