#include <stdio.h>

int main(){	


	float vetor [3][3],num;
	int i,j,posi=-1,posj=-1;
	
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
		printf("valor..: ");
		scanf("%f",&vetor[i][j]);	
		
	}
	}
	
	
	printf("Numero a ser pesquisado..: ");scanf("%f",&num);
	
	
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(num==vetor[i][j]){
				posi=i;
				posj=j;
			}	
		}
		}
	
	if (posi==-1){
		printf("valor nao encontrado na linha! \n");
	}
	else {
		printf("o valor foi encontrado na posicao %i do vetor!",posi+1);
	}
	if (posj==-1){
		printf("valor nao encontrado na coluna! \n");
	}	
	else {
		printf("o valor foi encontrado na posicao %i do vetor!",posj+1);	
	}
	
}
