#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	void alfabetico(char variavel);

	char nome[20];
	printf("Digite uma unica palavra: ");
	scanf("%s", nome);
	
	int i = 0;
	
	while(nome[i] != '\0'){
		alfabetico(nome[i]);
		++i;
	}
	
	system("pause");
	return 0;
}
	void alfabetico(char variavel){
		if((variavel >= 'a' && variavel <= 'z') || (variavel >= 'A' && variavel <= 'Z')){
			printf("E uma letra!\n");
		}else{
			printf("noa e uma letra!\n");
		}
	}


