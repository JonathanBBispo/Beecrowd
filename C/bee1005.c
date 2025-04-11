//Average 1
#include <stdio.h>

int main(){
    double a,b;
    do{
        scanf("%lf %lf", &a, &b);
    }while(a > 10.0 || a < 0.0 || b > 10.0 || b < 0.0);
    a *= 3.5;
    b *= 7.5;
    double media = (a+b) / 11;
    printf("MEDIA = %.5lf\n", media);
    return 0;
}