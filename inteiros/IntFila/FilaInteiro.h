#define TAM 10

typedef struct fila{
	int fila[TAM];
	int inicio;
	int fim;
}Fila;


void inicia(Fila *f){
	f->inicio = 0;
	f->fim = -1;
}

void insere(Fila *f, int elem){
	if(f->fim == TAM-1){
		printf("Fila Cheia!");
	}else{
		f->fim++;
		f->fila[f->fim] = elem;
	}
}

void retira(Fila *f){
	f->inicio++;
}

int Tamanho(Fila *f){
	printf("%d",f->fim-f->inicio+1);
}
void imprimeInicio(Fila *f){
	if(f->fim < f->inicio){
		printf("Fila Vazia!");
	}else{
	printf("Inicio da Fila: %d\n",f->fila[f->inicio]);
	}
}

void imprimeTudo(Fila *f){
	if(f->fim < f->inicio){
		printf("Fila Vazia!");
	}else{
		int i=f->inicio;
		printf("Fila Inteira: ");
		
		do{
		printf(" %d",f->fila[f->inicio+i]);
		i++;
		}while(i<f->fim+1);
	}
}

void imprimeFim(Fila *f){
	if(f->fim < f->inicio){
		printf("Fila Vazia!");
	}else{
		printf("\nFim da Fila: %d\n",f->fila[f->fim]);
	}
}
