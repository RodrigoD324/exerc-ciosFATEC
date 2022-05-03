#include <stdio.h>
#include <locale.h>

void binario (int n) {
	if ( n < 2 ) printf("%d", n);
	else {
		binario ( n / 2 );
		printf("%d", n%2);
	}
}

int main (void) {
	int n;
	printf(" ********** EXERC�CIO 7. CONVERS�O EM BIN�RIO **********\n\n\n", setlocale (LC_ALL,""));
	printf("N�mero desejado: ");
	scanf("%d", &n);
	printf("\n");
	binario(n);
	printf("\n\n");
	
	system("pause");
	return 0;
} 
