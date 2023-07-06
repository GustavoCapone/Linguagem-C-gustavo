#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Comentario!
	printf ("Ola mundo.\n");
	printf ("Ola mundo.\n");
	printf ("Ola mundo.");
	printf ("Ola mundo.\n");

	printf ("**************************\n");
	
	int minhaidade;
	minhaidade =20;
	int paiidade = 50;
	int idademae = 30;
	
	printf("A idade do meu pai e = %i.\n", paiidade);
	printf("Minha Idade e = %i.\n", minhaidade);
	printf("A idade do meu pai e = %i,  e a minha e = %i.\n",paiidade,minhaidade);
	
	int idadetotal = minhaidade + paiidade + idademae;
	
	printf("idade total e = %i.\n",idadetotal);
	
	
	printf ("**************************\n");
	
	
	int base;
	int altura;
	int area;
	
	printf ("Digite o valor da base: ");
	scanf ("%i", &base);
	printf ("Digite o valor da altura: ");
	scanf ("%i", &altura);
	
	area = base * altura;
	
	printf ("O valor da area do retangulo e igual: %i\n", area);
	
	int inteiro  = 10;
	float decimal = 10.59;
	char caractere = 'a';
	double numero = 10.2;
	
	printf ("%i\n",inteiro);
	printf ("%f\n",decimal);
	printf ("%c\n", caractere);
	printf ("%d\n", numero);
	
	printf ("**************************\n");
	int num1 = 5;
	int num2 = 2;
	float result1 = num1 / num2;
	
	printf ("%f\n", result1);
	
	printf ("**************************\n");
	
	int contador;
	int numerico = 1;
	
	for(contador = 1; contador <= 5; contador ++){
		printf ("%i\n", numerico);
	}
	
	
	printf ("**************************\n");
	
	int valor = 1;
	
	while(valor <= 5 ){
		printf ("%i\n", valor);
		++valor;
	}
	return 0;
}