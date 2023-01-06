#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubblesort(int n, int num[n]){
    int aux;
    int k = 0;
    do{
        for (int i=1; i<n; i++){
            if (num[i-1]>num[i]){
                aux = num[i-1];
                num[i-1] = num[i];
                num[i] = aux;
            }
        }
        k++;
    }while(k<n);
}

int main(void){
    int numero = 0, count = 0, size = 10;
    int* v = malloc(size * sizeof(int));
    char num[1000];
    char* pedaco;
    
    scanf ("%[^\n]", num);
    
    pedaco = strtok(num, " ");
    
    while(pedaco != NULL){
        
        numero = atoi(pedaco);
        if (count > size){
            size += 5;
            v = realloc (v, size * sizeof(int));
        }
        v[count] = numero;
        count ++;
        
        pedaco = strtok(NULL, " ");
    }
    
    bubblesort (count,v);
    
    for (int i = 0; i < count; i++){
        printf("%i ", v[i]);
    }
    
    
    return 0;
}