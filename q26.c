#include <stdio.h>

int main() {
    int o, p;

    if (scanf("%d %d", &o, &p) != 2) {
        return 0;
    }

    if (o < 130) {
        printf("Creditos obrigatorios insuficientes.\n");
    } else if (p < 40) {
        printf("Creditos optativos insuficientes.\n");
    } else if ((o + p) < 200) {
        printf("Total de creditos insuficiente.\n");
    } else {
        printf("Apto para formatura!\n");
    }

    return 0;
}