#include <stdio.h>
#include <conio2.h>
#include <locale.h>
#define dim 9

int I[dim][dim] = {
	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 1, 0, 0, 0, 0},
	{0, 0, 0, 1, 1, 1, 0, 0, 0},
	{0, 0, 1, 1, 1, 1, 1, 0, 0},
	{0, 1, 1, 1, 1, 1, 1, 1, 0},
	{0, 0, 2, 0, 0, 0, 2, 0, 0},
	{0, 0, 2, 0, 0, 0, 2, 0, 0},
	{0, 0, 2, 2, 2, 2, 2, 0, 0},
	{15, 15, 15, 15, 15, 15, 15, 15, 15}};


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

int main (void) {
	textcolor(GREEN);
	printf(" ********** EXERCICIO 1. PROGRAMA PARA REPRESENTACAO E EXIBICAO DE IMAGEM ********** \n\n\n"); //setlocale (LC_ALL,""));
	
	exiba (I);
	
	textcolor(WHITE);
	printf("\n");
	system("pause");
	return 0;
}
