#include <stdio.h>

int main(){

    int L, a = 1, b = 1, auxiliar;

    printf("Digite um numero: ");
    scanf("%i", &L);

    for(int i=1; i<L; i++){
        auxiliar = a + b;
        a = b;
        b = auxiliar;
    }
        printf("%i\t", a);
    return 0;
}