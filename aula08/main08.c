#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Matriz
int main(int argc, char *argv[]) {
	
	int matriz [3][3] =  {{1,2,3},
						 {4,5,6},
						 {7,8,9}};
						 
	printf("%i", matriz [0][0]);
	printf("%i", matriz [0][1]);
	printf("%i", matriz [0][2]);
	printf("%i", matriz [1][0]);
	printf("%i", matriz [1][1]);
	printf("%i \n", matriz [1][2]);
	
	//usando for em matrizes
	
	int matriz2 [5][5] =  {{1,2,3,4,5},
						  {6,7,8,9,10},
						  {11,12,13,14,15},
						  {16,17,18,19,20},
				          {21,22,23,24,25}};
						 
						 
	for(int i = 0; i < 5;++i){
		for(int m = 0; m < 5 ; ++m){
			
			printf (" %i ", matriz2 [i] [m]);
		}
		printf("\n ");
	
		}
	
	
	return 0;
}