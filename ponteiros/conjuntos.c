#include <stdio.h>

typedef struct {
    int qtd;
    int num[100];
} Conjunto;

Conjunto uniao (Conjunto *a, Conjunto *b){
    int count = 0;
    int n = (*a).qtd;
    Conjunto c;
    c.qtd = (*a).qtd + (*b).qtd;
    for (int i = 0; i < (*a).qtd; i++){
        c.num[i] = a->num[i];
    }
    
    for (int j = 0; j < (*b).qtd; j++) {
        for (int k = 0; k < (*a).qtd; k++){
            if (c.num[k] != b->num[j]) {
                count++;
            }else{
                break;
            }
        }
        if (count == a->qtd){
            c.num[n] = b->num[j];
            n++;
        }
        count = 0;
    }
    c.qtd = n;
    return c;
}

Conjunto inter (Conjunto *a, Conjunto *b){
    Conjunto c;
    int tam, n = 0;

    for (int i = 0; i < (*b).qtd; i++){
        for (int j = 0; j < (*a).qtd; j++){
            if (a->num[j] == b->num[i]){
                c.num[n] = b->num[i];
                n++;
            }
        }
    }
    c.qtd = n;
    return c;
}

int main(void){
    int tamA, tamB;
    Conjunto a;
    Conjunto b;
    
    scanf ("%i", &tamA);
    a.qtd = tamA;
    for (int i = 0; i < tamA; i++){
        scanf("%i", &a.num[i]);
    }
    
    scanf ("%i", &tamB);
    b.qtd = tamB;
    for (int j = 0; j < tamB; j++){
        scanf("%i", &b.num[j]);
    }
    if (tamA > 0 && tamB > 0){
        Conjunto c = uniao(&a,&b);
        Conjunto d = inter(&a,&b);
    
        printf("A união B == {");
        for (int k = 0; k < c.qtd-1; k++){
            printf("%i ", c.num[k]);
        }
        printf("%i}", c.num[c.qtd-1]);
        
        printf("\nA interseção B == {");
        for (int l = 0; l < d.qtd-1; l++){
            printf("%i ", d.num[l]);
        }
        printf("%i}", d.num[d.qtd-1]);
    }else if ((tamA == 0 && tamB > 0) || (tamA > 0 && tamB == 0)){
        Conjunto c = uniao(&a,&b);
        printf("A união B == {");
        for (int k = 0; k < c.qtd-1; k++){
            printf("%i ", c.num[k]);
        }
        printf("%i}", c.num[c.qtd-1]);
        
        printf("\nA interseção B == {vazio}");
    }else{
        printf("A união B == {vazio}");
        printf("\nA interseção B == {vazio}");
    }
    
    return 0;
}