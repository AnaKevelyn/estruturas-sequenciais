#include <stdio.h>

int main(){

    float N;
    int F;

    scanf("%f %d", &N, &F);

    if (F < 75){
        printf("Mencao final: SR\n");
    } else if (N >= 9.0) {
        printf("Mencao final: SS\n");
    } else if (N >= 7.0) {
        printf("Mencao final: MS\n");
    } else if (N >= 5.0) {
        printf("Mencao final: MM\n");
    } else if (N >= 3.0) {
        printf("Mencao final: MI\n");
    } else if (N >= 0.0) {
        printf("Mencao final: II\n");
    }

    return 0;
}