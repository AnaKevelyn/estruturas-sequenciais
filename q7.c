#include <stdio.h>

int main(){

        int N;

        scanf("%d", &N);

        if(N == 0){

            printf("A profecia eh sobre recomecos.\n");
        }  else if (N > 0) {

            if (N % 2 == 0){
            printf("A profecia eh sobre sucesso e abundancia.\n");
        } else {

            printf("A profecia eh sobre jornadas e desafios.\n");
        } 
        } else {
            if (N % 2 == 0) {
                printf("A profecia eh sobre cautela e reflexao.\n");
            } else {
                printf("A profecia eh sobre superacao e aprendizado.\n");
            }
    }
}