#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaDuplamenteEncadeada.h"

int main() {
 	Lista *z;

  	z = criaLista(z);

	z = insere(z, 1);
 	z = insere(z, 2);
 	z = insere(z, 3);
 	z = insere(z, 4);
 	z = insere(z, 5);

	printf("Função Imprime:\n");
	imprime(z);

 	printf("\nimprime invertido:\n");
	imprimeInvertido(z);

	printf("\nFunção busca:\n");
	busca(z, 7);

  printf("Função remove elemento\n");
	retira(z,3);
	imprime(z);


  return 0;
}
