#include <stdio.h>
#include <locale.h>

float h (int n) {
	if (n == 1) return 1;
	return h(n - 1) + 1.0/n;
}

int main (void) {
	int n;
	printf(" ********** EXERCÍCIO 4. CÁLCULO DE SÉRIE HARMÔNICA **********\n\n\n", setlocale (LC_ALL,""));
	printf("Número desejado: ");
	scanf("%d", &n);
	printf("\nHarmônica = %.2f\n", h(n));
	
	system("pause");
	return 0;
}
