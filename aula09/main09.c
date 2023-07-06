#include <stdio.h>
//#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	const int alunos = 4;
	const int bimestres = 4;
	
	
	float notaAlunos[alunos][bimestres];
	float mediaAlunos[alunos];
	
	float media = 0;
	
		
	printf("Digite as quatro notas do aluno 1 : \n");

	
	for(int aluno = 0; aluno < alunos; ++aluno){
		for (int notas = 0; notas< bimestres; ++notas){
			scanf("%f", &notaAlunos[aluno][notas]);
			media += notaAlunos[aluno][notas];
		}
		mediaAlunos[aluno] = media / bimestres;
		media = 0;
		printf("Insira as 4 notas do aluno %i: \n", aluno +2);
	}
	for(int aluno = 0; aluno < alunos; ++aluno){
			printf("A media do aluno %i é %.2f\n", aluno +1, mediaAlunos[aluno]);
	}
	
	

	return 0;
}