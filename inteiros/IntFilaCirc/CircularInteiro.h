#define TAM 10

typedef struct fila{
	int fila[TAM];
	int inicio;
	int Qtelem;
	int fim;
}Fila;

void inicia(Fila *f){
	f->inicio=0;
	f->fim=-1;
	f->Qtelem=0;
}

void insere(Fila *f, int elem){
	if(f->Qtelem == TAM){
		printf("Fila Cheia!");
	}
	if(f->fim == TAM - 1){
		f->fim=-1;
	}
	f->fim++;
	f->Qtelem++;
	f->fila[f->fim] = elem;
}

void retira(Fila *f){
	f->inicio++;
	f->Qtelem--;
}

void Qtelementos(Fila *f){
	printf("Quantidade de elementos: %d",f->Qtelem);
}

void imprimeInicio(Fila *f){
	printf("Inicio da Fila: %d\n",f->fila[f->inicio]);
}

void imprimeTudo(Fila *f){
	if(f->fim<f->inicio){
		printf("Fila vazia!");
	}else{
		int i=f->inicio;
		printf("Fila Inteira: ");
		do{
			printf(" %d",f->fila[f->inicio+i]);
			i++;
		}while(i<(f->fim+1));
	}
}

void imprimeFim(Fila *f){
	printf("\nFim da Fila: %d\n",f->fila[f->fim]);
}
