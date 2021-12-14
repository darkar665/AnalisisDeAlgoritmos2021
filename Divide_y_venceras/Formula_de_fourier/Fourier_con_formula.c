#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265

int main(void){
    int datos[101];
    float arguW[101], realX[101], imagX[101], realK[101], imagK[101];
    int i, k, N;
    
    printf("Ingresar la cantidad de dígitos: ");
    scanf("%d",&N);
    
    for (i=0; i<=(N-1); i++){
      printf("Ingresar el valor %d: ",(i+1));
      scanf("%d",&datos[i]);
    }
    
    //e^i(-2pnk/N)
    //e^(iu)=cos(u)+isen(u)
    for (k=0; k<=(N-1); k++){
        realX[k]=0;
        imagX[k]=0;
      for (i=0; i<=(N-1); i++){             
        arguW[i]=((-2)*PI*i*k)/N;
        realK[i]=cos(arguW[i])*datos[i];    
        imagK[i]=sin(arguW[i])*datos[i];   
        realX[k]=realX[k]+realK[i];
        imagX[k]=imagX[k]+imagK[i];
      }
    }
    
    for (k=0; k<=(N-1); k++){

        printf("El complejo de %d es: (%.3f, %.3fj)  \n",(k+1), realX[k], imagX[k]);
    }

    return 0;
}