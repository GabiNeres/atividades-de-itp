#include <stdio.h>
#include <stdbool.h>

int main(void){
    int qtdNumeros, numero, i;
    bool result;
    
    scanf("%i", &qtdNumeros);

    bool ehPerfeito(int num){
        int soma = 0;
        for (int j = 1; j<num;j++){
            if (num%j == 0){
                soma += j;
            }
        }
        if (soma == num){
            return true;
        }else{
            return false;
        }
    }

    for (i = 0; i < qtdNumeros; i++){
        scanf("%i", &numero);
        result = ehPerfeito(numero);

        if (result == false){
            printf("%i nao eh perfeito \n", numero);
        }else{
            printf("%i eh perfeito \n", numero);
        }
    }

    return 0;
}