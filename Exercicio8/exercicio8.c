#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int x,n,calc;
	
	printf("\n Informe o valor de N:");
	scanf("%d",&n);
	printf("\n Informe o valor de X:");
	scanf("%d",&x);
	
	calc = pow((x*n),2);
	
	printf("\n O valor de x*n ao quadrado e igual a: %d \n",calc);
	
	system("PAUSE");

	return 0;
}
