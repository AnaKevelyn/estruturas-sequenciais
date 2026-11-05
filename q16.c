#include <stdio.h>

int main() {

    float T;
    int p, s;

    scanf("%f %d %d", &T, &p, &s);

    if (s < 90 || p < 80){
        printf("Classificacao de Risco: VERMELHO\n");
    } else if (T > 39.0 || p > 180){
        printf("Classificacao de Risco: LARANJA\n");
    } else if (T >+ 38.0 && T <= 39.0){
        printf("Classificacao de Risco: AMARELO\n");
    } else {
        printf("Classificacao de Risco: VERDE\n");
    }
    return 0;
}