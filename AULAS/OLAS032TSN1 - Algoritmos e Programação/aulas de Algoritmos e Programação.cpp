 					 Tradu�ao de codigo 
 	 montador(assembler{1}) -> traduz para uma linguagem de segunda gera�ao;
	 compilador -> traduz o programa o programa todo de uma vez;
	 interpretador -> traduz o programa instru�ao por intru�ao;
	 				{1} Assembler -> Assembly ou linguagem de montagem � uma nota��o leg�vel por humanos
					para o c�digo de m�quina que uma arquitetura de computador espec�fica usa, utilizada 
					para programar c�digos entendidos por dispositivos computacionais, como microprocessadores
					e microcontroladores;
						
	 				 Historia linguagem C
	 criada por Denis Ritvhie, na decada de 1970, para o uso em um computador DEC PDP-11 em Unix;
	 C++ e uma extensao da linguagem C;
	 O sistema Unix e escrito em C e C++;
	 
	 				 Diretivas para o processador bibliotecas
	 diretivas (#include) permitem incluir uma biblioteca;
	 bibliotecas contem funcoes pre-definidas, utilizadas nos programas;
	 					
	 				 Exemplo Hello World!
	#include <stdio.h>
	#include <stdlib.h>
	main()
	{
		printf("Alo mundo!");
		system("pause");
	}

					 Declara�ao de variaveis 
	 declaram as variaveis e seus tipos;
	 os nomes das variaveis devem conter apenas letras, numeros e o simbolo(_);
	 os principais tipos de variaveis sao: int{1}, float{2}, double{3} e char{4};
	 C diferencia letras minusculas de maiusculas;
	 				 {1} int -> variavel do tipo inteiro;
	 				 {2} float -> variavel do tipo real com precisao simples;
	 				 {3} double -> varialvel do tipo real com precisao dupla 
					o ou seja normalmente possui o dobro da capacidade de uma vari�vel do tipo float;
					 {4} char -> varialvel do tipo caracter armazena somente 1;
					 	 
					 Entrada de dados
	 %d int;
	 %f float;
	 %d double;
	 %c char;
	 %s vetor de char ou string;
	 
	 				 Operadores logicos
	 operadores l�gicos s�o: && -> (E), || -> (OU), ! -> (N�O);
	 				
	 				 Estrutura condicional
	 simples(if) -> um unico caminho;
	 dupla composta (if - else) -> dois caminhos;
	 encadeada (if - else - if) -> tres ou mais caminhos sequenciados;
	 multipa por valor (switch - case) -> multipos caminhos sequenciados ou nao;
	 				
					  
