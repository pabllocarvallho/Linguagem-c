#include <stdio.h>

#define NUM_MESES 12

int main() {
    float gastos[NUM_MESES];
    float media = 0;
    float total = 0;
    int mesesAcimaMedia = 0;

    for (int i = 0; i < NUM_MESES; i++) {
        printf("Digite o valor dos gastos do m�s %d: ", i + 1);
        scanf("%f", &gastos[i]);
        total += gastos[i];
    }

    media = total / NUM_MESES;

    for (int i = 0; i < NUM_MESES; i++) {
        if (gastos[i] > media) {
            mesesAcimaMedia++;
            printf("Gastos acima da m�dia no m�s %d: R$ %.2f\n", i + 1, gastos[i]);
        }
    }

    printf("M�dia dos gastos: R$ %.2f\n", media);
    printf("Total de meses com gastos acima da m�dia: %d\n", mesesAcimaMedia);

    return 0;
}
