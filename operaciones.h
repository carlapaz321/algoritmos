#include <stdio.h>

int sumar(int n1, int n2){
	return n1+n2;
}
int restar(int n1, int n2){
	return n1-n2;
}
int multiplicar(int n1, int n2){
	return n1*n2;
}
int dividir(int numerador, int denominador){
	float div;
	if(denominador==0){
		printf("Denominador no valido. \n");
		return 1;
	}
	else{
		div=(float)numerador/denominador;
		printf("Division: %.2f",div);
		return 0;
	}
}
