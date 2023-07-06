#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	struct horario {
		int horas;
		int minutos;
		int segundos;
	};


int main(int argc, char *argv[]) {
	
	struct horario teste(struct horario x);
	

	
	struct horario agora;
	agora.horas = 10;
	agora.minutos = 47;
	agora.segundos = 30;
	
	struct horario proxima;
	proxima = teste(agora);	
	
	printf("%i:%i:%i\n",proxima.horas,proxima.minutos,proxima.segundos);
	
	
	system("pause");
	return 0;
}

	struct horario teste(struct horario x){
	
	printf("%i:%i:%i\n",x.horas,x.minutos,x.segundos);
	
	
	x.horas = 100;
	x.minutos =100;
	x.segundos = 100;
	
	return x;
}