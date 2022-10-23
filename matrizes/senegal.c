#include <stdio.h>

int num;

int calcular_aposta(int largura, int altura, int bandeira[altura][largura], char cor){
    int soma =  0;
    int colunas = largura/3;

    for (int j = 0; j < largura; j++){
        for (int i = 0; i < altura; i++){
            if (j<colunas){
                bandeira[i][j] = num + 1;
            }else if (j>=colunas && j<(colunas)*2){
                bandeira[i][j] = num + 2;
            }else{
                bandeira[i][j] = num + 3;
            }
        }
    }
    
    for (int i = 0; i< altura; i++){
        for (int j = 0; j<largura;j++){
            if (cor == 'G'){
                if (j<colunas){
                    soma += bandeira[i][j];
                } 
            }else if (cor == 'Y'){
                if (j>=colunas && j<(colunas)*2){
                    soma += bandeira[i][j];
                }
            }else if (cor == 'R'){
                if (j>=(colunas)*2){
                    soma += bandeira[i][j];
                }
            }
        }
    }
    
    return soma;
}


int main(void){
    int larg;
    char cor;

    scanf("%i %i  %c", &larg, &num, &cor);
    int alt = larg/3 * 2;
    int band[alt][larg];
    
    int resultado = calcular_aposta(larg, alt, band, cor);

    printf ("%i", resultado);
    
    return 0;
}