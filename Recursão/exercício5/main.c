#include <stdio.h>
#include <locale.h>

void cp (int n) {
	if ( n < 0 ) return;
	cp (n - 1);
	printf("%d\n", n);
}

int main (void) {
	int n;
	printf(" ********** EXERC�CIO 5. CONTAGEM PROGRESSIVA **********\n\n\n", setlocale (LC_ALL,""));
	printf("N�mero desejado: ");
	scanf("%d", &n);
	cp(n);
	
	system("pause");
	return 0;
}
