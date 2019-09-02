
#define TAM 5

typedef struct joia{
	char produto[20];
	char pedra[20];
	char material[20];
	float preco;
}Joia;

typedef struct fila{
	Joia fila[TAM];
	int inicio;
	int fim;
}Fila;

void inicia(Fila *f){
	f->inicio=0;
	f->fim=-1;
}

void insere(Fila *f, char produto[], char pedra[], char material[], float preco){
	if(f->fim == TAM - 1){
		printf("Fila Cheia");
	}else{
		Joia criaJoia;
	
		strcpy(criaJoia.produto, produto);
		strcpy(criaJoia.pedra, pedra);
		strcpy(criaJoia.material, material);
		criaJoia.preco = preco;
		
		f->fim++;
		f->fila[f->fim] = criaJoia;
	}
}

void retira(Fila *f){
	f->inicio++;
}

void imprime(Fila *f){
	printf("Dados da Fila");
	for(int i=0;i<TAM;i++){
		printf("\n\n%d° Elemento:\n",i+1);
		printf("\nProduto: %s",f->fila[f->inicio+i].produto);
		printf("\nPedra: %s",f->fila[f->inicio+i].pedra);
		printf("\nMaterial: %s",f->fila[f->inicio+i].material);
		printf("\nPreco: R$ %.2f",f->fila[f->inicio+i].preco);
	
	}
}
