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

void inversa(Lista L){
	
	if( L == NULL ) {
		return;
	}
	inversa(L->prox);
   printf("%d ",L->item);
}

void exibe (Lista L) {
	printf("\t[");
	while (L != NULL) {
		if (L -> prox != NULL){
			printf("%d", L -> item);
				printf(" , ");
			L = L -> prox;
	} else {
			printf("%d", L -> item);
			L = L -> prox;	
		}
}
	printf("]");
}

int main(void) {
	printf(" ********** EXERCÍCIO 9. INVERSÃO DE LISTA **********\n\n", setlocale(LC_ALL, ""));
	
	Lista I = no(3,no(1,no(5,NULL)));
	exibe(I);
	printf("\n\n\tO inverso da lista é: ");
	printf("[");
	inversa(I);
	printf("]\n");

	printf("\n\n");
	system ("pause");
	return 0;
}
