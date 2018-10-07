#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int anonasc,anoat,idade;
	
	printf("Informe o seu ano de nascimento:");
	scanf("%d",&anonasc);
	printf("\nInforme o ano atual:");
	scanf("%d",&anoat);
	
	idade = anoat - anonasc;
	
	if(idade >= 18){
		printf("\nVocê é maior de idade\n");
	}else{
		printf("Você é menor de idade\n");
	}
	system("PAUSE");

	return 0;
}
