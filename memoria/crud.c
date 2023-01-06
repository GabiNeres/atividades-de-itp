#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

typedef struct {
    char *nome;
    int idade;
    char sexo;
}Pessoa;

Pessoa criar(char *nome, int idade, char sexo){
    Pessoa pessoa;
    pessoa.nome = malloc(sizeof(char));
    pessoa.nome = nome;
    pessoa.idade = idade;
    pessoa.sexo = sexo;

    return pessoa;
}

Pessoa* inserir(int *n, Pessoa *person){
    char teste;
    char *nome = malloc(sizeof(char));
    int idade;
    Pessoa pessoa;
    

    scanf (" %[^\n]", nome);
    scanf ("%i ", &idade);
    scanf (" %c ", &teste);
    if (teste == 'M' || teste == 'F' || teste == 'N'){
        pessoa = criar(nome,idade, teste);
    }
    
    //person = realloc (person,(n+1) * sizeof(Pessoa));
    person[*n].nome = malloc(sizeof(char));
    strcpy(person[*n].nome, pessoa.nome);
    person[*n].idade = pessoa.idade;
    person[*n].sexo = pessoa.sexo;
    *n = *n + 1;
    return person;
}

Pessoa* deletar(int *n, Pessoa *person, Pessoa retire){
    int res;
    
    for (int j = 0; j < *n; j++){
        //printf("%i,%c\n", person[j].idade, person[j].sexo);
        res = strcmp(person[j].nome, retire.nome);
        if (res == 0 && person[j].idade == retire.idade && person[j].sexo == retire.sexo){
            for (int k = j; k < *n-1; k++){
                person[k] = person[k+1];
            }

            *n = *n - 1;
        }
    }
    return person;
} 

void imprimir(int *n, Pessoa *person){
    for (int j = 0; j < *n; j++){
        printf("%s,%i,%c\n", person[j].nome, person[j].idade, person[j].sexo);
    }
}

int main (void){
    char comando = 'i', sexo;
    int idade;
    int *i = malloc(sizeof(int));
    *i = 0;
    Pessoa *person = malloc(sizeof(Pessoa));
    char *nome = malloc(sizeof(char));
    Pessoa retire;
    
    while (comando != 'p'){
        scanf(" %c ", &comando);
        if (comando == 'i'){
            person = realloc (person,(*i+1) * sizeof(Pessoa));
            person = inserir(i, person);
        }else if(comando == 'd'){
            scanf (" %[^\n]", nome);
            scanf ("%i ", &idade);
            scanf (" %c ", &sexo);
            retire = criar (nome,idade,sexo);
            
            person = deletar(i, person, retire);
        }else{
            break;
        }
    }
    
    imprimir(i, person);
    
    return 0;
}