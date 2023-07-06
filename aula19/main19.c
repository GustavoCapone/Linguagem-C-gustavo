#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct horario{

	int horas;
	int minutos;
	int segundos;

};
int main(int argc, char *argv[]) {
	
	void receberHorarios(struct horario lista[5]);
	void printfHorarios(struct horario lista[5]);
	struct horario listaHorarios[5];
	
	receberHorarios(listaHorarios);
	printfHorarios(listaHorarios);
	
	system("pause");
	return 0;
}

	void receberHorarios(struct horario lista[5]){
	int i;
	for(i = 0;i < 5 ; ++i){
		printf("Digite o %i horario(hh:mm:ss):", i +1);
		scanf("%i:%i:%i",   &lista[i].horas,
							&lista[i].minutos,
							&lista[i].segundos);
		}//10:12:13
	}
	void printfHorarios(struct horario lista[5]){
	int i;
	for(i = 0;i < 5 ; ++i){
		printf("O %i horario e' = %i:%i:%i", i +1,   &lista[i].horas,
													&lista[i].minutos,
													&lista[i].segundos);
	}
}