char atribuirConceito(int nota) {
    if (nota < 0 || nota > 100) {
        return 'I';
    } else if (nota >= 90) {
        return 'A';
    } else if (nota >= 80) {
        return 'B';
    } else if (nota >= 70) {
        return 'C';
    } else if (nota >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}