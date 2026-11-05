#include <stdio.h>

int main() {

    float s, novo_salario, reajuste, percentual;

    scanf("%f", &s);

    if (s >= 0 && s <= 1000) {
        novo_salario = (s * 0.20) + s;
        reajuste = novo_salario - s;
        percentual = ((novo_salario - s) / s) * 100;
        printf("Novo salario: %.2f\n", novo_salario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %.0f%% \n", percentual);

    } else if (s >= 1000.01 && s <= 2000) {
        novo_salario = (s * 0.15) + s;
        reajuste = novo_salario - s;
        percentual = ((novo_salario - s) / s) * 100;
        printf("Novo salario: %.2f\n", novo_salario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %.0f%% \n", percentual);

    } else if (s >= 2000.01 && s <= 3000) {
        novo_salario = (s * 0.10) + s;
        reajuste = novo_salario - s;
        percentual = ((novo_salario - s) / s) * 100;
        printf("Novo salario: %.2f\n", novo_salario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %.0f%% \n", percentual);

    } else if (s > 3000) {
        novo_salario = (s * 0.05) + s;
        reajuste = novo_salario - s;
        percentual = ((novo_salario - s) / s) * 100;
        printf("Novo salario: %.2f\n", novo_salario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %.0f%% \n", percentual);
    }
return 0;
}