#include <stdio.h>
#include <locale.h>
#include <math.h>

int fat (float n) {
	float f = 1;
	float i;
	for (i=1 ; i<=n ; i++) f *= i;
	
	return f;
	}
	
int main (void) {
	printf("\n ****** EXERCÍCIO 6. A FUNÇÃO FATORIAL ******\n\n", setlocale (LC_ALL,""));
	printf("Fatorial do 5: %d\n", fat(5684));
	
	system ("pause");
	return 0;
}
