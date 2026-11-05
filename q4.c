#include <stdio.h>

int main(){

    char alt[4];

    scanf("%c %c %c %c", &alt[0], &alt[1], &alt[2], &alt[3]);

    float n1=0, n2=0, n3=0, n4=0;

    if(alt[0] == 'C'){
        n1 = 1;
    } 

    if(alt[1] == 'B'){
        n2 = 7;
    }

    if(alt[2] == 'C'){
        n3 = 1.5;
    }

    if(alt[3] == 'B'){
        n4 = 0.5;
    }

    float soma = n1 + n2 + n3 + n4;

    printf("%.1f", soma);

    return 0;
}