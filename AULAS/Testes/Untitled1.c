#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("Olá, Mundo!!!\n");
	system("pause");
	system("cls");
	printf("Programa encerrado!");
	return 0;
}
