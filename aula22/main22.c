#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	void alfabetico(char variavel);

	char linha[100];
	char caracter;
	int i = 0;
	
	
	
	do{
		caracter = getchar();
		linha[i] = caracter;
		++i;
	}while(caracter != '\n');
	
	printf("%s\n", linha);
	
	system("pause");
	return 0;
}

