#include <stdio.h>

#include <locale.h>

int main() {

setlocale(LC_ALL, "Portuguese");

float n1, n2, resultado;

 

printf("Informar o primeiro n�mero: ");

scanf("%f", &n1);

printf("Informar o segundo n�mero: ");

scanf("%f", &n2);

resultado=n1+n2;

resultado+=n1;

printf("O resultado do c�lculo �: %f\n", resultado);

return 0;

}
