#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//(limpesa de buffer);
	
	char a,b,c;
	
	a = getchar();
	limparbuffer();
	b = getchar();
	limparbuffer();
	c = getchar();
	limparbuffer();
	
	
	printf("%c",a );		
	printf("%c",b );
	printf("%c",c );
	
	
	return 0;
}

void limparbuffer(void){
	char c;
	
	while((c = getchar()) != '\n' && c != EOF);
}


