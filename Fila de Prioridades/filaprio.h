#define MAX 100

typedef struct fila_prioridade FilaPrio;

FilaPrio* cria_FilaPrio();

int insere_FilaPrio(FilaPrio* fp, char *nome, int prio);
void libera_FilaPrio(FilaPrio* fp);
int tamanho_FilaPrio(FilaPrio* fp);
int estaCheia_FilaPrio(FilaPrio* fp);
int estaVazia_FilaPrio(FilaPrio* fp);
void promoverElemento(FilaPrio* fp, int filho);
void rebaixarElemento(FilaPrio* fp, int pai);
int consulta_FilaPrio(FilaPrio* fp, char* nome);
int remove_FilaPrio(FilaPrio* fp);

