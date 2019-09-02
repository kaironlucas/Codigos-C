#include<stdio.h>
#include "PilhaInteiro.h"

int main(){
	Pilha p;
	
	inicia(&p);
	insere(&p, 3);
	insere(&p, 7);
	insere(&p, 1);
	insere(&p, 5);
	insere(&p, 9);
	insere(&p, 2);
	retira(&p);
	imprimeTopo(&p);
}
