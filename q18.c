#include <stdio.h>

int main() {
    char v; int E; double t;

    scanf("%c %d", &v, &E);

    if (v == 'M'){
        t = 3.00;
    } else {
        t = E * 4.50;
    }

    if (v == 'P'){
        t = t * 0.95;
    } else if (v == 'C'){
        t = t * 1.10;
    }

    printf("Valor a pagar: R$ %.2f", t);

    return 0;
}