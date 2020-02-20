#include <stdio.h>

int main(){
	
	float nota [5], soma=0, media;
	int i;
	
	for (i=0; i<5; i++){
		printf("Nota[%i]..:",1);
		scanf("%i", &nota[1]);
		soma = soma + nota [i];
	}
	media = soma / i;
	printf("A soma e...: %.1f\n", soma);
	printf("A media e..: %.1f\n", media);
}
