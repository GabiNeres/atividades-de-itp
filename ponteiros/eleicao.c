#include <stdio.h>

void bubblesort(int n, int qtd[n], int votos[n]){
    int temp1, temp2;
    int k = 0;
    do{
        for (int i=1; i<n; i++){
            if (qtd[i-1]<qtd[i]){
                temp1 = qtd[i-1];
                temp2 = votos[i-1];
                qtd[i-1] = qtd[i];
                qtd[i] = temp1;
                
                votos[i-1] = votos[i];
                votos[i] = temp2;
            }
        }
        k++;
    }while(k<n);
}


void compute_votes (int n, int votes[n], int *most_voted, int *second_most_voted){
    *most_voted = 0;
    *second_most_voted = 0;
    int temp1, temp2;
    int count = 1, antcount = 1, aux = 1;
    int vetorQtd[n], vetorVotos[n];
    
    for (int i = 0; i < n; i++){
        count = 1;
        for (int j = 0; j < n; j++){
            if (i != j){
                if (votes[i] == votes[j]){
                    count++;
                }
            }
        }
        vetorQtd[i] = count;
        vetorVotos[i] = votes[i];
        
       /* if (count > antcount){
            *second_most_voted = *most_voted;
            *most_voted = votes[i];
            antcount = count;
        } */
    }
    /*for(int i=0; i<n-1; i++){
        if(vetorQtd[i] < vetorQtd[i+1]){
            temp1 = vetorQtd[i];
            temp2 = vetorVotos[i];
            vetorQtd[i] = vetorQtd[i+1];
            vetorQtd[i+1] = temp1;
            vetorVotos[i] = vetorVotos[i+1];
            vetorVotos[i+1] = temp2;
        }
    } */
    bubblesort (n, vetorQtd, vetorVotos);

    *most_voted = vetorVotos[0];
    for(int i=0; i<n-1; i++){
        if(vetorQtd[i] < vetorQtd[0]){
            *second_most_voted = vetorVotos[i];
            break;
        }
    }
    
}

int main (void){
    int n, most_voted, second_voted;
    scanf ("%i", &n);
    int votes[n];
    
    for (int i = 0; i<n;i++){
        scanf("%i", &votes[i]);
    }
    
    compute_votes (n, votes, &most_voted, &second_voted);
    
    printf ("%i %i", most_voted, second_voted);
    
    return 0;
}