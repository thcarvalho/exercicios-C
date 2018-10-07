#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, c;
	
	printf("Digite o valor de A:");
	scanf("%d",&a);
	printf("Digite o valor de B:");
	scanf("%d",&b);	
	
	c = b;
	b = a;
	a = c;
	
	printf("\nO valor de A é: %d,\ne o valor de B agora é: %d\n",a,b);
	system("PAUSE");

	return 0;
}
