#include <stdio.h>
int main(){     
	
	float vet[5], soma=0, media, valor;
	int i;
	
	for(i=0; i<5; i++){ //incremental
		printf("Valor...: "); scanf("%f",&vet[i]);
	}
	printf("Valor a ser pesquisado..: "); scanf("%f",&valor);
	
	i=0; // colocando na primeira posi��o do vetor
	while (valor != vet[i] && i<5){ // pesquisando no vetor o valor enquanto tem posi��es
		i++; // enauanto o valor � diferente, passa para a pr�xima posi��o
	}
	if(i<5){ // testando para saber se a interrup��o da repeti��o aconteceu porque encontrou o valor
		printf("Posicao do valor no vetor..:%i", i);
	}
	else{
		printf("Valor nao encontrado!!!");
	}
	
}
