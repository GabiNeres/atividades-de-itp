#include<stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    int n = 0, count = 0, size = 100, res = 1, numero;
    char **vetor = NULL;
    char nome[1000];
    char* compare = "acabou";
    int indice;
    
    while(res != 0){
        scanf (" %[^\n]", nome);
        
        res = strcmp(nome, compare);
        
        if (res == 0){
            break;
        }else{
            vetor = realloc (vetor, (count+1) * sizeof(char*));
            vetor[count] = malloc(sizeof(char)*100);
            strcpy(vetor[count], nome);
            count ++;
        }
    }
    
    
    
    scanf(" %i", &numero);
    srand(numero);

    int sort[count];
    int m = 0, contador = 0;
    while (m < count){
        indice = rand()%count;
        if (m == 0){
            sort[0] = indice;
            m++;
        }else{
            for (int j=0; j<m;j++){
                if (sort[j] == indice){
                    contador++;
                }
            }
            if (contador == 0){
                sort[m] = indice;
                m++;
            }
            contador = 0;
        }
    }
    
    for (int i=0; i<count;i++){
        printf("%s\n", vetor[sort[i]]);
    }
    
    return 0;
}