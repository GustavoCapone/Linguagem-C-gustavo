#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int fatorial = 5;
	int resultado = 1;
	
	for( ; fatorial >= 1 ; --fatorial){
		resultado  =  resultado * fatorial ;
		printf ("%i\n", resultado);
	
	}
	printf ("%i\n", resultado);
	
	printf ("****************Ciclo While*********************************\n");
	
	int i = 0;
	
	while(i != 0 && i != 4){
		printf ("teste");
	}
	
		printf ("****************Ciclo Do While*********************************\n");
	do{
		printf ("teste123445656");
	}while(i != 0);
		
		printf ("****************if else|| swith*********************************\n");
		
		
		int idade;
		char s;
		
		printf("Escreva a sua idade:\n");
		scanf ("%i", idade);
	
	if(idade >= 18){
		printf("Você tem idade maior ou igual a 18 anos? |digite (s) para sim| ou |(n) para Não|\n");
			scanf ("%c", s);
		switch (s){
			case 's':
				printf ("Tudo ok por aqui pode continuar seu caminho\n");
				break;
		
			case 'n':
				printf ("Você quem sabe, tu que e o adulto aqui");
				break;	
				}
	}
	else{
	 		printf ("Você tem menos de 18 anos");
	
	}
	
	return 0;
}