/* IPOG - Engenharia Civil
   Paula Cruz - 08/2019
   Estrutura Sequencial - N5
   Fa�a um algoritmo que leia tr�s numeros. Calcule
   e escreva a m�dia aritm�tica.
*/

#include <stdio.h>

int main() {
	
	//declara��o de vari�veis
	int num1, num2, num3, media;
	
	//entrada de dados
	printf("Numero 1..:"); scanf("%i", &num1);
	printf("Numero 2..:"); scanf("%i", &num2);
	printf("Numero 3..:"); scanf("%i", &num3);
	
	//processamento de dados
	media = (num1 + num2 + num3)/ 3;
	
	printf(" A media dos numeros e..: %i", media);
}
