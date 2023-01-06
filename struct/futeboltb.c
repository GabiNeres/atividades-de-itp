#include <stdio.h>

typedef struct {
    char nome[100];
    int gols_m;
    int gols_s;
}Time;

void ordena (Time times[], int tamanho){
    int i = 0;
    do{
        for (int j=1; j<tamanho; j++){
            if (times[j-1].gols_m<times[j].gols_m){
                Time aux = times[j-1];
                times[j-1] = times[j];
                times[j] = aux;
            }
        }
        i++;
    }while(i<tamanho);
}

int main(void){
    int n;
    scanf ("%i", &n);
    
    Time times[n];
    for (int i = 0; i < n; i++){
        scanf (" %[^\n]", times[i].nome);
        scanf ("%i %i", &times[i].gols_m, &times[i].gols_s);
    }
    
    ordena (times, n);
    
    for (int i = 0; i < n; i++){
        printf ("%i - %s\n", i+1, times[i].nome);
        printf ("Gols marcados: %i\n", times[i].gols_m);
        printf ("Gols sofridos: %i\n", times[i].gols_s);
    }
    
    return 0;
}