#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void barras (int v[], int n) {
	int i;
	int j;
	for ( i=0 ; i<n ; i++ ) {
		for (j=0 ; j<v[i] ; j++ ) 
			putchar (220);
		putchar ('\n');
	}
}

int main(void) {
	printf("\n ****** EXERCÍCIO 7. GRÁFICO DE BARRAS ******\n\n", setlocale(LC_ALL,""));
	int a[3] = {9 , 3 , 7};	
	int b[4] = {4 , 3 , 2 , 1};
	barras (a, 3);
	getchar();
	barras (b, 4);

	system("pause");
	return 0;
}
