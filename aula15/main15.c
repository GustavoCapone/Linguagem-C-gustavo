#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	void funcaoPrint(int x , int vetor[]);
	int x  = 10;
	 int vetor [3] = {10};
	
	funcaoPrint(x, vetor);
	
	printf("Variavel inteira na funcao principal = %i \n", x);
	printf("Vetor na funcao principal = %i \n \n",vetor[1]);
	system("pause");
	return 0;
}
void funcaoPrint(int x, int vetor[]){
	x = x +10;
	vetor[1] = 20;
	
	
	printf("Variavel inteira na funcao principal = %i \n", x);
	printf("Vetor na funcao principal = %i \n \n",vetor[1]);
	
	
}
//