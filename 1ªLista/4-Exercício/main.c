#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {
	int n;
	printf("\n ****** EXERC�CIO 4. SOMA DE D�GITOS ******\n\n",setlocale (LC_ALL,""));
	printf("N�mero? \n");
	scanf("%d", &n);
	int s = 0;
	while ( n > 0 ) {
		s += n%10;
		n /= 10;
	}
	printf("Soma dos d�gitos = %d\n" ,s);
	
	system("pause");
	return 0;
}
