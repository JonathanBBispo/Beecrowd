//Identificando o cha
#include <stdio.h>
#define PARTICIPANTES 5

int main(){
    int t, part[PARTICIPANTES], acertos = 0;
    scanf("%d", &t);
    for(int i = 0; i < PARTICIPANTES; i++) scanf("%d", &part[i]);
    for(int i = 0; i < PARTICIPANTES; i++) if(part[i] == t) acertos++;
    printf("%d\n", acertos);

    return 0;
}