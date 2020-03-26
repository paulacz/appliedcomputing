#include <stdio.h>
int main(){     
	
	float vet[5], soma=0, media, valor;
	int i;
	
	for(i=0; i<5; i++){ //incremental
		printf("Valor...: "); scanf("%f",&vet[i]);
	}
	printf("Valor a ser pesquisado..: "); scanf("%f",&valor);
	
	i=0; // colocando na primeira posição do vetor
	while (valor != vet[i] && i<5){ // pesquisando no vetor o valor enquanto tem posições
		i++; // enauanto o valor é diferente, passa para a próxima posição
	}
	if(i<5){ // testando para saber se a interrupção da repetição aconteceu porque encontrou o valor
		printf("Posicao do valor no vetor..:%i", i);
	}
	else{
		printf("Valor nao encontrado!!!");
	}
	
}
