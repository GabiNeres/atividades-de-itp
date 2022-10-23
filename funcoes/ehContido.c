#include <stdio.h>
#include <stdbool.h>


void ehContido(float esqP, float esqP, float infP, float dirP, float supP, float esq, float inf, float dir, float sup){
    if ((esq > esqP && inf > infP) && (dir < dirP && sup < supP)){
        printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n", esqP, infP, dirP, supP, esq, inf, dir, sup);
    } else if ((esq < esqP && inf < infP) && (dir > dirP && sup > supP)){
        printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n", esq, inf, dir, sup, esqP, infP, dirP, supP);
    } else {
        printf ("Nao posso afirmar!\n");
    }
}


int main(){
    float esquerdoP, inferiorP, direitoP, superiorP, esquerdo, inferior, direito, superior;

    scanf("%f %f %f %f", &esquerdoP, &inferiorP, &direitoP, &superiorP);

    while (true){
        scanf("%f %f %f %f", &esquerdo, &inferior, &direito, &superior);
        if (esquerdo != 0 || inferior != 0 || direito != 0 || superior != 0){
            ehContido (esquerdoP, inferiorP, direitoP, superiorP, esquerdo, inferior, direito, superior);
        }else{
            break;
        }
    }
    return 0;
}