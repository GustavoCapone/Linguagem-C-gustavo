#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char x [10];
	char y [10];

	gets(x);

	printf("%s", x);
	printf("************************************************");

	puts("\n mortadela\n");
	
		printf("************************************************");
		
	char alfa[10];
	
	int i  = 0;
	
	while((x[i] = getchar()) != '\n' && i < 8){
		++i;
	}
	
	x[++i] = '\0';
	
	x[0] = getchar();
	
	printf("%s", alfa);
	
	
	
	
	
	return 0;
}