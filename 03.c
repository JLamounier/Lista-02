#include <stdio.h>

int main(){

    int L, a = 0, b = 1, auxiliar;

    printf("Digite um numero: ");
    scanf("%i", &L);

    printf("%d\t", a);
    while(1){
        auxiliar = a + b;
        a = b;
        b = auxiliar;
        if(a<L)
        printf("%i\t", a);
        else 
        break;
    }
    return 0;
}