#include <stdio.h>
#include <locale.h>

int fat (int n) {
	if ( n == 0) return 1;
	return n * fat(n-1);
}

int main (void) {
	int n;
	printf(" ********** EXERC�CIO 1. C�LCULO DE FATORIAL **********\n\n\n", setlocale(LC_ALL, ""));
	printf("N�mero desejado: ");
	scanf("%d", &n);
	printf("\nFatorial de %d = %d\n", n, fat(n));

	system ("pause");
	return 0;
}
