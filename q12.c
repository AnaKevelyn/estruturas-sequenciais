#include <stdio.h>

double recomendarPlano(int categoria) {

    switch (categoria)
    {
    case 1:
        return 39.90;
        break;
    case 2:
        return 59.90;
        break;
    case 3:
        return 89.90;
        break;
    case 4:
        return 119.90;
        break;
    default:
        return 0.0;
        break;
    }
}