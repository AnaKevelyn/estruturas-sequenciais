int verificarElegibilidade(int idade, double peso, int mesesUltimaTatuagem) {
    if (idade < 0 || peso < 0 || mesesUltimaTatuagem < 0) {
        return 0;
    } else if (idade < 18 || idade > 69) {
        return 1;
    } else if (peso < 50.0) {
        return 2;
    } else if (mesesUltimaTatuagem < 12) {
        return 3;
    } else {
        return 4;
    }
}