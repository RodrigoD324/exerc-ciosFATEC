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

void ins_rec(Item x, Lista *L) {
     if (*L != NULL && (*L)->item < x){
        ins_rec(x, &(*L)->prox);
     }else{
        *L = no(x,*L);
     }
}

void exibe (Lista L) {
	while (L != NULL) {
		printf("\t%d\n", L -> item);
		L = L -> prox;
	}
}

int main(void) {
	printf(" ********** EXERCÍCIO 3. INSERÇÃO RECURSIVA EM LISTA ORDENADA **********\n\n", setlocale(LC_ALL, ""));
	
	Lista I = NULL;
	ins_rec(4,&I);
	ins_rec(1,&I);
	ins_rec(3,&I);
	ins_rec(5,&I);
	ins_rec(2,&I);	
	exibe(I);
	
	printf("\n");
	system ("pause");
	return 0;
}
