#include <stdio.h>
#include <locale.h>

int termial (int n) {
	if ( n == 0 ) return 0;
	return termial (n - 1) + n;
}

int main (void) {
	int n;
	printf(" ********** EXERC�CIO 3. C�LCULO DE TERMIAL **********\n\n\n", setlocale (LC_ALL,""));
	printf("N�mero desejado: ");
	scanf("%d", &n);
	printf("\nTermial = %d\n", termial(n));
	
	system("pause");
	return 0;
}

