#include <stdio.h>

int calcular(int X, int &a, int &b);

main(void) {
	int X, resultado;
	int a=0,b=1,c;
	printf("Ingrese un X: ");
	scanf("%d",&X);
	if(calcular(X,a,b)==-1){
		printf("El nro ingresado no es valido. ");
	}
	else{
		int i=0;
		while(i<X){
			resultado=calcular(X,a,b);
			printf("-%d",a);
			a=b;
			b=resultado;
			i++;
		}
	}
}

int calcular(int X, int &a, int &b){
	int resultado;
	if(X<0){
		return -1;
	}
	else{
		resultado=a+b;
		return resultado;
	}
}
