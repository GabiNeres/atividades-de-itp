#include <stdio.h>
#include <stdlib.h> 

typedef struct {
  int nlin, ncol;
  int **mat;
} Matrix;

Matrix* createMatrix(int nlin, int ncol){
    Matrix *matriz = malloc(sizeof(Matrix));
        matriz->nlin = nlin;
        matriz->ncol = ncol;
        
     matriz->mat = malloc(sizeof(int*) * nlin);
     for(int i=0; i<nlin; i++)
        matriz->mat[i] = malloc(sizeof(int) * ncol);
    
    return matriz;
}

void readMatrix(Matrix *m){
    int linha = m->nlin;
    int coluna = m->ncol;
    int num;
    
    for (int i = 0; i<linha;i++){
        for (int j = 0; j<coluna; j++){
            scanf("%i ", &num);
            
            m->mat[i][j] = num;
        }
    }
}
void printMatrix(Matrix *m){
    int linha = m->nlin;
    int coluna = m->ncol;
    
    for (int i = 0; i<linha;i++){
        for (int j = 0; j<coluna; j++){
            printf("%i ", m->mat[i][j]);
        }
        printf("\n");
    }
}
void destroyMatrix(Matrix **m){
    free(*m);
    *m = NULL;
}

int main() {
  int lin, col;
  Matrix* mat;

  scanf("%i %i", &lin, &col);
  mat = createMatrix(lin, col);
  readMatrix(mat);
  printMatrix(mat);
  destroyMatrix(&mat);
  if (mat == NULL) {
    printf("OK\n");
  }
  return 0;
}