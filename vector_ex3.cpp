/* IPOG - Engenharia Civil
   Paula Cruz - 02/2020
   Vetor
   ex.3.: Faça um programa que leia 10 números positivos e
   armazene em um vetor, depois calcule e mostre o maior e 
   o menor número.
   
*/

#include <stdio.h>
#define tam 10

int main() {
	float valor [tam], menor = -1, maior = -1;
	int i;
	
	for (i=0; i<tam; i++){
		printf("Digite o %i valor...:", i + 1);scanf("%f", &valor[i]);
		if (valor[i]<0){
			printf("Valor negativo nao permitido\n");
			printf("Digite o %i valor...:", i+1);scanf("%f",&valor[i]);
		}
		if (i==0){menor=valor[i];}
		if (valor[i] < menor){
		menor = valor[i];}
		else{
		    if(valor[i]> maior){
			maior = valor[i];
			}
			}
		}
	printf("\nO menor valor e...:%.1f\n", menor);
	printf("\nO maior valor e...:%.1f\n", maior);
	}
	
