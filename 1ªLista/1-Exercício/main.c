#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main (void) {
	float p, a, i;
	
	printf("\n****** EXERC�CIO 1. �NDICE DE MASSA CORPORAL ******\n\n",setlocale(LC_ALL,""));
	printf("O �ndice de massa corporal de uma pessoa � o seu peso dividido pelo quadrado de sua altura.\n\n") ;
	
	printf("Peso e altura? \n");
	scanf("%f %f", &p, &a);
	i = p/pow(a,2);
	printf("IMC = %.2f\n",i);
	
	system ("pause");
	return 0;
}

