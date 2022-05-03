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

int pert_rec(Item x,Lista L){
    if (L != NULL && L->item < x )
        return pert_rec(x,L->prox);
    return (L != NULL && L->item == x);
}

void exibe (Lista L) {
	while (L != NULL) {
		printf("\t%d\n", L -> item);
		L = L -> prox;
	}
}

int main(void) {
	printf(" ********** EXERCÍCIO 9. VERIFICAÇÃO DE PERTINÊNCIA RECURSIVA **********\n\n", setlocale(LC_ALL, ""));
	
	Lista I = NULL;
	ins(4,&I);
	ins(1,&I);
	ins(3,&I);
	ins(5,&I);
	ins(2,&I);
	printf("\t%d\n", pert_rec(3,I));
	printf("\t%d\n", pert_rec(5,I));
	
	printf("\n\n");
	system ("pause");
	return 0;
}
