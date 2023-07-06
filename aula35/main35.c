#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *file;
	file = fopen("teste.txt", "a");
	
	if(file == NULL){
		printf("Arquivo nao pode ser aberto");
		getchar();
		exit(1);

	}
	fprintf(file, "primeira linha\n");
	
	char frase[] = "segunda linha";
	fputs(frase, file);
	
	char caractere = '3';
	fputc(caractere, file);
	
	fclose(file);
	

	
	return 0;
}