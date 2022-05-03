#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float media (float v[] , int n) {
	float s = 0;
	int i;
	for ( i=0 ; i<n ; i++ )
		s += v[i];
	
	return s/n;
}

int main(void) {
	int n;
	printf("\n ****** EXERC�CIO 12. M�DIA DE UMA SEQU�NCIA DE N�MEROS ******\n\n", setlocale (LC_ALL, ""));
	printf("Quantidade de N�meros? ");
	scanf("%d", &n);
	float *v = malloc(n*sizeof(float));
	int i;
	for ( i=0 ; i<n ; i++ ) {
		printf("%d� n�mero? ", i+1);
		scanf("%f", &v[i]);
	}
	printf("M�dia = %.2f\n", media(v,n));
	
	system("pause");
	return 0;
}
