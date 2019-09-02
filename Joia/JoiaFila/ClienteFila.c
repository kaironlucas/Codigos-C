#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "FilaJoia.h"

int main(){
	Fila fila;

	inicia(&fila);
	insere(&fila, "Colar", "Cristal", "Ouro", 1590);
	insere(&fila, "Colar", "Esmeralda", "Ouro", 2290);
	insere(&fila, "Colar","Diamante Negro", "Diamante e Ouro", 3250);
	insere(&fila, "Anel","Ágata", "Prata", 150);
	insere(&fila, "Pulseira","Citrino", "Diamante e Ouro", 890);
	
	//retira(&fila);
	imprime(&fila);
return 0;
}
