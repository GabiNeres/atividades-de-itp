#include <stdio.h>
#include <stdbool.h>

int main (void){
    int num, entrada;
    scanf("%i", &entrada);
    
    ehPar(num){
        if (num%2 == 0){
            return true;
        }else{
            return false;
        }
    }
    print(ehPar(entrada))
    return 0;
}