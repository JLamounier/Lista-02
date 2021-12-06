/*
Seja a sequência da questão anterior, mostre somente os elementos maiores que 
a e menores que b, onde a e b são lidos do teclado.
*/
#include <stdio.h>

int main(){

    int sequencia = 1, a, b;

    printf("Digite dois numeros, o minimo e o maximo, consecultivamente: ");
    scanf("%i %i", &a, &b);

    if(a%2==0)
    sequencia = a+1;
    else
        sequencia = a+2;

    for(int i=sequencia; i<b; i+=2)
        printf("\n%i", i);

    return 0;
}