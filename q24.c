#include <stdio.h>

int main() {
    int T;
    double I;

    if (scanf("%d %lf", &T, &I) != 2) {
        return 0;
    }

    if (T >= 2 || I == 0.0) {
        printf("Pedido de Trancamento Negado\n");
    } else if (T == 0 && I > 0.0) {
        printf("Pedido de Trancamento Aprovado\n");
    } else if (T == 1 && I >= 2.5) {
        printf("Pedido de Trancamento Aprovado\n");
    } else {
        printf("Pedido de Trancamento Negado\n");
    }

    return 0;
}