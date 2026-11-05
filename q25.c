#include <stdio.h>

int main() {
    int a;

    if (scanf("%d", &a) != 1) {
        return 0;
    }

    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
        printf("Bissexto\n");
    } else {
        printf("Nao Bissexto\n");
    }

    return 0;
}