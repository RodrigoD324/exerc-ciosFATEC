#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef int Item;
typedef struct no {
	Item item;
	struct no *prox;
}	*Lista;

Lista no (Item x, Lista p) {
	Lista n = malloc(sizeof(struct no));
	n -> item = x;
	n -> prox = p;
	return n;
}

void ins (Item x, Lista *L) {
	while (*L != NULL && (*L) -> item < x)
		L = &(*L) -> prox;
	*L = no (x,*L);
}

void rem_todo (Item x, Lista* L) {
   while( *L != NULL && (*L)->item < x )
      L = &(*L)->prox;
   while(*L != NULL){
      if( *L == NULL || (*L)->item > x ) return;
      Lista n = *L;
      *L = n->prox;
      free(n);
   }
}

void exibe (Lista L) {
	while (L != NULL) {
		printf("\t%d\n", L -> item);
		L = L -> prox;
	}
}

int main(void) {
	printf(" ********** EXERCÍCIO 7. REMOÇÃO DE TODAS AS OCORRÊNCIAS EM LISTA ORDENADA **********\n\n", setlocale(LC_ALL, ""));
	
	Lista I = NULL;
	ins(4,&I);
	ins(1,&I);
	ins(3,&I);
	ins(5,&I);
	ins(2,&I);
	printf("Antes da remoção do item '3':\n");
    exibe(I);
    rem_todo(3,&I);
    printf("\nDepois da remoção do item '3':\n");
    exibe(I);
	
	printf("\n\n");
	system ("pause");
	return 0;
}
