//Cedulas
#include <stdio.h>
#define CEDULAS 7

int main(){
    int valor;
    do{
        scanf("%d", &valor);
    }while(valor < 0 || valor > 1000000);

    int notas[CEDULAS] = {100, 50, 20, 10, 5, 2, 1};
    int qtde[CEDULAS];

    for(int i=0, aux = valor; i < CEDULAS; i++){
        qtde[i] = aux / notas[i];
        aux %= notas[i];
    }

    printf("%d\n", valor);
    for(int i = 0; i < CEDULAS; i++)
        printf("%d nota(s) de R$ %d,00\n", qtde[i], notas[i]);

    return 0;
}