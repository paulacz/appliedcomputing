/* IPOG - Engenharia Civil
   Paula Cruz - 08/2019
   Estrutura Sequencial - N6
   Fa�a um algoritmo que leia as medidas de um  ret�ngulo (comprimento 
   e largura). Calcule e escreva sua �rea.
*/

#include <stdio.h>

int main() {
	
	//declara��o de vari�veis
	int comprimento, largura, area;
	
	//entrada de dados
	printf("comprimento..:"); scanf("%i", &comprimento);
	printf("largura......:"); scanf("%i", &largura);
	
	//processamento de dados
	area = comprimento * largura / 2;
	
	printf(" a area do triangulo retangulo e..: %i", area);
}
