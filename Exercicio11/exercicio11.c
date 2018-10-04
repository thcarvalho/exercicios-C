#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float cm, dm, m, mm;
	
	printf("Informe a medida em centimetros:");
	scanf("%f",&cm);
	
	m = cm/100;
	dm = m*10;
	mm = cm*10;
	
	printf("\n Essa medida em metros é: %.1f m ,\n em decimetros é: %.1f dm,\n e em milimetros é: %.1f mm",m,dm,mm);
	system("PAUSE");
		
	return 0;
}
