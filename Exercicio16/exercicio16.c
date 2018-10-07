#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int num,suc,ant;
	
	printf("Digite um numero:");
	scanf("%d",&num);
	
	suc = ++num;
	ant = num-=2;
	
	printf("\nO sucessor desse numero é: %d,\ne o antecessor é: %d\n",suc,ant);
	system("PAUSE");
	
	return 0;
}
