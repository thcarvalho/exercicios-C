#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	float s,h,m;

	printf("Informe o tempo em segundos:");
	scanf("%f",&s);
	
	h = s/3600;
	m = s/60;
	
	if(m >= 60){
		m-=(60*h);
}
	printf("\nEsse valor corresponde a: %.0fh%.0fm",h,m);
	system("PAUSE");
	
	return 0;
}
