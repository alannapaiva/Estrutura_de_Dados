

typedef struct lista Lista;

/* Cria uma lista vazia.*/
Lista* lst_cria();
/* Testa se uma lista é vazia.*/
int lst_vazia(Lista *l);
/* Insere um elemento no início da lista.*/
Lista* lst_insere(Lista *l, int info);
/* Busca um elemento em uma lista.*/
Lista* lst_busca(Lista *l, int info);
/* Imprime uma lista.*/
void lst_imprime(Lista *l);
/* Imprime uma lista invertida.*/
void lst_imprime_invertida_rec(Lista* l);
/* Remove um elemento de uma lista.*/
Lista* lst_remove(Lista *l, int info);
/*Remove o item informado*/
Lista* lst_remove_rec(Lista *l, int info);
/* Libera o espaço alocado por uma lista.*/
void lst_libera(Lista *l);
/*calcula o comprimento da lista*/
int comprimento(Lista *l);
/*Número de nós menor que n*/
int menores(Lista* l, int n);
/*soma os valores de todos os nós*/
int soma( Lista *l);
/*Retornar numero de nós da lista que contém numero primo*/
int primos(Lista* l);
/*Concatenação de uma lista l2 no final de uma lista l1.*/
Lista* lst_conc(Lista* l1, Lista* l2);
/*Calcula a diferença de duas listas L1 e L*/
Lista* lst_diferenca(Lista* l1, Lista* l2);

