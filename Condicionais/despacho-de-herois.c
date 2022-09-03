#include <stdio.h>

int main(void){
    int herois, classe, monstro;
    scanf("%i %i %i", &herois, &classe, &monstro);
    if (herois > 0){
        if (monstro == 1){
            if ( classe >= 2 || herois >= 3 ){
                printf ("Heróis vencerão!");
            }else{
                printf ("Melhor chamar Saitama!");
            }
        }else if (monstro == 2){
            if ( classe >= 3 || (classe == 2 && herois >= 3 )){
                printf ("Heróis vencerão!");
            }else{
                printf ("Melhor chamar Saitama!");
            }
        }else if (monstro == 3){
            if ( classe >= 4 || (classe == 3 && herois >= 3 )){
                printf ("Heróis vencerão!");
            }else{
                printf ("Melhor chamar Saitama!");
            }
        }else if (monstro == 4){
            if ( classe >= 5 || (classe == 4 && herois >= 3 )){
                printf ("Heróis vencerão!");
            }else{
                printf ("Melhor chamar Saitama!");
            }
        }else if (monstro == 5){
            if ( classe >= 5 ){
                printf ("Heróis vencerão!");
            }else{
                printf ("Melhor chamar Saitama!");
            }
        }
    }else{
        printf ("Melhor chamar Saitama!");
    }
    return 0;
}