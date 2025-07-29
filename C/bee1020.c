//Idades em dias
#include <stdio.h>

int main(){
    int dias;
    scanf("%d", &dias);
    int ano = dias / 365;
    int mes = (dias %= 365) / 30;
    dias %= 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dias);
    return 0;
}