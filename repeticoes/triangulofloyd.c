#include <stdio.h>

int main(void){
    int numero, i, j;
    int count = 1;
    
    scanf("%i", &numero);
    if (numero <= 0){
        printf ("Você entrou com %i, tente de novo na próxima", numero);
    }else{
        for (i=1; i<=numero; i++){
            for (j=1; j<=i; j++){
                if (count < 10){
                    printf (" %i ", count);
                }else{
                    printf ("%i ", count);
                }
                count += 1;
            }
            printf("\n");
        }
    }
    return 0;

}