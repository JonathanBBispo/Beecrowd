//Simple Calculate
#include <stdio.h>

int main(){
    int id, num;
    float unit, total;
    scanf("%d %d %f", &id, &num, &unit);
    total += num * unit;
    scanf("%d %d %f", &id, &num, &unit);
    total += num * unit;
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    return 0;
}