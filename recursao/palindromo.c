#include <stdio.h>
#include <string.h>

int verificar(char *entrada, int inicio, int fim){
    
    if(inicio == fim)
        return 1;
    if(entrada[inicio] == entrada[fim]){
        return verificar(entrada, inicio + 1, fim - 1);
    }
    return 0;
}

char *semEspaco (char *entrada, int tam){
    int j = 0;
    for (int i = 0; i < tam; i++){
        if (entrada[i] != ' '){
            entrada[j++] = entrada[i];
        }
    }
	entrada[j] = '\0';
	return entrada;
}

int palindromo (char *entrada){
    entrada = semEspaco(entrada,strlen(entrada));

    int tam = strlen(entrada);
    int res = verificar (entrada, 0, tam-1);
    if (res == 1){
        return 1;
    }else{
        return 0;
    }
}
 
int main(void){
    char *entrada = malloc (sizeof(char));
    char *resposta = malloc (sizeof(char));
    scanf("%[^\n]", entrada);
    strcpy (resposta,entrada);

    if(palindromo(entrada) == 1){
        printf("O texto \"%s\" é palíndromo\n", resposta);
    }else{
        printf("O texto \"%s\" não é palíndromo\n", resposta);
    }
    
    return 0;
}
 