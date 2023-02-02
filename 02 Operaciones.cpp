#include <stdio.h>
#include "operaciones.h"

int calcular(int X, int &a, int &b);

main(void) {
	int a,b;
	printf("Ingrese el primer nro: ");
	scanf("%d",&a);
	printf("Ingrese el segundo nro: ");
	scanf("%d",&b);
	printf("Suma: %d \n",sumar(a,b));
	printf("Resta: %d \n",restar(a,b));
	printf("Multiplicacion: %d \n",multiplicar(a,b));
	dividir(a,b);
}
