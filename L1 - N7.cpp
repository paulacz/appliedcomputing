/* IPOG - Engenharia Civil
   Paula Cruz - 08/2019
   Estrutura Sequencial - N7
   Jo�o faz economias em d�lar e deseja saber quanto vale em reais, fa�a 
   um algor�tmo que leia a quantidade de d�lares que ele possui a cota��o 
   do d�lar emreal, calcule e escreva o valor convertido.
*/

#include <stdio.h>

int main() {
	
	//declara��o de vari�veis
	float real, economias, cotacaodolar;
	
	//entrada de dados
	printf("cota��o dolar de venda..:"); scanf("%f", &cotacaodolar);
	printf("qual o valor em USD de economias?"); scanf("%f", &economias);
	
	//processamento de dados
	real =  cotacaodolar * economias;
	
	printf(" Joao tem  %2.f reais", real);
}
