#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	struct horario{
		int horas;
		int minutos;
		int segundos;
	};
	
	struct horario agora, *depois;
	depois = &agora;
	
	//duas formas de se chamar ponteiros.
	(*depois).horas = 20;
	depois->minutos = 10;
	depois->segundos = 45;
	
	printf("As horas do struct sao: %i:%i:%i \n", agora.horas, agora.minutos, agora.segundos);
	
	int somatorio = 100;
	
	struct horario antes;
	
	antes.horas = somatorio - depois->segundos;
	antes.minutos = agora.horas * depois->horas;
	antes.segundos = somatorio + agora.minutos;
	
	printf("As horas do antes sera de : %i:%i:%i \n",antes.horas, antes.minutos, antes.segundos);
	
	
	return 0;
}