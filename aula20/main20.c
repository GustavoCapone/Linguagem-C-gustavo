#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	 int TamanhoString(char string[]);
	 char stringUsuario[20];
	 
	 printf("digite uma palavra string :\n");
	 scanf("%s", stringUsuario);
	 
	 int num = tamanhoString(stringUsuario);
	 
	 printf("A string %s possui %i caracteres. \n", stringUsuario , num);
	 
	system("pause");
	return 0;
}

int tamanhoString(char string[]){
	
	int numCaracter = 0;
	
	while(string[numCaracter] != '\0'){
		++numCaracter;
	}
	
	return numCaracter;
	
}