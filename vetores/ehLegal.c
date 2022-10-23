#include <stdio.h>

int entrada;

int ehLegal(int vet[entrada]){
    for (int i = 1; i < entrada; i++){
        if ((vet[i]-vet[i-1])%2==0){
            continue;
        }else{
            return 0;
            break;
        }
    }
    return 1;
}

int main (void){

    scanf("%i", &entrada);
    int vetor[entrada];

    for (int i = 0; i < entrada; i++){
        scanf("%i", &vetor[i]);
    }
    
    if(ehLegal(vetor)==0){
        printf("Chato");
    }else{
        printf("Legal");
    }
    return 0;
}