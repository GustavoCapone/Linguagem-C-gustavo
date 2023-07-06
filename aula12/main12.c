#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	float somaDeDigitos(float num1, float num2);
		
		int a , b, soma;
		
		printf("Digite 2 numeros: ");
	scanf ("%f",&a);
	scanf ("%f",&b);
	
	soma = somaDeDigitos (a,b);
	
	printf("A soma e %f", soma);
	
	return 0;
}


	float somaDeDigitos(float num1, float num2){
		
	float valorAbsoluto (float x);
	
	if(num1 < 0 ){
		num1 = valorAbsoluto(num1);
	}
	if(num2 < 0 ){
		num2 = valorAbsoluto(num2);
	}
	
	return num1 + num2;
}
	float valorAbsoluto(float x){
		
		
		return x *- 1;
	}
	
	