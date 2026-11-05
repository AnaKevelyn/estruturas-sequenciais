#include <stdio.h>

int main() {
    float pH, umidade;

    scanf("%f %f", &pH, &umidade);

    if ((pH >= 6.0 && pH <= 7.0) && (umidade >= 60 && umidade <= 80)) {
        printf("Soja\n");
    } else if ((pH >= 5.5 && pH <= 6.5) && (umidade >= 50 && umidade <= 70)) {
        printf("Milho\n");
    } else if ((pH >= 4.5 && pH <= 5.5) && (umidade >= 70 && umidade <= 90)) {
        printf("Café\n");
    } else {
        printf("Cultura inadequada\n");
    }

    return 0;
}