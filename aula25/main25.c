#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	
	int x= 10;
	double z = 20.50;
	char c = 'a';
	
	int *p1;
	p1 = &x;
	double *p2 = &z;
	char *p3 = &c;
	
	int *resultado; 
	
	resultado = 6684156;
	
	printf("o valor do endereço e = %i\n", *resultado);
	
	double soma =  *p1 + *p2;
	
	printf("valor de p1 e p2 e = %f\n", soma);
	
	printf("Endereço de x = %i -- valor x = %i\n", p1, *p1);
	printf("Endereço de z = %i -- valor z = %f\n", p2, *p2);
	printf("Endereço de c = %i -- valor c = %c\n", p3, *p3);
	
	
	
	
	
	
	 
	
	
	getchar();
	return 0;
}