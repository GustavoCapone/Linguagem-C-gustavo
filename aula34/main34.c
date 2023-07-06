#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *file;
	file = fopen("C:\\Users\\nti\\Desktop\\teste.txt", "w"); //(r) =  a ler um arquivo, (w) = sobescreve o arquivo , (a) = alterar arquivo(adicionar);
	
//	scanf("%")
	
	fprintf(file,"jacare.\n");
	fprintf(file,"30.\n");
	fprintf(file,"falso.\n");
	fclose(file);
		
	
	
	
	system("pause");
	return 0;
}