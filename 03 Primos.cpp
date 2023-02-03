#include <stdio.h>

void listarNumerosPrimos(int cantidadPrimos);
bool esPrimo(int numero);

main(void) {
	int cant;
	printf("Ingrese la cantidad de n primos que quiere ver: ");
	scanf("%d",&cant);
	listarNumerosPrimos(cant);
}

void listarNumerosPrimos(int cantidadPrimos){
	int c=0;
	int n=2;
	do{
		if(esPrimo(n)){
	  	printf("%d ",n);
			c++;
		}
		n++;
	}while(c<=cantidadPrimos);
}

bool esPrimo(int numero){
	int d=0;
	for(int i;i<=numero;i++){
		if(numero % i == 0){
			return true;
		}
		else{
			return false;
		}
	}	
}
