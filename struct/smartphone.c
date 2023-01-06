#include <stdio.h>

typedef struct {
    char modelo[40];
    int memoria;
    float processador;
    float camera;
    float bateria;
}Smartphone;

int cadastraSmartphone(int qnt_cadastrada, Smartphone phones[]){
    scanf (" %[^\n]", phones[qnt_cadastrada].modelo);
    scanf ("%i %f %f %f", &phones[qnt_cadastrada].memoria, &phones[qnt_cadastrada].processador, &phones[qnt_cadastrada].camera, &phones[qnt_cadastrada].bateria);
    
    return qnt_cadastrada + 1;
}

int pesquisaSmartphone(int qnt_cadastrada, Smartphone phones[], Smartphone reqMin){
    int count = 0;
    for (int j = 0; j < qnt_cadastrada; j++){
        if ((phones[j].memoria >= reqMin.memoria) && (phones[j].processador >= reqMin.processador) && (phones[j].camera >= reqMin.camera) && (phones[j].bateria >= reqMin.bateria)){
            printf("Modelo: %s\n", phones[j].modelo);
            printf("Memoria: %iGB\n", phones[j].memoria);
            printf("Processador: %.2fGhz\n", phones[j].processador);
            printf("Camera: %.2fMPixels\n", phones[j].camera);
            printf("Bateria: %.2fmA\n\n", phones[j].bateria);
            
            count += 1;
        }
    }
    return count;
}

int main(void){
    char comando = 's';
    int i = 0;
    Smartphone cel[20];
    Smartphone reqMin;
    
    while (comando == 's'){
        scanf(" %c ", &comando);
        if (comando == 's'){
            i = cadastraSmartphone(i, cel);
        }else{
            break;
        }
    }
    scanf ("%i %f %f %f", &reqMin.memoria, &reqMin.processador, &reqMin.camera, &reqMin.bateria);
    
    int total = pesquisaSmartphone (i, cel, reqMin);
    
    printf("%i smartphones encontrados.", total);
    
    return 0;
}