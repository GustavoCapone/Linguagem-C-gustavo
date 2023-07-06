#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	struct dia{
	int horas;
	int minutos;
	int segundos;
	double teste;	
	char letra;
	};
	
	
	struct dia hoje;
	
	hoje.horas = 15;
	hoje.minutos = 30;
	hoje.segundos = 45;
	
	
	struct dia depois;
	depois.horas = hoje.horas +10;
	depois.minutos = hoje.minutos;
	depois.teste = 50.55 / 123;
	depois.letra = 'a';
	
	printf("%i:%i:%i \n" ,hoje.horas,hoje.minutos,hoje.segundos);
	
	printf("%i \n",depois.horas);
	printf("%i \n",depois.minutos);
	printf("%i \n",depois.teste);
	printf("%i \n",depois.letra);
	
	
	system("pause");
	return 0;
}