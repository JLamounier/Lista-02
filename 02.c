//Faça um programa que imprima os L primeiros elementos da serie de Fibonacci.
#include <stdio.h>

int main(){

    int L, a = 0, b = 1, auxiliar;

    printf("Digite um numero: ");
    scanf("%i", &L);

    printf("%d\t", a);
    for(int i=1; i<L; i++){
        auxiliar = a + b;
        a = b;
        b = auxiliar;
        printf("%i\t", a);
    }
    return 0;
}