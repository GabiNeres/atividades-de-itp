#include <stdio.h>

int min(int a, int b) { return (a<b)? a : b; }

int main(void){
    int n;

    scanf ("%i", &n);

    int piramide[n][n];

    for(int i = 1 ; i <= n; i++){
        for(int j = 1 ; j <= n ; j++){
                int up = i;
                int down = n + 1 - i;
                int left = j;
                int right = n + 1 - j;
                piramide[i-1][j-1] = min(min(up, down), min(left, right));
        }
    }
        
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf ("%i ", piramide[i][j]);
        }
        printf ("\n");
    } 
    
    return 0;
}