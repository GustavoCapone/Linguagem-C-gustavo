#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct horario{
	int horas;
	int minutos;
	int segundos;
};

int main(int argc, char *argv[]) {
	
	struct horario agora,  *depois;
	depois  =  &agora;
	
	
	// existe duas formas de se mecher com ponteiros.
	(*depois).horas = 20;
	depois->minutos = 10;
	(*depois).segundos = 45;
	
	printf("%i:%i:%i", agora.horas,agora.minutos,agora.segundos);
	
	
	
	
	getchar();
	return 0;
}