#include <stdio.h>
#define tam 5
#define msg_ent "Idade...: "
#define msg_media "A media e...: %.1f\n"
int main(){
	float nota[tam], soma=0, media;
	int i, qtde=0;
	for(i=0; i<tam; i++){
		printf(msg_ent); scanf("%f",&nota[i]);
		soma = soma + nota[i];	
	}	
	media = soma / tam;
	for(i=0; i<tam; i++){
		if (nota[i]>media){
			qtde++;
		}
	}
	printf(msg_media, media);
	printf("Quantidade de notas acima da media..: %i", qtde);
}
