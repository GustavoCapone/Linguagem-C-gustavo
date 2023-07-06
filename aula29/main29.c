#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	void testeVariavel(int x);
	void testePonteiro(int *pX);
	int teste = 1;
	int *pTeste = &teste;
	
	testeVariavel(teste);
	testePonteiro(pTeste);
	
	
	printf("%i\n", teste);
	
	
	
	
	return 0;
}
	void testeVariavel(int x){
		++x;
	}
	void testePonteiro(int *pX){
		++*pX;
	}