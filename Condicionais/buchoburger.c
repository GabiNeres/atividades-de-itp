#include <stdio.h>

int main(void){
    int combo, dinheiro;
    scanf("%i %i", &combo, &dinheiro);

    if (combo == 1){
        if (dinheiro == 12){
            printf("Deu certim!");
        }else if (dinheiro > 12){
            printf("Troco = %i reais", dinheiro - 12);
        }else{
            printf("Saldo insuficiente! Falta %i reais", 12 - dinheiro);
        }
    }else if(combo == 2){
        if (dinheiro == 23){
            printf("Deu certim!");
        }else if (dinheiro > 23){
            printf("Troco = %i reais", dinheiro - 23);
        }else{
            printf("Saldo insuficiente! Falta %i reais", 23 - dinheiro);
        }
    }else if(combo == 3){
        if (dinheiro == 31){
            printf("Deu certim!");
        }else if (dinheiro > 31){
            printf("Troco = %i reais", dinheiro - 31);
        }else{
            printf("Saldo insuficiente! Falta %i reais", 31 - dinheiro);
        }
    }else if(combo == 4){
        if (dinheiro == 28){
            printf("Deu certim!");
        }else if (dinheiro > 28){
            printf("Troco = %i reais", dinheiro - 28);
        }else{
            printf("Saldo insuficiente! Falta %i reais", 28 - dinheiro);
        }
    }else if(combo == 5){
        if (dinheiro == 15){
            printf("Deu certim!");
        }else if (dinheiro > 15){
            printf("Troco = %i reais", dinheiro - 15);
        }else{
            printf("Saldo insuficiente! Falta %i reais", 15 - dinheiro);
        }
    }

    return 0;
}