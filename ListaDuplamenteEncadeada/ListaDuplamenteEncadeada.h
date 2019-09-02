typedef struct No{
  int dado;
  struct No *prox;
  struct No *ant;
}Lista;

Lista* criaLista(Lista *l){
  return NULL;
}

Lista* insere(Lista *l, int x){
  Lista* novono = (Lista *) malloc(sizeof(Lista));
  if(l != NULL){
    l->ant = novono;
  }
  novono->dado = x;
  novono->prox = l;
  novono->ant = NULL;
  return novono;
}

void imprime(Lista *l){
  if(l == NULL){
    printf("Lista Vazia!\n");
  }
  Lista *aux;
  aux = l;
  while(aux != NULL){
    printf("%d\n", aux->dado);
    aux = aux->prox;
  }
}

void imprimeInvertido(Lista *l){
  if(l == NULL){
    return;
  }else{
    imprimeInvertido(l->prox);
    printf("%d\n",l->dado);
  }
}

Lista* busca(Lista *l, int x){
  if(l == NULL){
    printf("Lista está vazia!\n");
  }else{
    Lista *aux;
    aux = l;

	printf("Valor digitado: %d\n",x);
    while(aux != NULL && aux->dado != x){
        aux = aux->prox;
    }

    if(aux == NULL){
      printf("Valor não encontrado!\n\n");
      return l;
    }
    printf("\nValor Encontrado: %d\n", aux->dado);
  }
}

Lista* retira_p(Lista *l){
  if(l == NULL){
    printf("Lista está vazia!\n");
    return NULL;
  }else{
    Lista *aux;
    aux = l;

    if(aux->ant == NULL){
      aux = aux->prox;
      aux->ant = NULL;
      free(aux);
    }

    return l;
  }
}

Lista* retira(Lista *l, int x){
  if(l == NULL){
    printf("Lista j� est� vazia!\n");
  }else{
    Lista *aux;
    aux = l;

    printf("Elemento que será removido: %d\n",x);
    while(aux != NULL && aux->dado != x){
        aux = aux->prox;
    }

    if(aux == NULL){
      printf("Valor não encontrado!\n");
      return l;
    }

    if(aux->ant == NULL){
      l = (aux->ant)->prox;
    }else{
      (aux->ant)->prox = aux->prox;
      free(aux);
    }

    return l;
  }
}
