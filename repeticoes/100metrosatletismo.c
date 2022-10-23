
#include <stdio.h>
#include <stdbool.h>

int main(void){
    float max_tempo;
    float entrada;
    int atletas = 0;
    bool control = true;
    
    scanf("%f", &max_tempo);

    while (control == true) {
        scanf ("%f", &entrada);
        if (entrada == -1){
            control = false;
        }else{
            if (entrada <= max_tempo){
                atletas = atletas + 1;
            }
        }
    }
    
    if (atletas == 0){
        printf ("%i %i", atletas, 0);
    }else if (atletas <= 8) {
        printf ("%i %i", atletas, 1);
    }else{
        printf ("%i %i", atletas, (atletas/8 + 1));
    }

    return 0;
}