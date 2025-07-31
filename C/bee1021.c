//Notas e moedas
#include <stdio.h>
#define NUM_CEDULAS 6
#define NUM_MOEDAS 6
int main(){
    float cedulas[NUM_CEDULAS] = {100,50,20,10,5,2}, moedas[NUM_MOEDAS] = {100, 50, 25, 10, 5, 1}, valor;
    int cont_ced[NUM_CEDULAS], cont_moed[NUM_MOEDAS];
    scanf("%f", &valor);
    
    printf("NOTAS:\n");
    for(int i = 0; i < NUM_CEDULAS; i++){
        cont_ced[i] = valor / cedulas[i];
        valor -= cedulas[i] * cont_ced[i];
        printf("%d nota(s) de R$ %.2f\n", cont_ced[i], cedulas[i]);
    }

    int val_moeda = valor * 100 + 0.5;
    printf("MOEDAS:\n");
    for(int i= 0; i < NUM_MOEDAS; i++){
        cont_moed[i] = val_moeda / moedas[i];
        val_moeda -= moedas[i] * cont_moed[i];
        printf("%d moeda(s) de R$ %.2f\n", cont_moed[i], moedas[i] / 100);
    }

    return 0;
}