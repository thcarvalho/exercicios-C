#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1, n2, n3, n4, med;
	char aluno[40];
	
	printf("\n Digite o nome do aluno: ");
	scanf("%s",&aluno);
	
	printf("\nDigite a nota do 1o bimestre:");
	scanf("%f",&n1);
	printf("\nDigite a nota do 2o bimestre:");
	scanf("%f",&n2);
	printf("\nDigite a nota do 3o bimestre:");
	scanf("%f",&n3);
	printf("\nDigite a nota do 4o bimestre:");
	scanf("%f",&n4);
	
	med = (n1+n2+n3+n4)/4;
	
	printf("\n A nota media do aluno %s foi: %.1f \n",aluno,med);
	system("PAUSE");
	
	return 0;
}
