#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct dicionario{
	char palavra[20];
	char definicao[50];
};

bool compararString(const char palavra1[], const char palavra2[]){
	int i = 0;
	while(palavra1[i] == palavra2[i] && palavra1[i] != '\0' && palavra2[i] != '\0'){
		++i;
	}
	
	if(palavra1[i] != '\0' && palavra2[i] != '\0'){
		return true;
	}else{
		return false;
	}	
}
int procurarString(const struct dicionario lingua[], const char procurar, const int numDePalavras){
	bool compararString(const char palavra1[], const char palavra2[]);
	
	int i = 0;
	
	while (i < numDePalavras){
		
		if(compararString(procurar, lingua[i].palavra)){
			return i;
		}else{
			++i;	
		}
	}
	return -1;
}


int main(int argc, char *argv[]) {
	int procurarString(const struct dicionario lingua[], const char procurar, const int numDePalavras);
	
	const int NUMERODEDEFINICOES = 7;
	char palavra[20] = {'\0'};
	int resultadoPesquisa;
	
	const struct dicionario == portugue[NUMERODEDEFINICOES] =
	{{"PAO","COM MORTADELA FICA TOP"},
	{"MORATADELA","CARNE BARATA"},
	{"QUEIJO"," MINEIRO DA VAQUINHA"},
	{"MADEIRA","TRONCOS DE ARVORE"},
	{"PICANHA","CARNE DE VACA"},
	{"REDE","TECIDO"},
	{"CASA","CIMENTO"}};
	
	printf("Digite uma palavra: \n");	
	scanf("%s",palavra);
	
	resultadoPesquisa = procurarString(portugues, palavra, NUMERODEDEFINICOES);
	
	if(resultadoPesquisa != -1){
		printf("%s\n", portugues[resultadoPesquisa].definicao);
	}else{
		printf("palavra nao encotrada!");
	}
	
	
	system("pause");	
	return 0;
}