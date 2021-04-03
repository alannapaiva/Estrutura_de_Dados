
typedef struct filap FilaP;
/*cria uma fila de prioridade vazia*/
FilaP* filap_cria(); 
/*função para verificar se é vazia*/
int filap_vazia(FilaP* f);
/*devolve o elemento de maior prioridade na fila */
int heap_maximum(FilaP* f); 
/*devolve o elemento de maior prioridade e o retira da fila*/
int heap_extract_max(FilaP* f); 
/*modifica a prioridade de determinado elemento no índice ind na fila (apenas se chave for maior)*/
void heap_increase_key(FilaP* f, int ind, int chave); 
/*insere um novo elemento na fila com prioridade chave*/
void max_heap_insert(FilaP* f, int chave); 
/**/
void max_heapify(FilaP *f, int i);

