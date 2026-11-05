#include <stdio.h>

int main (){

    int arcano_gema;

    scanf("%d", &arcano_gema);

    if (arcano_gema <= 0){
        printf("Classificacao: Gema sem poder.");
    } 
    else if (arcano_gema >= 1 && arcano_gema <= 10){

        printf("Classificacao: Comum.");
    }
    else if(arcano_gema >= 11 && arcano_gema <= 30){

        printf("Classificacao: Incomum.");
    }
    else if(arcano_gema >= 31 && arcano_gema <= 60){
        
        printf("Classificacao: Rara.");
    }
    else if(arcano_gema >= 61 && arcano_gema <= 100){

        printf("Classificacao: Epica.");
    }
    else if(arcano_gema > 100){

        printf("Classificacao: Lendaria.");
    }


    return 0;
}