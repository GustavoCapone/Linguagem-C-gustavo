#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float notas[5] = {0};
	float total = 0;
	float media = 0;
	
	printf("insira 5 notas: \n");
	
	for(int i = 0 ; i < 5 ; ++i){
		scanf("%f", &notas [i]);
	}
	
		for(int i = 0 ; i < 5 ; ++i){
			total += notas [i];
	}
	
	media = total / 5;
	
	printf("A media do aluno e igual a : %f ",media);
	
	return 0;
}