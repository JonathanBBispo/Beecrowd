//Gasto combustivel
#include <stdio.h>

int main(){
    int hr,km;
    scanf("%d %d", &hr,&km);
    float l = (float)(km * hr) / 12;
    printf("%.3f\n", l);
    return 0;
}