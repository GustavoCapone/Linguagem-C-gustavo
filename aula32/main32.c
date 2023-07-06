#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int somarVetor(int vetor[], const int n){
	
	int soma = 0;
	int *ponteiro;
	int *const finalVetor = vetor + n;
	
	for (ponteiro = vetor; ponteiro < finalVetor;++ponteiro){
		soma += *ponteiro;
	}
	return soma;
}

int main(int argc, char *argv[]) {
	
	int somarVetor(int vetor[], const int n);
	int vetor[10] = {5,5,5,5,5,5,5,5,5,5};
	
	printf("A soma dos membros do vetor = %i", somarVetor(vetor, 10));
	
	
	
	
	return 0;
}