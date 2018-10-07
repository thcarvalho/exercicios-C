#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float alt,lar,com,ar,vol,dia,per;
	
	printf("Digite o valor da altura:");
	scanf("%f",&alt);
	printf("Digite o valor da largura:");
	scanf("%f",&lar);
	printf("Digite o valor do comprimento:");
	scanf("%f",&com);
	
	ar = 2*(com * alt + com * lar + lar * alt);
	per = 4*(lar + alt + com);
	vol = com * alt * lar;
	dia = sqrt(pow(lar,2) + pow(alt,2) + pow(com,2));
	
	printf("\nA area desse paralelepipedo é igual a: %.1f",ar);
	printf("\nO perimetro desse paralelepipedo é igual a: %.1f",per);
	printf("\nO volume desse paralelepipedo é igual a: %.1f",vol);
	printf("\nA diagonal desse paralelepipedo é igual a: %.1f\n",dia);
	system("PAUSE");
	
	return 0;
}
