/*Testar diversas posibilidades da estrutura em questão.*/
#include <stdio.h>
int main(){
     int teste;
     char letra [10];
     float teste2;

      printf("Digite número teste:");
      scanf("%d",&teste);

      printf("Digite nome:");
      scanf("%s",&letra);

      printf("Digite uma nota:");
      scanf("%f",&teste2);
      switch (teste)
      {
      case 1:
      printf("você digitou 1.\n");
      break;

      case 2:
      printf("Você digitou 2.\n");
      break;
      
      default:
      printf("Você digitou outro Número.\n");
      break;
      }

     return 0;
}
