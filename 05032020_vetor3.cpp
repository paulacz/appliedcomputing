/* IPOG - Engenharia Civil
   Paula Cruz - 05.03.2020
   Vetor 3
*/

#include <stdio.h>

int main(){
	float vetor[5], num;
	int i, j, pos=1;
	
	for(i=0; i<5; i++){
		printf("valor..:"); scanf("%f", &vetor[i]);
	}
	
	printf("Numero a ser persquisado..:"); scanf("&f", &num);
	
	for(i=0; i<5; i++){
		if(num == vetor[i]){
			i = 4;
		}
	}
	if(pos == -1){
		printf("Valor nao encontrado no vetor!!!");
	}
	else{
		printf("o valor foi encontrado na posicao %i do vetor!!!", pos+1);
	}
}
