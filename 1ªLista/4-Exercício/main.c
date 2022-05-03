#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {
	int n;
	printf("\n ****** EXERCÍCIO 4. SOMA DE DÍGITOS ******\n\n",setlocale (LC_ALL,""));
	printf("Número? \n");
	scanf("%d", &n);
	int s = 0;
	while ( n > 0 ) {
		s += n%10;
		n /= 10;
	}
	printf("Soma dos dígitos = %d\n" ,s);
	
	system("pause");
	return 0;
}
