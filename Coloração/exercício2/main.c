#include <stdio.h>
#include <conio2.h>
//#include <locale.h>
#include "fila.h"
#define dim 11
#define cor(i,j) (i >= 0 && i < dim && j >= 0 && j < dim ? I[i][j] : -1)
#define par(i,j) ((i)*100+(j))
#define lin(p) ((p)/100)
#define col(p) ((p)%100)

int I[dim][dim] = {
	{-1, -1, -1, -1, -1, -1, -1, -1,-1, -1,-1},
	{-1,0, 0, 0, 0, 0, 0, 0, 0, 0, -1},
	{-1,0, 0, 0, 0, 1, 0, 0, 0, 0, -1},
	{-1,0, 0, 0, 1, 1, 1, 0, 0, 0, -1},
	{-1,0, 0, 1, 1, 1, 1, 1, 0, 0, -1},
	{-1,0, 1, 1, 1, 1, 1, 1, 1, 0, -1},
	{-1,0, 0, 2, 0, 0, 0, 2, 0, 0, -1},
	{-1,0, 0, 2, 0, 0, 0, 2, 0, 0, -1},
	{-1,0, 0, 2, 2, 2, 2, 2, 0, 0, -1},
	{-1,0, 0, 0, 0, 0, 0, 0, 0, 0, -1},
	{-1, -1, -1, -1, -1, -1, -1, -1,-1, -1,-1},
	};

void exiba (int I [dim][dim]) {
	int i;
	int j;
	for( i = -1 ; i < dim ; i++) {
		textcolor(14);
		for( j = -1 ; j < dim ; j++)
			if ( i < 0 && j < 0 ) printf("   ");
			else if ( i < 0 ) printf("%2d", j);
			else if ( j < 0 ) printf("\n%2d", i);
			else {
				textcolor (I[i][j]);
				printf("%c%c", 219, 219);
			}
	}
	textcolor(8);
}

void colorir ( int I[dim][dim], int i, int j, int n) {
	Fila F = fila (dim * dim);
	int a = I[i][j];
	I[i][j] = n;
	enfileira (par (i , j), F);
	while ( !vaziaf(F) ) {
		int p = desenfileira (F);
		i = lin(p);
		j = col(p);
		if ( cor(i-1,j)==a ) { I[i-1] [j] = n; enfileira(par(i-1, j), F); }
		if ( cor(i,j+1)==a ) { I[i] [j+1] = n; enfileira(par(i, j+1), F); }
		if ( cor(i+1,j)==a ) { I[i+1] [j] = n; enfileira(par(i+1, j), F); }
		if ( cor(i,j-1)==a ) { I[i] [j-1] = n; enfileira(par(i, j-1), F); }
	}
	destroif(&F);
}

int main (void) {
	int i , j , n;
	printf(" ********** EXERCICIO 2. CORRECAO DO PROGRAMA ********** \n\n\n");//, setlocale (LC_ALL, ""));
	while ( 1 ) {
		exiba(I);
		printf("\n\n Nova cor (ou -1 para sair)?  ");
		scanf("%d", &n);
		if ( n < 0 ) break;
		do {
			printf("Posicao?  ");
			scanf("%d %d", &i, &j);
		} while ( i < 0 || i >= dim || j < 0 || j >= dim );
		colorir (I , i , j , n);
	}
	
system ("pause");
return 0;
}
