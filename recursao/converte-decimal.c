#include <stdio.h>

int convert(int num){    
    if (num == 0){
        printf ("%i", 0);
    }else if (num == 1){
        printf ("%i", 1);
    }else{
        convert(num/2);
        printf ("%i", num%2);
    }
}
 
int main(void){
    int num;
 
    scanf("%i", &num);

    convert(num);
 
    return 0;
}
 
