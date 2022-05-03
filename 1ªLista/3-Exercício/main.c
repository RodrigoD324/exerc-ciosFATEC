#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {
	int n, f, i;
	printf("\n ****** EXERCÍCIO 3. FATORIAL DE NÚMERO NATURAL ******\n\n",setlocale(LC_ALL,""));
	printf("Número? \n");
	scanf("%d", &n);	
	f = 1;
	for ( i=1; i<=n; i++) f *= i;
	printf("Fatorial: %d\n", f);
	
	system ("pause");
	return 0;
}
