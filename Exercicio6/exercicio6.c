#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float b, h, a;
	
	printf("\n Informe a base do retangulo:");
	scanf("%f",&b);
	printf("\n Informe a altura do retangulo:");
	scanf("%f",&h);
	
	a = b*h;
	
	printf("\n A area do retangulo e: %.1f \n",a);
	system("PAUSE");
	
	return 0;
}
