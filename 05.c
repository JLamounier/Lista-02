#include <stdio.h>
#include <math.h>

//Faça um programa para imprimir os múltiplos de 5.
int main() {

    int quantidade, primeiro = 5, contagem = 1;

    printf("Digite a quantidade de multiplos que deseja ver: ");
    scanf("%i", &quantidade);

    do{         
        printf("%i: %i\n", contagem++, primeiro);
        primeiro = primeiro+5;
        --quantidade;
    }while(quantidade>0);

    return 0;
}