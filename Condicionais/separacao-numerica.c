#include <stdio.h>

int main(void){
    int entrada,unidade,dezena,centena,milhar,dezmilhar;
    scanf("%i", &entrada);

    if (entrada < 10){
        printf("%i", entrada);
    } else if (entrada < 100){
        dezena = entrada/10;
        unidade = entrada - dezena*10;
        printf("%i\n", dezena);
        printf("%i\n", unidade);
    }else if (entrada < 1000){
        centena = entrada/100;
        dezena = (entrada - centena*100)/10;
        unidade = entrada - centena*100 - dezena*10;
        printf("%i\n", centena);
        printf("%i\n", dezena);
        printf("%i\n", unidade);
    }else if (entrada<10000){
        milhar = entrada/1000;
        centena = (entrada - milhar*1000)/100;
        dezena = (entrada - milhar*1000 - centena*100)/10;
        unidade = entrada - milhar*1000 - centena*100 - dezena*10;
        printf("%i\n", milhar);
        printf("%i\n", centena);
        printf("%i\n", dezena);
        printf("%i\n", unidade);
    }else if (entrada < 100000){
        dezmilhar = entrada/10000;
        milhar = (entrada - dezmilhar*10000)/1000;
        centena = (entrada - dezmilhar*10000 - milhar*1000)/100;
        dezena = (entrada - dezmilhar*10000 - milhar*1000 - centena*100)/10;
        unidade = entrada - dezmilhar*10000 - milhar*1000 - centena*100 - dezena*10;
        printf("%i\n", dezmilhar);
        printf("%i\n", milhar);
        printf("%i\n", centena);
        printf("%i\n", dezena);
        printf("%i\n", unidade);
    }else{
        printf("%i\n", 1);
        printf("%i\n", 0);
        printf("%i\n", 0);
        printf("%i\n", 0);
        printf("%i\n", 0);
        printf("%i\n", 0);
    }

    return 0;
}