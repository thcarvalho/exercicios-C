#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int ano_atual, ano_nasc, ano2050, idade;
	
	printf("\n Informe seu ano de nascimento:");
	scanf("%d",&ano_nasc);
	printf("\n Informe o ano atual:");
	scanf("%d",&ano_atual);
	
	idade = ano_atual - ano_nasc;
	ano2050 = 2050 - ano_nasc;
	
	printf("\n Voce tem %d anos de idade \n",idade);
	printf("\n Em 2050 voce tera %d anos \n",ano2050);
	system("PAUSE");
	
	return 0;
}
