//Area of a Circle
#include <stdio.h>
#define N 3.14159

int main(){
    double r, a;
    scanf("%lf", &r);
    a = N * (r * r);
    printf("A=%.4lf\n", a);
}