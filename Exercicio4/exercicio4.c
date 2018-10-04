#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	
	float saldo, juros;
	
	saldo = 500 * pow((1 + 0.01),3);
	
	printf("\n O saldo apos 3 meses sera: %.2f reais \n",saldo);
	system("PAUSE");
	
	return 0;

}
