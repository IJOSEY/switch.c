#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
     int opcao;
     int numeros,palpite;
     int regra;

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
        printf("Digite o numero ecolhido de 0 à 9:");
        scanf("%d",&palpite);
        if (numeros == palpite)
        { 
            printf("Você venceu!!\n");
            printf("O número escolhido %d é igual ao número secreto %d.\n",palpite,numeros);
                         
        } else{
            printf("Você perdeu!!\n");
            printf("O número escolhido %d é diferente do número secreto %d.\n",palpite,numeros);

        }
                
        break;
        case 2:
        printf("Digite um numero de 1 à 10 para visualisar a regra escolhida.\n");
        scanf("%d",&regra);

        switch(regra)
        {
            case 1:
            printf("Números acima de 9 não são permitidos.\n");
            break;
            case 2:
            printf("Números abaixo de 0 não são permitidos.\n");
            break;
            case 3:
            printf("Só números positivos são aceitos.\n");
            break;
            case 4:
            printf("O usuário só possui uma tentativa.\n");
            break;
            case 5:
            printf("Um usuário é permitido apenas.\n");
            break;
            case 6:
            printf("Número secreto será alterado aleatoriamente.");
            break;
            case 7:
            printf("Se usuário tiver mais de dois erros não tem sorte alguma!!\n");
            break;
            case 8:
            printf("Se usuário tiver um erro e um acerto é intermediário!\n");
            break;
            case 9:
            printf("Se usuário tiver mais de 2 acertos é sortudo!\n");
            break;
            case 10:
            printf("Mais de 3 acertos vá se limpar!!!\n");
            break;
            default:
            printf("Opção invalida.\n");
            break;
        }
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