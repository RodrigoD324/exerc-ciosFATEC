#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void) {
	char s[256];
	printf("\n ****** EXERC�CIO 8. SENHA! ******\n\n", setlocale (LC_ALL,""));
	printf("Senha? ");
	gets(s);
	if( strcmp(s, "Abracadabra")==0 ) puts ("\nCORRETO!!!!\n");
	else puts("Senha Inv�lida!");
	
	system("pause");
	return 0;
}
