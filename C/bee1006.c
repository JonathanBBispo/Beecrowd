//Average 2
#include <stdio.h>

int valida(float n){
    return n > 10.0 || n < 0.0;
}
int main(){
    float a,b,c;
    do{
        scanf("%f %f %f", &a, &b, &c);
    }while(valida(a) || valida(b) || valida(c));
    a *= 2;
    b *= 3;
    c *= 5;
    float media = (a + b + c) / 10;
    printf("MEDIA = %.1f\n", media);
    return 0;
}