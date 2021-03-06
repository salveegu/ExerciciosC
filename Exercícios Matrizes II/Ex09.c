#include <stdio.h>
#include <stdlib.h>

void main(){
    int A[5][5], B[5][5], R[5][5];
    RDMpreencheMatriz(A,5,5,100);
    srand(3);
    RDMpreencheMatriz(B,5,5,50);
    printf("##### MATRIZ A #####\n");
    imprimeMatriz(A,5,5);

    printf("\n##### MATRIZ B #####\n");
    imprimeMatriz(B,5,5);

    for(int l = 0; l < 5; l++){
        for(int c = 0; c < 5; c++){
            R[l][c] = A[l][c] - B[l][c];
        }
    }
    printf("\n##### MATRIZ RESULTADO #####\n");
    imprimeMatriz(R,5,5);

}
/*Imprime uma matriz.
Parâmetros: 
M - Matriz a ser impressa
numLc - Numero de linhas da matriz
numCl - Numero de colunas da matriz*/
void imprimeMatriz(int *M, int numLn, int numCl){
    int i=0;
    for(int l = 0; l < numLn; l++){
        for(int c = 0; c < numCl; c++){
            printf("%5d", M[i]);
            i++;
        }
        printf("\n");

    }
}
/*Preenche uma matriz a partir de valores digitados pelo usuario.
Parâmetros: 
M - Matriz a ser preenchida
numLc - Numero de linhas da matriz
numCl - Numero de colunas da matriz*/
void preencheMatriz(int *M, int numLn, int numCl){
    int i=0;
    for(int l = 0; l < numLn; l++){
        for(int c = 0; c < numCl; c++){
            scanf("%d", M[i]);
            i++;
        }
    }
}
/*Preenche uma matriz com numeros gerados randomicamente.
Parâmetros: 
M - Matriz a ser preenchida
numLc - Numero de linhas da matriz
numCl - Numero de colunas da matriz*/
void RDMpreencheMatriz(int *M, int numLn, int numCl, int faixa){
    int i=0;
    for(int l = 0; l < numLn; l++){
        for(int c = 0; c < numCl; c++){
            M[i] = (rand()%100);
            i++;
        }
    }
}