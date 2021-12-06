//Fazer um programa para ler n números inteiros e imprimir a soma deles. O n valor de deve ser lido do teclado.
#include <stdio.h>

int main(){

    int soma, num, total = 0;

    printf("Digite a quantidade de numeros na soma: ");
    scanf("%i", &num);

    while(num>0){
        printf("Digite o numero: ");
        scanf("%i", &soma);
        total+=soma;
        num--;
    }
    printf("A soma dos numeros e: %i", total);

    return 0;
}