#include <stdio.h>

int main (void){
    int entrada, a;
    scanf("%i", &entrada);
    int num[entrada];

    int k = 0;

    for (int i = 0; i<entrada;i++){
        scanf("%i", &num[i]);
    }
do{
    for (int j=0; j<entrada; j++){
        printf("%i ", num[j]);
    }
    printf("\n");
    for (int i=1; i<entrada; i++){
        if (num[i-1]>num[i]){
            a = num[i-1];
            num[i-1] = num[i];
            num[i] = a;
        }
    }
    k++;
}while(k<entrada);
    return 0;
}