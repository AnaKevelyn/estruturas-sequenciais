#include <stdio.h>

int main() {
    double T, G, A;

    if (scanf("%lf %lf %lf", &T, &G, &A) != 3) {
        return 0;
    }

    if (T >= 6.0 && G >= 5.0 && A >= 7.0) {
        printf("Grupo Aprovado!\n");
    } else {
        printf("Grupo Reprovado.\n");
    }

    return 0;
}