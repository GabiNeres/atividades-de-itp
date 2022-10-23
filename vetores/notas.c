#include <stdio.h>

int main (void){
    int entrada;
    scanf("%i", &entrada);
    
    int aluno[entrada];
    char traco;
    float notas[entrada];
    int aprov[entrada];
    int rec[entrada];
    int reprov[entrada];
    int controlAprov = 0;
    int controlRec = 0;
    int controlReprov = 0;
    
    
    for (int i = 0; i< entrada; i++){
        scanf("%i %c %f", &aluno[i], &traco, &notas[i]);
    }
    
    for (int i=0; i<entrada;i++){
        if (notas[i] >= 7){
            aprov[controlAprov] = aluno[i];
            controlAprov += 1;
        }else if ((notas[i] < 7) && (notas[i] >= 5)){
            rec[controlRec] = aluno[i];
            controlRec += 1;
        }else if (notas[i] < 5){
            reprov[controlReprov] = aluno[i];
            controlReprov += 1;
        }
    }
        printf("Aprovados: ");
    for (int i=0; i<controlAprov;i++){
        if (i == controlAprov-1){
            printf("%i (%.1f)",aprov[i], notas[aprov[i]-1]);
        }else{
            printf("%i (%.1f), ",aprov[i], notas[aprov[i]-1]);
        }
    }
        printf("\n");
        printf("Recuperação: ");
    for (int i=0; i<controlRec;i++){
        if (i ==  controlRec-1){
            printf("%i (%.1f)",rec[i], notas[rec[i]-1]);
        }else{
            printf("%i (%.1f), ",rec[i], notas[rec[i]-1]);
        }
    }
        printf("\n");
        printf("Reprovados: ");
    for (int i=0; i<controlReprov;i++){
        if (i==controlReprov-1){
            printf("%i (%.1f)",reprov[i], notas[reprov[i]-1]);
        }else{
            printf("%i (%.1f), ",reprov[i], notas[reprov[i]-1]);
        }
    }
        printf("\n");
    
    return 0;
}