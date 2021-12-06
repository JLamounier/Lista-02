//Faça um programa que mostre na tela os n primeiros elementos da sequência 1, 3, 5, 7, 9,...
#include <stdio.h>

int main(){

    int sequencia = 1, n;

    printf("Digite a quantidade de numeros: ");
    scanf("%i", &n);

    for(int i=0; i<n; i++){
        printf("Numero %i:  %i\n", i+1, sequencia);
        sequencia += 2;
    }

    return 0;
}