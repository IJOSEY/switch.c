#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    int nuum1,num2;
    int maior;
     printf("Digite numero para verificar qual é maior.\n\n");
     printf("Digite o primeiro número: ");
     scanf("%d",&nuum1);
     printf("Digite o segundo número: ");
     scanf("%d",&num2);
    nuum1 > num2 ? (maior = nuum1) : (maior = num2)  ;
    printf("O maior número é: %d\n",maior);
    /* if (maior == nuum1)
     {
        printf("O primeiro número é maior!!\n");
     }else {
        printf("O segundo número é maior!!\n");
     }*/
     
    return 0;
}