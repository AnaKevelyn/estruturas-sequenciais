#include <stdio.h>

int main() {

    int IQA, polen;

    scanf("%d %d", &IQA, &polen);

    if (IQA > 150){
        printf("Alerta Vermelho\n");
    } else if (IQA > 100 || polen > 80){
        printf("Alerta Laranja\n");
    } else if(IQA > 50 || polen > 80){
        printf("Alerta Amarelo\n");
    } else{
        printf("Alerta Verde\n");
    }
    return 0;
}