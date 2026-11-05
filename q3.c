#include <stdio.h>
#include <math.h>

int main (){

    float n1, n2, n3;

    scanf("%f %f %f", &n1, &n2, &n3);

    float media = (n1 + n2 + n3) / 3;

    if (media >= 7){

        printf("Aprovado\n%.2f\n", media);

    } else if (media >= 5 && media <= 7) {

        printf("Recuperacao\n%.2f\n", media);

    } else if (media < 5) {

        printf("Reprovado \n%.2f\n", media);

    }

    return 0;
}