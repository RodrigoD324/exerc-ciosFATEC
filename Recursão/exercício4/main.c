#include <stdio.h>
#include <locale.h>

float h (int n) {
	if (n == 1) return 1;
	return h(n - 1) + 1.0/n;
}

int main (void) {
	int n;
	printf(" ********** EXERC�CIO 4. C�LCULO DE S�RIE HARM�NICA **********\n\n\n", setlocale (LC_ALL,""));
	printf("N�mero desejado: ");
	scanf("%d", &n);
	printf("\nHarm�nica = %.2f\n", h(n));
	
	system("pause");
	return 0;
}
