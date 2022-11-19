#include <stdio.h>

#include <locale.h>

int main() {

setlocale(LC_ALL, "Portuguese");

float n1, n2, resultado;

 

printf("Informar o primeiro número: ");

scanf("%f", &n1);

printf("Informar o segundo número: ");

scanf("%f", &n2);

resultado=n1+n2;

resultado+=n1;

printf("O resultado do cálculo é: %f\n", resultado);

return 0;

}
