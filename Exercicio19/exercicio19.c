#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float a,b,c,delta,x1,x2;
	
	printf("Informe o valor de A:");
	scanf("%f",&a);
	printf("Informe o valor de B:");
	scanf("%f",&b);
	printf("Informe o valor de C:");
	scanf("%f",&c);
	
	delta = pow(b,2)-4*a*c;
	
	x1 = (-b+(sqrt(delta)))/2*a;
	x2 = (-b-(sqrt(delta)))/2*a;
	
	if(delta < 0){
		printf("O valor das raizes é invalido\n");
	}else{
	
	printf("\nO valor de x1 é igual a: %.1f",x1);
	printf("\nO valor de x2 é igual a: %.1f\n",x2);
	}
	system("PAUSE");

	return 0;
}
