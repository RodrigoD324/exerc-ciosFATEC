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

void rem(Item x, Lista *L) {
    while( *L != NULL && (*L)->item < x )
        L = &(*L)->prox;
    if( *L == NULL || (*L)->item > x ) return;
    Lista n = *L;
    *L = n->prox;
    free(n);
}

void exibe_decrescente(Lista L){
     Lista I = L;     
     if(I == NULL) return;
     while( L ->prox != NULL )
           L = L->prox;
     printf("\t%d",L->item);
     rem(L->item, &I);
     exibe_decrescente(I);
}

void exibe (Lista L) {
	while (L != NULL) {
		printf("\t%d\n", L -> item);
		L = L -> prox;
	}
}

int main(void) {
	printf(" ********** EXERC�CIO 5. EXIBI��O RECURSIVA DECRESCENTE DE LISTA ORDENADA **********\n\n", setlocale(LC_ALL, ""));
	
	Lista I = NULL;
	ins(4,&I);
	ins(1,&I);
	ins(3,&I);
	ins(5,&I);
	ins(2,&I);
	exibe_decrescente(I);
	
	printf("\n\n");
	system ("pause");
	return 0;
}
