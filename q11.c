#include <stdio.h>

int main () {

    int F, M, A;

    scanf("%d %d %d", &F, &M, &A);

    if (F >= 8 && M <= 5) {
        printf("Classe recomendada: Guerreiro");
    } else if (M >= 8 && F <= 5) {
        printf("Classe recomendada: Mago");
    } else if (A >= 8 && F <= 6 && M <= 6) {
        printf("Classe recomendada: Arqueiro");
    } else if (F > 5 && M > 5) {
        printf("Classe recomendada: Paladino");
    } else if (A > 6) {
        printf("Classe recomendada: Ladino");
    } else {
        printf("Classe Recomendada: Indeciso");
    }
    return 0;
}