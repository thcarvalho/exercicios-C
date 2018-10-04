#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	int dep;
	float VHora,HoraT,Bru,Liq;
	
	printf("\n Informe o numero de dependentes:");
	scanf("%d",&dep);
	printf("\n Digite o custo por hora de seu trabalho:");
	scanf("%f",&VHora);
	printf("\n Digite sua carga horaria mensal:");
	scanf("%f",&HoraT);
	
	Bru = VHora * HoraT;
	Liq = (dep * 300) + Bru;
	
	printf("\n O valor de seu salario bruto e: %.2f \n",Bru);
	printf("\n O valor de seu salario liquido e: %.2f \n",Liq);
	system("PAUSE");
		
	return 0;

}
