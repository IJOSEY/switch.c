#include <stdio.h>
int main(){
    int opcao;
    float saldo = 1000.00;
    

    printf("Escolha a opção da operação que deseja realizar.\n");
    printf("1 Verificar saldo.\n");
    printf("2 Realizar Depósito.\n");
    printf("3 Efetuar saque.\n");
    scanf("%d",&opcao);
    switch (opcao)
    {
    case 1:
        printf("Seu saldo é de R$ %f.\n",saldo);
        break;
    case 2:
        printf("Digite o banco que você deja depositar:\n");
        printf("Digite a agencia:\n");
        printf("Digite o número da conta:\n");
        break;
    case 3:
        printf("Digite o valor que deseja sacar:\n");
        break;
    
    default:
        printf("Opção invalida.\n");
        break;
    }
  return 0;
}