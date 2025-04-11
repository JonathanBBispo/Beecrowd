//Salary
#include <stdio.h>

int main(){
    int num, hr;
    float valor;
    scanf("%d %d %f", &num, &hr, &valor);
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", (valor * hr));
    return 0;
}