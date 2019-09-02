#include <stdio.h>
#include "CircularInteiro.h"

int main(){
	Fila inteiro;
		
	inicia(&inteiro);
	insere(&inteiro, 30);
	insere(&inteiro, 70);	
	insere(&inteiro, 10);
	insere(&inteiro, 50);
	insere(&inteiro, 90);
	insere(&inteiro, 20);
	
 // retira(&inteiro);
	
	imprimeInicio(&inteiro);
	imprimeTudo(&inteiro);
	imprimeFim(&inteiro);
}
