#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    char sexo;
}Pessoa;

int inserir(int n, Pessoa person[]){
    char teste;
    scanf (" %[^\n]", person[n].nome);
    scanf ("%i", &person[n].idade);
    scanf (" %c ", &teste);
    if (teste == 'M' || teste == 'F' || teste == 'N'){
        person[n].sexo = teste;
    }
    
    return n + 1;
}

int deletar(int n, Pessoa person[], Pessoa retire){
    int res;
    for (int j = 0; j < n; j++){
        res = strcmp(person[j].nome, retire.nome);
        if (res == 0 && person[j].idade == retire.idade && person[j].sexo == retire.sexo){
            for (int k = j; k < n-1; k++){
                person[k] = person[k+1];
            }
            n--;
        }
    }
    return n;
}

void imprimir(int n, Pessoa person[]){
    for (int j = 0; j < n; j++){
        printf("%s,%i,%c\n", person[j].nome, person[j].idade, person[j].sexo);
    }
}

int main (void){
    char comando = 'i';
    int i = 0;
    Pessoa person[100];
    Pessoa retire;
    
    while (comando != 'p'){
        scanf(" %c ", &comando);
        if (comando == 'i'){
            i = inserir(i, person);
        }else if(comando == 'd'){
            scanf (" %[^\n]", retire.nome);
            scanf ("%i %c ", &retire.idade, &retire.sexo);
            i = deletar(i, person, retire);
        }else{
            break;
        }
    }
    
    imprimir(i, person);
    
    return 0;
}