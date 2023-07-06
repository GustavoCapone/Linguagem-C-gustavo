#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1 , num2;
	
	printf("digite dois numeros:\n");
	scanf ("%i %i",&num1,&num2);
	
	if(num2 == 0 || num1 == 0){
	
	printf ("Divisao por 0 não e permitido.\n");
}
	else{
		if(num1 % num2 ==0){
			printf("%i numero e divisivel por %i.\n", num1 , num2);
		}
		else{
			printf ("%i nao e divisivel por %i.\n",num1,num2);
		}
		
	}
	
	
	return 0;
}