#include <stdio.h>
#include <stdlib.h>

void par_impar()
{
	
 int num;

 printf("Digite um numero:\n");
 scanf("%d",&num);
 int modResultado = num % 2;
 if(modResultado == 0)
	{
		printf("Esse numero eh Par.\n");
		system("pause");
		system("cls");
	}
 else
 {
	if(modResultado ==1)
	{	 
		printf("Esse numero eh impar.\n");
		system("pause");
		system("cls");
	}
 }
}

int main(void)
{   int loop = 0;
	printf("Descubra se um numero eh Par ou Impar!\n");
	system("pause");
	system("cls");
	do
	{
		par_impar();
		
		printf("Para repitir digite 1 ou para sair ditite 0 :\n");
		scanf("%d",&loop);	
		system("cls");
	}while(loop == 1);
	return 0;
}
