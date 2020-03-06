/* IPOG - Engenharia Civil
   Paula Cruz - 05.03.2020
   Vetor
*/

#include <stdio.h>
int main(){
	float vetor[5];
	int i,j,aux;
	
	for (i=0;i<4; i++){
		printf("Valor..:"); scanf("%f", &vetor[i]);
	}
	for(i=0; i<4; i++){
		for(j=i+1; j<5; j++){
			if (vetor[i]>vetor[j]){
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
	}
	for(i=0; i<5;i++){
		printf("Valor ordenado..: %.1f\n", vetor[i]);
	}
}
