#include <stdio.h>

int main(void){
    int entrada, ano, mes, dia;
    scanf("%i", &entrada);

    if (entrada < 30) {
        ano = 0;
        mes = 0;
        dia = entrada;
        printf("%i ano(s)\n", ano);
        printf("%i mes(es)\n", mes);
        printf("%i dia(s)", dia);
    }
    
    if ((entrada >= 30) && (entrada < 365)){
        ano = 0;
        mes = entrada/30;
        dia = entrada - (mes*30);
        printf("%i ano(s)\n", ano);
        printf("%i mes(es)\n", mes);
        printf("%i dia(s)", dia);
    }
    
    if (entrada >= 365) {
        ano = entrada/365;
        mes = (entrada-(365*ano))/30;
        dia = (entrada-(365*ano))-(mes*30);
        printf("%i ano(s)\n", ano);
        printf("%i mes(es)\n", mes);
        printf("%i dia(s)", dia);
    }
    return 0;
}