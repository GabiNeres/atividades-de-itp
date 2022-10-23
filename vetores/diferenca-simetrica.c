#include <stdio.h>
#include <stdbool.h>

int main (void){
    int entrada1, entrada2;
    scanf("%i %i", &entrada1, &entrada2);

    int entrada = entrada1+entrada2;
    int conjuntoA[entrada1];
    int conjuntoB[entrada2];
    int conjuntoC[entrada];
    int a;
    int l = 0;
    bool control;

    for (int i = 0; i < entrada1; i++){
        scanf("%i", &conjuntoA[i]);
    }
    for (int i = 0; i < entrada2; i++){
        scanf("%i", &conjuntoB[i]);
    } 
    
        for (int i = 0; i<entrada1; i++){
            for (int j = 0; j<entrada2; j++){
                if (conjuntoA[i] == conjuntoB[j]){
                    control = false;
                    break;
                }else{
                    control = true;
                }
            }
            if (control == true){
                conjuntoC[l] = conjuntoA[i];
                l +=1;
            }
        }
        
        for (int i = 0; i<entrada2; i++){
            for (int j = 0; j<entrada1; j++){
                if (conjuntoB[i] == conjuntoA[j]){
                    control = false;
                    break;
                }else{
                    control = true;
                }
            }
            if (control == true){
                conjuntoC[l] = conjuntoB[i];
                l +=1;
            }
        }
        
    for (int i = 0; i < entrada; ++i){
        for (int j = i + 1; j < entrada; ++j){
            if (conjuntoC[i] > conjuntoC[j]){
                a = conjuntoC[i];
                conjuntoC[i] = conjuntoC[j];
                conjuntoC[j] = a;
            }
        }
    }
    for (int i = 0; i<l; i++){
        printf("%i ", conjuntoC[i]);
    }
    return 0;
}