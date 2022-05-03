#include <stdio.h>
#include <locale.h>

void troca (int x , int y) {
	int z = x;
	x = y;
	y = z;
}

int main(void) {
	int a = 5 , b = 8;
	troca (a,b);
	printf("\n ****** EXERCÍCIO 10. PASSAGEM DE PARÂMETROS POR VALOR ******\n\n", setlocale(LC_ALL,""));
	printf("a = %d , b = %d\n\n", a, b);	
	
	system ("pause");
	return 0;
}
