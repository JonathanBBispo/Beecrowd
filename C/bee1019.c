//Conversao de tempo
#include <stdio.h>

int main(){
    int tempo,seg, min, hr;
    scanf("%d", &tempo);
    hr = tempo / 3600;
    min = (tempo %= 3600) /60;
    seg = tempo %=60;
    printf("%d:%d:%d\n", hr,min,seg);
    return 0;
}