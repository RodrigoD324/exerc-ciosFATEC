#include <stdio.h>
#include <locale.h>

typedef struct { float x; float y; } Ponto;

int main(void) {
	Ponto p = {1.5 , 2.5};
	printf("\n ****** EXERCÍCIO 9. PONTO! ******\n\n", setlocale (LC_ALL,""));
	printf("	     (%.1f , %.1f) \n\n", p.x , p.y);
	
	system ("pause");
	return 0;
}
