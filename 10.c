/*
Faça um programa que mostre na tela os n primeiros elementos da sequência anterior que forem
divisíveis por três AND múltiplos de cinco OR divisíveis por sete
*/
#include <stdio.h>

int main(){

    int sequencia = 1, n;

    printf("Digite a quantidade de numeros: ");
    scanf("%i", &n);

    for(int i=0; i<n;){
        sequencia += 2;
        if(sequencia%3==0 && sequencia%5==0 || sequencia%7==0){
        printf("Numero %i:  %i\n", i+1, sequencia);
        i++;
        }
    }

    return 0;
}