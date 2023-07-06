#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
/*	
	int num = 51;
	
	for(int cont = 0; cont < num; ++cont){
		printf("%i - ", cont);
	}
	
	int idades;
	int soma_idades=0;
	int qtde_idades;  //5
	int cont;
	float media;
	
	printf("Digite a quantidade de idades:");
	scanf("%d", &qtde_idades);
	for(cont = 1;cont <= qtde_idades;++cont){
		printf("Entre com a idade %d : ",cont);
     scanf("%d", &idades);
     soma_idades = soma_idades + idades;
	}
	media = soma_idades / qtde_idades;
	printf ("\n A media de idades é de : %.1f", media);
	*/


int alunos;
int bimestres = 4;
	
float notaaluno[alunos][bimestres];
float mediaaluno[alunos];

float media = 0;

	printf("Digite a quantidade de Alunos:");
	scanf("%d", &alunos);
	
	printf("Digite as quatro notas do aluno 1 : \n");
	for(int aluno = 0; aluno < alunos;++aluno){
		for(int nota = 0;nota < bimestres; ++nota){
			scanf("%f", &notaaluno[aluno][nota]);
			media += notaaluno[aluno][nota];
		}
		mediaaluno[alunos] = media / bimestres;
		media =0;
		printf("Insira as 4 notas do aluno %i: \n", aluno +2);
	}
	for(int aluno = 0; aluno < alunos; ++aluno){
			printf("A media do aluno %i é %.2f\n", aluno +1, mediaaluno[aluno]);
	}
	
	return 0;
}