#include <stdio.h>

int main(){

int num, f1, f2, f3, cont;

printf("Digite um numero: ");
scanf("%i", &num);

printf("0 - 1 - ");

    f1=0;f2=1;
    num=num-2;

for(cont=0;cont<num;cont++) {
    f3=f2+f1;

    printf("%i - ",f3);

    f1=f2;f2=f3;}

return 0;
}