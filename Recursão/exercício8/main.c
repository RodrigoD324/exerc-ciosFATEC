#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void hanoi(int n, char a, char b, char c){
	if (n == 1)
		printf("Mova disco %d de %c para %c\n", n, a, b);
	else{
	    hanoi(n - 1, a, c, b);
		printf("Mova o disco %d de %c para %c\n", n, a, b);
		hanoi(n - 1, c, b, a);
		}
}
int main(void){
int n;
	printf(" ********** EXERCÍCIO 8. FUNÇÃO HANÓI ********** \n\n\n", setlocale (LC_ALL, ""));
	printf("Digite a quantidade de discos: ");
	scanf("%d", &n);
	printf("\n");
	hanoi(n, 'A', 'B', 'C');
	printf("\n");
	
system ("pause");
return 0;
}
