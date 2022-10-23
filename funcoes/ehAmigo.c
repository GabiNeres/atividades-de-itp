#include <stdio.h>
#include <stdbool.h>

int testa_divisor(int numero, int divisor){
    if (numero%divisor == 0){
        return 1;
    }else{
        return 0;
    }
}

int soma_divisores(int value){
    int soma = 0;
    for (int i = 1; i<value;i++){
        int divisores = testa_divisor(value, i);
        if (divisores == 1){
            soma += i;
        }
    }
    return soma;
}

int testa_amigos(int a, int b){
    int somaDiv = soma_divisores (a);
    int somaDiv2 = soma_divisores (b);
    if (somaDiv == b && somaDiv2 == a){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int entrada1, entrada2, entrada3, entrada4;
    bool control = false;
    scanf("%i %i", &entrada1, &entrada2);
    scanf("%i %i", &entrada3, &entrada4);
    
    for (int i = entrada1; i<=entrada2; i++){
        for (int j = entrada3; j<=entrada4; j++){
            if (i != j){
                int result = testa_amigos(i,j);
                if (result == 1){
                    printf ("O %i possui um amigo! \n", i);
                    control = true;
                }
            }            
        }
    }
    if (control == false){
        printf ("Os intervalos nao apresentam amigos!");
    }
    
    return 0;
}