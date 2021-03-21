typedef struct arvb ArvB;

/*Função que cria uma Árvore Binária de Busca Vazia.*/
 ArvB* arvb_cria_vazia(void);
/*Testa se uma Árvore Binária é vazia.*/
 int arvb_vazia(ArvB *a);
/*Função que busca a sub-árvore que contém um inteiro.*/
 ArvB* arvb_busca(ArvB *a,int c);
 
 int arvb_altura(ArvB *a);
/*Função que imprime os elementos de uma Árvore.*/
 void arvb_imprime(ArvB *a);
/*Função que insere um inteiro em uma Árvore.*/
 ArvB* arvb_insere(ArvB *a, int c);
/*Função que remove um inteiro em uma Árvore.*/
 ArvB* arvb_remove(ArvB *a, int c);
/*Libera o espaço alocado para uma Árvore.*/
 void arvb_libera(ArvB *a);
