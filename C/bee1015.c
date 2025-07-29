//Distancia entre pontos
#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} ponto;

int main(){
    ponto p1, p2;
    scanf("%f %f", &p1.x, &p1.y);
    scanf("%f %f", &p2.x, &p2.y);

    float distancia = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    printf("%.4f\n", distancia);
    return 0;
}