#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
int main(void){
    int matrizA[100][100], matrizB[100][100];
    int  matrizC[100][100];
    int i, j, k, n;

    printf("Ingresar el tamaño de la fila de la matriz A: ");
    scanf("%d",&n);
    
    for (i=1; i<=n; i++){
      for (k=1; k<=n; k++){
        printf("Ingresar el valor de la fila %d y columna %d de la matriz A: ",i,k);
        scanf("%d",&matrizA[i][k]);
      }
    }
    
    for (k=1; k<=n; k++){
      for (j=1; j<=n; j++){
        printf("Ingresar el valor de la fila %d y columna %d de la matriz B: ",k,j);
        scanf("%d",&matrizB[k][j]);
      }
    }

    for (i=1; i<=n; i++){
      for (j=1; j<=n; j++){
        matrizC[i][j]=0;
        for (k=1; k<=n; k++){
          matrizC[i][j]=matrizC[i][j] + (matrizA[i][k]*matrizB[k][j]);
        }
      }
    }
    
    printf("La matriz A es: \n");
    for (i=1; i<=n; i++){
      for (k=1; k<=n; k++){
        printf(" %d ", matrizA[i][k]);
      }
      printf("\n");
    }
    
    printf("La matriz B es: \n");
    for (k=1; k<=n; k++){
      for (j=1; j<=n; j++){
        printf(" %d ", matrizB[k][j]);
      }
      printf("\n");
    }
    printf("La matriz C, que resulta de multiplicacion de A con B es: \n");
    for (i=1; i<=n; i++){
      for (j=1; j<=n; j++){
        printf(" %d ", matrizC[i][j]);
      }
      printf("\n");
    }
    
    return 0;
}