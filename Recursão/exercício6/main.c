#include <stdio.h>
#include <locale.h>

void cr (int n) {
	if ( n < 0 ) return;
	printf("%d\n", n);
	cr (n - 1);
}

int main (void) {
	int n;
	printf(" ********** EXERC�CIO 6. CONTAGEM REGRESSIVA **********\n\n\n", setlocale (LC_ALL,""));
	printf("N�mero desejado: ");
	scanf("%d", &n);
	cr(n);
	
	system("pause");
	return 0;
}
