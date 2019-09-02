#define TAM 5

typedef struct pilha{
	int pilha[TAM];
	int topo;
}Pilha;

void inicia(Pilha *p){
	p->topo = -1;
}

void insere(Pilha *p, int elem){
	p->topo = p->topo+1;
	p->pilha[p->topo] = elem;
}

void retira(Pilha *p){
	p->topo--;
}

void imprimeTopo(Pilha *p){
	printf("Topo da Pilha: %d\n",p->pilha[p->topo]);
}
