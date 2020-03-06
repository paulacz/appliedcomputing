#include <stdio.h>
#define tam 5
#define msg_ent "Idade...: "
int main(){
	float nota[tam], soma=0, media;
	int i, qtde=0;
	for(i=0; i<tam; i++){
		printf(msg_ent); scanf("%f",&nota[i]);
		soma = soma + nota[i];	
	}	
	for(i=0; i<tam; i++){
		printf("Valor armazenado...: %.1f", nota[i]);
	}
}
