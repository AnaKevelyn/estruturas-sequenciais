#include <stdio.h>

int main() {

    int H, S;

    scanf("%d %d", &H, &S);

    if (S >= 8 && H <= 5) {
        printf("Sua vocacao aponta para Engenharia de Software.\n");
    } else if (H >= 8 && S <= 5) {
        printf("Sua vocacao aponta para Engenharia Automotiva.\n");
    } else if (H >= 7 && S >= 7) {
        printf("Sua vocacao aponta para engenharia Eletronica.\n");
    } else if (H > 5 && S > 5) {
        printf("Sua vocacao aponta para Engenharia de Energia.\n");
    } else {
        printf("Continue explorando os os materiais do Ciclo Basico.\n");
    }

    return 0;
}