#include <stdio.h>
#include <locale.h>

int termial (int n) {
	if ( n == 0 ) return 0;
	return termial (n - 1) + n;
}

int main (void) {
	int n;
	printf(" ********** EXERCÍCIO 3. CÁLCULO DE TERMIAL **********\n\n\n", setlocale (LC_ALL,""));
	printf("Número desejado: ");
	scanf("%d", &n);
	printf("\nTermial = %d\n", termial(n));
	
	system("pause");
	return 0;
}

