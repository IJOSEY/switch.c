#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    float temperatura;
    float resultadotemp;

    printf("Digite a temperatura: ");
    scanf("%f",&temperatura);

    resultadotemp = temperatura >= 30.0 ? 1: 0;

    if (resultadotemp == 1){
        printf("Está calor!!\n");
    } else {
        printf("O clima está esfriando!\n");
    }
    return 0;
}