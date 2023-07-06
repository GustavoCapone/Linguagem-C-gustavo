#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	struct horario{
	int horas;
	int minutos;
	int segundos;	
	};
	
	struct horario agora;
	agora.horas = 10;
	agora.minutos = 20;
	agora.segundos = 30;
	
	printf("%i:%i:%i\n", agora.horas,agora.minutos,agora.segundos);
	
	
	
	system("pause");
	return 0;
}