/* IPOG - Engenharia Civil
   Paula Cruz - 08/2019
   Estrutura Sequencial - N2
   Fa�a um algoritmo que leia tr�s n�meros. Calcule e escreva a 
   multiplica��o dos n�meros.
*/

#include <stdio.h>

int main() {
	
	//declara��o de vari�veis
	int num1, num2, num3, mult;
	
	//entrada de dados
	printf("Numero 1..:"); scanf("%i", &num1);
	printf("Numero 2..:"); scanf("%i", &num2);
	printf("Numero 3..:"); scanf("%i", &num3);
	
	//processamento de dados
	mult = num1 * num2 * num3;
	
	printf(" A multiplica��o dos numeros e..: %i", mult
	);
}
