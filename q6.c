
int interpretarProfecia(int numeroDaSorte) {
    int resultado;

    if (numeroDaSorte == 0) {
        resultado = 0;
    } else if (numeroDaSorte > 0) {
        if (numeroDaSorte % 2 == 0) {
            resultado = 1;
        } else {
            resultado = 2;
        }
    } else {
        if (numeroDaSorte < -10) {
            resultado = 3;
        } else {
            resultado = 4;
        }
    }

    return resultado;
}
