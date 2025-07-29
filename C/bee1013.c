//O Maior
#include <stdio.h>
#include <stdlib.h>

int maior(int x, int y){
    return (x + y + abs(x-y)) / 2;
}

int main(){
    int a,b, c;
    scanf("%d %d %d", &a, &b, &c);
    int maior_ab = maior(a,b);
    int maior_abc = maior(maior_ab, c);
    printf("%d eh o maior\n", maior_abc);
}

