#include <stdio.h>
#include <stdlib.h>
#include "PilhaJoia.h"

int main(){
	Pilha Joia;
	
	IniciaPilha(&Joia);
	insere(&Joia, "Colar", "Esmeralda", "Ouro", 2290);
	insere(&Joia, "Anel","Ágata", "Prata", 150);
	insere(&Joia, "Pulseira","Citrino", "Diamante e Ouro", 890);
	insere(&Joia, "Colar", "Cristal", "Ouro", 1590);
	insere(&Joia, "Colar","Diamante Negro", "Diamante e Ouro", 3250);
	
	//Retira(&Joia);
	Imprimetopo(&Joia);

system("Pause");
return 0;
}
