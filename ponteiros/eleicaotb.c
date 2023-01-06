#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char nome[100];
    int votos;
} Party;

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


int compute_votes (int n, int votes[n], int num_parties, Party parties [num_parties], Party *most_voted, Party *second_most_voted){
    int validos = n, count = 1;
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
        
    }

    bubblesort (n, vetorQtd, vetorVotos);
    for (int k = 0; k < num_parties; k ++){
        for (int l = 0; l < n; l++){
            if (vetorVotos[l] == parties[k].id){
                parties[k].votos = vetorQtd[l];
                break;
            }
        }
    }
    

    most_voted->id = vetorVotos[0];
    for (int k = 0; k < num_parties; k ++){
        if (most_voted->id == parties[k].id){
            strcpy(most_voted->nome, parties[k].nome);
            most_voted->votos = parties[k].votos;
            break;
        }
    }
    for(int i=0; i<n; i++){
        if(vetorQtd[i] < vetorQtd[0]){
            second_most_voted->id = vetorVotos[i];
            for (int j = 0; j < num_parties; j ++){
                if (second_most_voted->id == parties[j].id){
                    strcpy(second_most_voted->nome, parties[j].nome);
                    second_most_voted->votos = parties[j].votos;
                    break;
                }
            }
            break;
        }
    }
    
    int aux = 0;
    for (int i = 0; i<n;i++){
        for (int j = 0; j<num_parties; j++){
            if (parties[j].id == votes[i]){
                aux=0;
                break;
            }else{
                aux++;
            }
        }
        if (aux>0){
            validos--;
        }
    }
    
    return validos;
    
}

int main (void){
    int m, n, validos;
    Party most_voted, second_voted;
    
    scanf ("%i", &n);
    Party parties[n];
    
    for (int i = 0; i < n; i++){
        scanf ("%i %s", &parties[i].id, parties[i].nome);
    }
    
    scanf ("%i", &m);
    int votes[m];
    
    for (int i = 0; i<m;i++){
        scanf("%i", &votes[i]);
    }
    
    validos = compute_votes (m, votes, n, parties, &most_voted, &second_voted);
    float porcMost = (float)most_voted.votos*100/validos;
    float porcSecond = (float)second_voted.votos*100/validos;
    
    printf ("VENCEDOR: %s (%i votos = %.2f%)\n", most_voted.nome, most_voted.votos, porcMost);
    printf ("VICE: %s (%i votos = %.2f%)", second_voted.nome, second_voted.votos, porcSecond);
    
    return 0;
}