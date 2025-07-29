//Consumo
#include <stdio.h>

int main(){
    int x;
    float y;
    scanf("%d %f", &x, &y);
    float kml = x/y; 
    printf("%.3f km/l\n", kml);

    return 0;
}