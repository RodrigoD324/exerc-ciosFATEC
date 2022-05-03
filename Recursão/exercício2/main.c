#include <stdio.h>
#include <locale.h>

float pot (float x , int n) {
	if ( n == 0) return 1;
	return x * pot (x ,n-1);
}

int main (void) {
	float x;
	int n;
	printf(" ********** EXERCÍCIO 2. CÁLCULO DE POTÊNCIA **********\n\n\n", setlocale(LC_ALL, ""));
	printf("Base: ");
	scanf("%f", &x);
	printf("Expoente: ");
	scanf("%d", &n);
	printf("\nPotência = %.1f\n", pot (x , n));
	
	system ("pause");
	return 0;
}
