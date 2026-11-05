#include <stdio.h>

int selecionarPneu (char tipoTerreno, char estacao) {

    if (tipoTerreno == 'U' && estacao == 'V'){
        return 1;
    } else if (tipoTerreno == 'U' && estacao == 'I'){
        return 2;
    } else if (tipoTerreno == 'R' && estacao == 'V'){
        return 3;
    } else if (tipoTerreno == '4' && estacao == 'I'){
        return 4;
    } else {
        return 0;
    }
}