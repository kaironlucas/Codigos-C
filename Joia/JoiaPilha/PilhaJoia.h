#include <stdio.h>
#include <string.h>
#define TAM 10

typedef struct joia{
	char produto[20];
	char pedra[20];
	char material[20];
	float preco;
}Joia;

typedef struct pilha{
  Joia pilha[TAM];
  int topo;
}Pilha;

void IniciaPilha(Pilha *p){
	p->topo = -1;
}

void insere(Pilha *p, char produto[], char pedra[], char material[], float preco){
		Joia criaJoia;

		strcpy(criaJoia.produto, produto);
		strcpy(criaJoia.pedra, pedra);
		strcpy(criaJoia.material, material);
		criaJoia.preco = preco;

		p->topo++;
		p->pilha[p->topo] = criaJoia;
}

void Retira(Pilha *p){
	p->topo--;
}

void Imprimetopo(Pilha *p){
		printf("Quantidade de itens na pilha: %d\n\n",p->topo+1);
    printf("Informa��es da Joia do Topo:\n");
    printf("Produto: %s\n", p->pilha[p->topo].produto);
    printf("Pedra: %s\n", p->pilha[p->topo].pedra);
    printf("Material: %s\n", p->pilha[p->topo].material);
    printf("Pre�o: R$ %.2f\n\n", p->pilha[p->topo].preco);
}
