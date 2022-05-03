#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef int Item;
typedef struct no {
	Item item;
	struct no *prox;
} *Lista;

Lista no (Item x, Lista p) {
	Lista n = malloc(sizeof(struct no));
	n -> item = x;
	n -> prox = p;
	return n;
}

void exibe (Lista L) {
	while (L != NULL) {
		printf("\t%d\n\n", L -> item);
		L = L -> prox;
	}
}

int main(void) {
	printf(" ********** EXERCÍCIO 1. PROGRAMA PARA CRIAÇÃO E EXIBIÇÃO **********\n\n", setlocale(LC_ALL, ""));
	
	Lista I = no(3, no(1, no(5, NULL)));
	exibe(I);	
	
	printf("\n");
	system ("pause");
	return 0;
}
