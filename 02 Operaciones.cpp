#include <stdio.h>

int calcular(int X, int &a, int &b);

main(void) {
	int a,b;
	printf("Ingrese el primer nro: ");
	scanf("%d",&a);
	printf("Ingrese el segundo nro: ");
	scanf("%d",&b);
	sumar(a,b);
	restar(a,b);
	multiplicar(a,b);
	dividir(a,b);
}
