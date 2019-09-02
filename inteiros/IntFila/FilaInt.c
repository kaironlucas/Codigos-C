#include <stdio.h>
#include "FilaInteiro.h"

int main(){
	Fila inteiro;

	inicia(&inteiro);
	insere(&inteiro, 3);
	insere(&inteiro, 7);	
	insere(&inteiro, 1);
	insere(&inteiro, 5);
	insere(&inteiro, 9);
	insere(&inteiro, 2);
	
 // retira(&inteiro);
	
	imprimeInicio(&inteiro);
	imprimeTudo(&inteiro);
	imprimeFim(&inteiro);
}
