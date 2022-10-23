#include <stdio.h>

int main(void){
    int numero, i, j;
    char letra;
    scanf("%i %c", &numero, &letra);

    for (i = 0; i < numero-1; i++){
        
        for (j = 0; j < numero-1; j++){
            if (i == j || j == (numero-2) - i){
                printf ("%c", letra);
            }else{
                printf (" ");
            }
        }
        printf("\n");
    }

    return 0;
}