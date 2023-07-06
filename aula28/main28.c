#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	struct horario{
		int *pHora;
		int *pMinuto;
		int *pSegundo;
	};
	
	struct horario hoje;
	int hora = 18;
	int minuto = 33;
	int segundo  = 27;
	
	hoje.pHora = &hora;
	hoje.pMinuto = &minuto;
	hoje.pSegundo = &segundo;
	
	printf("Hora - %i\n", *hoje.pHora);
	printf("Minuto - %i\n", *hoje.pMinuto);
	printf("Segundo - %i\n", *hoje.pSegundo);
	
	printf("****************************\n");
	
	printf("Hora - %i\n", hoje.pHora);
	printf("Minuto - %i\n", hoje.pMinuto);
	printf("Segundo - %i\n", hoje.pSegundo);
	
	printf("****************************\n");
	
	*hoje.pSegundo = 100;
	
	printf("Segundo - %i\n", *hoje.pSegundo);
	
	return 0;
}