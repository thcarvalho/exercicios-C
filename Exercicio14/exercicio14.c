#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");	
	
	float v,r;
	
	printf("Informe o valor do raio da esfera: ");
	scanf("%f",&r);
	
	v = (4 * 3.14 *(pow(r,3)))/3;
	
	printf("O volume desta esfera é igual a: %.2f\n",v);
	system("PAUSE");
	
	return 0;
}
