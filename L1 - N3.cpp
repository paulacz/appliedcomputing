/* IPOG - Engenharia Civil
   Paula Cruz - 08/2019
   Estrutura Sequencial - N3
   Fa�a um algoritmo que leia a idade do pai e a idade do filho. 
   Calcule e escreva a diferen�a de idade dos dois.
*/

#include <stdio.h>

int main() {
	
	//declara��o de vari�veis
	int id_pai, id_filho, dif;
	
	//entrada de dados
	printf("idade do pai..:"); scanf("%i", &id_pai);
	printf("idade do filho:"); scanf("%i", &id_filho);
	
	//processamento de dados
	dif = id_pai - id_filho;
	
	printf(" a diferen�a de idades e ..: %i", dif);
}
