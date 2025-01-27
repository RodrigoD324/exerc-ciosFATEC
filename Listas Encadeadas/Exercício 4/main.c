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

int tamanho (Lista L) {
	int t = 0;
	while (L) {
		t++;
		L = L -> prox;
	}
	return t;
}

int soma (Lista L) {
	int somatoria = 0;
	while (L != NULL) {
		somatoria = somatoria + L -> item; 
		L = L -> prox;
	}
	return somatoria;
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
	printf(" ********** EXERC�CIO 4. SOMA DOS ITENS DA LISTA **********\n\n", setlocale(LC_ALL, ""));
	
	Lista I = no(3, no(1, no(5, NULL)));
	exibe(I);	
	
	printf("\n\n\tTamanho = %d\n", tamanho (I));
	printf("\n\tSoma dos itens = %d", soma (I));
	
	printf("\n\n");
	system ("pause");
	return 0;
}
