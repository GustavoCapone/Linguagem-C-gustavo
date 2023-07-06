#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	_Bool stringsIguais(char s1[], char s2[]);
	
	if(stringsIguais("casah", "casa")){
		printf("sao iguais.\n");
	}else{
		printf("nao sao iguais.\n");
	}
	
	system("pause");
	return 0;
}
	_Bool stringsIguais(char s1[], char s2[]){
		
		int i   = 0;
		
		while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'){
			++i;
		}
		
		if(s1[i] == '\0' && s2[i] == '\0'){
			return 1;
		}else{
			return 0;
		}
		
	}