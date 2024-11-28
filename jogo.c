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
        printf("")
    }
    return 0;
}