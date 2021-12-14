//BOTTOM-UP-CUT-ROD(p,n)
#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2);

int main(void){
	int r[1001], p[1000];
	int i,j,n,q;

	printf("\nIngrese la longitud en pulgadas: ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		printf("\nIngrese el precio de la longitud %d: ",i);
		scanf("%d",&p[i]);
	}
	
	r[0]=0;
	
	for (j=1; j<=n; j++){
		q= -2147483646;
		for (i=1; i<=j; i++){
			q=max(q,(p[i]+r[j-i]));
		}
		r[j]=q;
	}
	
	printf("\nEl mayor precio que se puede obtener es: %d", r[n]);
	return 0;
}

int max(int num1, int num2){
    int result;
    if(num1>num2){
        result=num1;
    } else{
        result=num2;
    }
}