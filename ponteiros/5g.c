#include <stdio.h>

int get_range (int n, int cells[n], int distance, int user, int *left_index, int *right_index){
    int qtd = 0;
    int index[n];
    for (int i = 0; i < n; i++){
        if (cells[i]+distance >= user && user >= cells[i]-distance){
            index[qtd] = i;
            qtd++;
        }
    }
    
    *left_index = index[0];
    *right_index = index[qtd-1];
    
    return qtd;
}

int main (void){
    int n, d, u, left_index, right_index;
    scanf ("%i %i %i", &n, &d, &u);
    int pos[n];
    
    for (int i=0; i<n;i++){
        scanf ("%i", &pos[i]);
    }
    
    int qtdcells = get_range(n, pos, d, u, &left_index, &right_index);
    
    if (qtdcells == 0){
        printf ("USUARIO DESCONECTADO");
    }else{
        for (int j = 0; j<n; j++){
            if (j == left_index){
                printf("%i ", pos[j]);
            }else if (j>left_index && j<right_index){
                printf("%i ", pos[j]);
            }else if (j == right_index){
                printf("%i ", pos[j]);
                break;
            }
        }
    }
    
    return 0;
}