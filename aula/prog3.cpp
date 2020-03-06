#include <stdio.h>
int main() {
	float nota, soma=0, media;
	int cont=0,qtde = 0;
	
	for(cont=0; cont<3; cont++){
		printf("Nota..: "); scanf("%f",&nota);
		soma = soma + nota;
	}	
	media = soma / cont;
	
	for(cont=0; cont<3; cont++){
		printf("Digite Nota..: "); scanf("%f",&nota);
		if ( nota > media ){
			qtde++;
		}
	}	
	printf("A media e...: %.1f\n", media);
	printf("Quantidade de notas acima da media..: %i", qtde);
}
