#include <stdio.h>

typedef struct {
    char nome[200];
    int vitorias;
    int empates;
    int derrotas;
    int gols_feitos;
    int gols_sofri;
    int pontos;
    int partidas;
    int saldo;
    
}Time;

void bubblesort(int j, Time times[]){
    Time aux = times[j-1];
    times[j-1] = times[j];
    times[j] = aux;
}

void ordena (Time times[], int tamanho){
    int i = 0;
    do{
        for (int j=1; j<tamanho; j++){
            if (times[j-1].pontos < times[j].pontos){
                bubblesort(j, times);
            }else if (times[j-1].pontos == times[j].pontos){
                if (times[j-1].vitorias < times[j].vitorias){
                    bubblesort(j, times);
                }else if(times[j-1].vitorias == times[j].vitorias){
                    if (times[j-1].saldo < times[j].saldo){
                        bubblesort(j, times);
                    }
                }
            }
        }
        i++;
    }while(i<tamanho);
}

void leitura(int i, Time times[]){
    scanf (" %[^;];", times[i].nome);
    scanf ("%i %i %i %i %i", &times[i].vitorias, &times[i].empates, &times[i].derrotas, &times[i].gols_feitos, &times[i].gols_sofri);
    times[i].pontos = times[i].vitorias*3 + times[i].empates;
    times[i].partidas = times[i].vitorias + times[i].empates + times[i].derrotas;
    times[i].saldo = times[i].gols_feitos - times[i].gols_sofri;
}

void imprimir(int n, Time times[]){
    printf ("Tabela do campeonato:\n");
    printf ("Nome| Pontos| Jogos| Vitorias| Empates| Derrotas| Gols Pro| Gols Contra| Saldo de Gols\n");
    for (int i = 0; i < n; i++){
        printf ("%s| %i| %i| %i| %i| %i| %i| %i| %i\n", times[i].nome, times[i].pontos, times[i].partidas, times[i].vitorias, 
        times[i].empates, times[i].derrotas, times[i].gols_feitos, times[i].gols_sofri, times[i].saldo);
    }
    
    printf("\n");
    printf ("Times na zona da libertadores:\n");
    for (int i = 0; i < 6; i++){
        printf ("%s\n", times[i].nome);
    }
    
    printf("\n");
    printf ("Times rebaixados:\n");
    
    for (int i = n-1; i > n-5; i--){
        printf ("%s\n", times[i].nome);
    }
}

int main(void){
    int n;
    scanf ("%i", &n);
    
    Time times[n];
    
    for (int i = 0; i < n; i++){
        leitura(i, times);
    }
    
    ordena (times, n);
    imprimir (n, times);
    
    return 0;
}