#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float mul,kg;
	
	printf("Informe o peso total dos peixes:");
	scanf("%f",&kg);
	
	if(kg <= 50){
		printf("\nN�o haver� multa\n");
	}else{
		mul = (kg - 50)*4;
		printf("\nA multa a ser cobrada � de: %.1f reais\n",mul);
	}
	system("PAUSE");
	
	return 0;
}
