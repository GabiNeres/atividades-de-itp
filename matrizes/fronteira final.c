#include <stdio.h>


int main(void){
    int n, m;
    int agua = 0;
    int hostil = 0;
    int deserto = 0;
    int veget = 0;

    scanf("%i %i", &n, &m);
    char planeta[n][m];

    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            scanf (" %c", &planeta[i][j]);
        }
    }

    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            if (planeta[i][j] ==  '~'){
                agua += 1;
            } else if (planeta[i][j] ==  'X'){
                hostil += 1;
            } else if (planeta[i][j] ==  '^'){
                deserto += 1;
            } else if (planeta[i][j] ==  '*'){
                veget += 1;
            } 
        }
    }
    if (hostil >= 1){
        printf ("Planeta Hostil");
    }else{
        if (agua/(float)(n*m) >= 0.85){
            printf ("Planeta Aquático");
        } else if (deserto/(float)(n*m) >= 0.60){
            printf ("Planeta Desértico");
        } else if (veget/(float)(n*m) >= 0.65){
            printf ("Planeta Selvagem");
        } else if ((agua/(float)(n*m) >= 0.50) && (veget/(float)(n*m) >= 0.20)){
            printf ("Planeta Classe M");
        } else {
            printf ("Planeta Inóspito");
        }
    }

    return 0;
}