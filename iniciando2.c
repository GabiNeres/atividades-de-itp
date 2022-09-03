#include <stdio.h>

int main(void){
    char letra;
    int indice;
    float taxa;
    float popularidade;
    
    scanf("%c", &letra);
    scanf("%i", &indice);
    scanf("%f", &taxa);

    popularidade = indice * taxa;
    printf("A popularidade de %c é %.1f\n", letra, popularidade);

    return 0;
}