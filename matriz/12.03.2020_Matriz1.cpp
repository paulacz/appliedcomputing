/* IPOG - Engenharia Civil
   Paula Cruz - 05.03.2020
   Matriz - Pesquisa em Vetor
   
   Observa��es: Os valores das linhas e colunas s�o declarados como
   -1 porque � um valor que n�o entra no la�o de repeti��o, por n�o
   existir vetor negativo.
   
   O 3 � considerado em i e j para que o programa para de executar na 
   posi��o desejada.
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
	
