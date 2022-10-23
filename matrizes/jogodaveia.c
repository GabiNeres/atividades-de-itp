#include <stdio.h>

int main (void){
    char jogo[3][3];
    char sym;
    int n, a, b;
    
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            scanf(" %c", &jogo[i][j]); 
        }
    }
    
    scanf(" %i", &n);
    
    for (int i=0;i<n;i++){
        scanf(" %i %i", &a, &b);
        scanf(" %c", &sym);

        if (jogo[a-1][b-1] == '.'){
            
            jogo[a-1][b-1] = sym;
            
            if (jogo[a-1][0] + jogo[a-1][1] + jogo[a-1][2] == 3*sym){
                printf ("Boa jogada, vai vencer!\n");
            }else if(jogo[0][b-1] + jogo[1][b-1] + jogo[2][b-1] == 3*sym){
                printf ("Boa jogada, vai vencer!\n");
            }else if (jogo[0][0] + jogo[1][1] + jogo[2][2] == 3*sym){
                printf ("Boa jogada, vai vencer!\n");
            }else if (jogo[0][2] + jogo[1][1] + jogo[2][0] == 3*sym){
                printf ("Boa jogada, vai vencer!\n");
            }else{
                printf ("Continua o jogo.\n");
            }
            
            jogo[a-1][b-1] = '.';
            
        }else{
            printf ("Jogada inválida!\n");
        }
        
        
    }
    
    return 0;
}