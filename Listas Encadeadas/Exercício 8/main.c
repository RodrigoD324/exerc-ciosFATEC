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

void anexa (Lista *A, Lista B) {
	if ( !B ) return;
		while ( *A )
			A = &( *A ) -> prox;
		*A = B;
}

void destroi (Lista *L) {
	while ( *L ) {
		Lista n = *L;
		*L = n -> prox;
		free(n);
	}
}

void ultimo(Lista L){
		while( L != NULL ) {
		if(L->prox == NULL){
			printf("%d",L->item);
		}
		L = L->prox;
	}
}

int pertence (int x, Lista L){
	
	while( L != NULL ) {
		if( x == L->item  ){
			printf("\n\tO número %d pertence à lista", L->item);
			return 0;
		}
		L = L->prox;
	}
	printf("\n\tO número %d não pertence à lista", x);
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
	printf(" ********** EXERCÍCIO 8. PERTINÊNCIA EM LISTA **********\n\n", setlocale(LC_ALL, ""));
	
	Lista H = no(4, no (2, NULL));
	Lista I = no(3, no(1, no(5, NULL)));
	printf("\tH = "); exibe(H);
	printf("\n\tI = "); exibe(I);
	printf("\n\n\tPressione 'enter' para anexar\n"); getchar();
	
	anexa(&H,I);
	
	printf("\tH = "); exibe(H);
	printf("\n\tI = "); exibe(I);
	
	printf("\n\n\tO último item da lista I é: ");
	ultimo(I);
	printf("\n\tO último item da lista H é: ");
	ultimo(H);
	
	printf("\n\n\tLISTA I\n");

	exibe(I);
	pertence(7,I);
	pertence(1,I);
	pertence(2,I);

	
	printf("\n\n\tLISTA H\n");

	exibe(H);
	pertence(7,H);
	pertence(4,H);
	pertence(2,H);
	
	printf("\n\n\tPressione 'enter' para destruir"); getchar();
	destroi(&I);
	destroi(&H);
	
	printf("\n\tH após a destruição = "); exibe(H);
	printf("\n\tI após a destruição = "); exibe(I);
	
	printf("\n\n");
	system ("pause");
	return 0;
}
