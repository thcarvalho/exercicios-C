#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float alt,pes;
	char sexo[9];
	
	printf("Informe sua altura:");
	scanf("%f",&alt);
	
	printf("Informe seu sexo:");
	scanf("%s",&sexo);
	
	if(strcmp(sexo,"masculino")==0){
		pes = (72.7*alt)-58;
	}else{
		pes = (62.1*alt)-44.7;
	}
	
	printf("Seu peso ideal é: %.1f\n",pes);
	system("PAUSE");
	
	return 0;
}
