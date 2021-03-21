typedef struct fila Fila;

/*Função que cria uma Fila.*/
Fila* fila_cria(void);
/*Testa se uma Fila é vazia.*/
int fila_vazia(Fila *f);
/*Função que adiciona um elemento em uma Fila.*/
void fila_insere(Fila *f, int info);
/*Função que remove um elemento de uma Fila.*/
int fila_remove(Fila *f);
/*Função que imprime os elementos de uma Fila.*/
void fila_imprime(Fila *f);
/*Libera o espaço alocado para uma Fila.*/
void fila_libera(Fila *f);
/*Função para retornar o número de elementos da fila com valor maior que n*/
int qtd_maior(Fila* f, int n);
/*Função que cria uma nova fila e inverte*/
Fila* inverte(Fila* f);
/*Função que retorna os numeros pares*/
int pares(Fila* f);
/*Função para imprimir o topo*/
int fila_topo(Fila* f);
