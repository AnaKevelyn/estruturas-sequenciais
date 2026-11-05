#include <stdio.h>

int main() {
    char C;
    double valor;

    scanf("%c", &C);

    if (C == 'E'){
        valor = 5.00;
        printf("Valor a pagar: R$ %.2f\n", valor);
    } else if (C == 'S'){
        valor = 15.00;
        printf("Valor a pagar: R$ %.2f\n", valor);
    } else if (C == 'V'){
        valor = 20.00;
        printf("Valor a pagar: R$ %.2f\n", valor);
    } else {
        printf("Categoria invalida\n");
    }

    return 0;
}