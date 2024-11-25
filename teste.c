/*Testar diversas posibilidades da estrutura em questão.*/
#include <stdio.h>
int main(){
     //int teste;
     //char letra [10];
     char variavel;
     //float teste2;

      //printf("Digite número teste:\n");
      //scanf("%d",&teste);

      printf("Digite uma letra.\n");
      scanf("%c" ,&variavel);

      //printf("Digite nome:\n");
      //scanf("%s", &letra);

      //printf("Digite uma nota:\n");
      //scanf("%f",&teste2);

      switch (variavel)
      {
      case 'A':
      printf("você digitou 1.\n");
      break;

      case 'B':
      printf("Você digitou 2.\n");
      break;
      
      default:
      printf("Você digitou outro Número.\n");
      break;
      }

     return 0;
}
