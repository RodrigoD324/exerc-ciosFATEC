#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {
	float p, a, i;
	
	printf("\n****** EXERCÍCIO 2. ÍNDICE DE MASSA CORPORAL (continuação) ******\n\n",setlocale(LC_ALL,""));
	printf("O índice de massa corporal de uma pessoa é o seu peso dividido pelo quadrado de sua altura.\n\n") ;
	
	printf("Peso e altura? \n");
	scanf("%f %f", &p, &a);
	i = p/pow(a,2);
	printf("IMC = %.2f\n",i);
	
	if( i < 18.5 ) puts ("Magra");
	else if ( i > 30.0 ) puts ("Obesa");
	else puts ("Normal");
	
	system("pause");
	return 0;
}
