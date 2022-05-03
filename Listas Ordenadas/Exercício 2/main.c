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

void ins_sr(Item x, Lista *L){
     Lista I = *L;
     while( *L != NULL ){
         if((*L)->item==x)
            return;
         L = &(*L)->prox;
     }
     ins(x, &I);             
}

void exibe (Lista L) {
	while (L != NULL) {
		printf("\t%d\n", L -> item);
		L = L -> prox;
	}
}

int main(void) {
	printf(" ********** EXERCÍCIO 2. INSERÇÃO EM LISTA ORDENADA SEM REPETIÇÃO **********\n\n", setlocale(LC_ALL, ""));
	
	Lista I = NULL;
	ins(4,&I);
	ins(1,&I);
	ins(3,&I);
	ins(5,&I);
	ins(2,&I);
	exibe(I);
	ins_sr(1,&I);
	ins_sr(1001,&I);
	exibe(I);
	
	printf("\n");
	system ("pause");
	return 0;
}
