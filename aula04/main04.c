#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero;
	int cifra;
	
	printf("digite um numero inteiro:\n");
	scanf ("%i", &numero);
	
	
	if(numero >= 0){
		do{
			cifra = numero % 10;
			printf ("%i ", cifra);
			numero /= 10;
		}
		while(numero != 0);
			printf ("\n");
		
	}
	else if (numero < 1){
		numero = numero * - 1;
		printf("-");
		
		do{
			cifra = numero % 10;
			printf ("%i ", cifra);
			numero /= 10;
		}
		while(numero != 0);
			printf ("\n");
		
			printf("-");
		
	}
	
	return 0;
}