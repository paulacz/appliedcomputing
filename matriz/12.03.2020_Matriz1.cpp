/* IPOG - Engenharia Civil
   Paula Cruz - 05.03.2020
   Matriz - Pesquisa em Vetor
   
   Observações: Os valores das linhas e colunas são declarados como
   -1 porque é um valor que não entra no laço de repetição, por não
   existir vetor negativo.
   
   O 3 é considerado em i e j para que o programa para de executar na 
   posição desejada.
*/

#include <stdio.h>
int main(){
	float mat[3][3], valor;
	int i, j, lin=-1, col=-1;
		for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Valor [%i][%i]..:",i,j); scanf("%f", &mat[i][j]);
		}
	}
	printf("Informe um valor a ser pesquisado..:"); scanf("%f", &valor);
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(valor == mat[i][j]){
				lin = i; 
				col = j;
				i   = 3; 
				j   = 3;
			}
		}
	}
	if( lin == -1 && col == -1){
		printf("Valor nao foi encontrado!");
	}
	else{
		printf("Valor armazenado na linha %i e coluna %i na matriz!", lin, col);
	}
}
	
