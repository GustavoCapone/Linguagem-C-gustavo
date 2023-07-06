#include <stdio.h>
#include <stdlib.h>
#define SIM 100
#define NAO -100


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	printf("digite um numero inteiro: ");
	scanf("%i\n", &x);
	
	if(x <= 10){
		printf("%i\n", NAO);
	}else{
		printf("%i\n", SIM);	
	}
	
	return 0;
}