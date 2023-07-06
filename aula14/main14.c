#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vetor[10] = {6,5,8,1,4,2,3,9,7,0};
	int i;
	
	void ordemCrescente(int vetor[], int n);
	ordemCrescente(vetor, 10);
	
	for(i = 0; i < 10 ; ++i){	
	printf("%i ", vetor[i]);
}
	system("pause");
	return 0;
}

void ordemCrescente(int vetor[], int n){
	int j , i, temporario;

	for(i = 0; i < n ; ++i){
		for(j = i + 1 ; j < n; ++j){
			if(vetor[i] > vetor[j]){
				temporario = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = temporario;
			}
		}
	}




}
