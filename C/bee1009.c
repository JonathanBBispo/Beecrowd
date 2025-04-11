//Salary with Bonus
#include <stdio.h>
#include <string.h>

int main(){
    char nome[15];
    double salario, comissao;
    gets(nome);
    scanf("%lf %lf", &salario ,&comissao);
    double total = salario + (comissao * 0.15);
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}