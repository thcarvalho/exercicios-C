#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float a,h,r;
	
	printf("Informe o raio desta lata: ");
	scanf("%f",&r);
	printf("Informe a altura desta lata: ");
	scanf("%f",&h);
	
	a = 2*3.14*r*(r+h);
	
	printf("A area externa dessa lata é: %.1f\n",a);
	system("PAUSE");
	
	return 0;
}
