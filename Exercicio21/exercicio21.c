#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	char senha[5];
	
	printf("Digite a senha:");
	scanf("%s",&senha);
	
	if(strcmp(senha,"asdfg")==0){
		printf("\nSenha valida");
	}else{
		printf("\nSenha invalida");
	}

	return 0;
}
