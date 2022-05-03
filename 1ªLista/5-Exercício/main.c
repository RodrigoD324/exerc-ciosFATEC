#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

int main(void) {
	srand (time(NULL));
	int c, n = rand() %10;
	printf("\n ****** EXERCÍCIO 5. ADIVINHAÇÃO ******\n\n", setlocale(LC_ALL,""));
	do {
			printf("Chute entre 0 e 9: ");
			scanf("%d", &c);
			if( c < n ) puts("Baixo!");
			else if( c > n ) puts("Alto!");
	}	while ( n!=c );
	puts ("Acertou!");
	
	system("pause");
	return 0;
}
