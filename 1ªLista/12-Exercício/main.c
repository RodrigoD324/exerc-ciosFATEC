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
	printf("\n ****** EXERCÍCIO 12. MÉDIA DE UMA SEQUÊNCIA DE NÚMEROS ******\n\n", setlocale (LC_ALL, ""));
	printf("Quantidade de Números? ");
	scanf("%d", &n);
	float *v = malloc(n*sizeof(float));
	int i;
	for ( i=0 ; i<n ; i++ ) {
		printf("%dº número? ", i+1);
		scanf("%f", &v[i]);
	}
	printf("Média = %.2f\n", media(v,n));
	
	system("pause");
	return 0;
}
