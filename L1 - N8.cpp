/* IPOG - Engenharia Civil
   Paula Cruz - 08/2019
   Estrutura Sequencial - N8
   Uma pessoa construindo sua resid�ncia resolveu colocar em sua casa uma caixa para 
   servir como reservat�rio de �gua. Considerando que a caixa seja retangular, 
   fa�a um algoritmo que leia as dimens�es da caixa (comprimento, altura e largura), 
   calcule e escreva o volume de �gua que pode ser armazenado.
*/

#include <stdio.h>

int main() {
	
	//declara��o de vari�veis
	float comprimento, altura, largura, volume;
	
	//entrada de dados
	printf("comprimento..:"); scanf("%f", &comprimento);
	printf("altura.......:"); scanf("%f", &altura);
	printf("largura......:"); scanf("%f", &largura);
	
	//processamento de dados
	volume =  comprimento * altura * largura;
	
	printf(" o volume do reservatorio sera...%f", volume);
}
