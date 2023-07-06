#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {//inicio do programa
	 
	 float calculoRetangulo(float x, float y);
	 float area = calculoRetangulo(10.0, 20.0);
	 
	 printf("%f",area);
	 
	 
	 
	 
	return 0;
}//fim do programa


float calculoRetangulo(float base, float altura) {
	
	float area = base * altura;
	
	
}