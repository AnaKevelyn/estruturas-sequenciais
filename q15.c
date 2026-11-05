#include <stdio.h>

int main(){

    int c;

    scanf("%d", &c);

    switch (c)
    {
    case 1:
        printf("Valor a pagar: R$ 5.00\n");
        break;
    
    case 2:
        printf("Valor a pagar: R$ 8.50\n");
        break;
    
    case 3:
        printf("Valor a pagar: R$ 9.00\n");
        break;

    case 4:
        printf("Valor a pagar: R$ 6.00\n");
        break;

    default:
        printf("Opcao invalida\n");
        break;
    }
    return 0;
}