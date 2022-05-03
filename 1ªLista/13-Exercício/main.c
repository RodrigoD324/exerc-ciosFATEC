#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct no {
	int item;
	struct no *prox;	
} *Lst;

Lst no (int x , Lst p) {
	Lst n = malloc(sizeof(struct no));
	n -> item = x;
	n -> prox = p;
	
	return n;
}

int main(void) {
	printf("\n ****** EXERCÍCIO 13. UMA LISTA DE NÚMEROS ******\n\n", setlocale(LC_ALL,""));
	Lst p = no(1, no(2,no(3,NULL)));
	while ( p != NULL ) {
		printf("%d\n\n", p->item);
		p = p->prox;
	}
	system("pause");
	return 0;
}
