
#include <stdio.h>
#include <stdbool.h>

int main(void){
    int equipes, i;
    char entrada;
    int corrida = 0;
    int salto = 0;
    int lancamento = 0;
    bool control = true;
    
    scanf("%i", &equipes);

    for (i = 0; i < equipes; i++){
        while (control == true){
            scanf("%c", &entrada);
            
                if (entrada == 'F'){
                    control = false;
                }else{
                    if (entrada == 'C'){
                        corrida += 1;
                    }else if (entrada == 'S'){
                        salto += 1;
                    }else if (entrada == 'L'){
                        lancamento += 1;
                    }
                }
        }
        control = true;
    }
    printf("%i %i %i %i", corrida, salto, lancamento, (corrida+salto+lancamento));

    return 0;
}