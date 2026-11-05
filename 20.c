#include <stdio.h>

int verificarAcesso(int idade, int temVip, int acompanhado){

    if(idade >= 18 || acompanhado == 1 || temVip == 1 ){
        return 1;
    } else {
        return 0;
    }
}