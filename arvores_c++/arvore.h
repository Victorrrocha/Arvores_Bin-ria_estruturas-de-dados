
typedef struct no
{
    char info;
    struct no* esq;
    struct no* dir;
}No;

typedef struct arv
{
    No* raiz;
} Arv;

Arv* arv_cria(No* raiz);
No* arv_cria_no(char info, No*sae, No*sad);

void largura(Arv*a);
void largura_no(No*a);

void eh_binaria(Arv*a);
void eh_binaria_no(No*a, int*ptr);

void pre_ordem(Arv*a);
void interativo_pre(No*a);

void in_ordem(Arv*a);
void interativo_in(No*a);

void esp_arv(Arv* original, Arv* copia);
void esp_no(No*original, No*copia);

int numero_folhas(Arv*a);
void conta_folhas(No*a, int *ptr);

void imprime_arv(Arv* raiz, int escolha);
void imprime_no_pre(No*raiz);
void imprime_no_in(No*raiz);
void imprime_no_pos(No*raiz);

void arv_imprime_formatado(Arv* a);
void arv_imprime_formatado_no(No*a);

int altura(Arv*a);
int altura_no(No*b);

void libera(Arv*raiz);
void libera_no(No*raiz);

int arv_pertence(Arv* a, char c);
int arv_pertence_no(No* a, char c);

No* arv_busca(Arv* a, char c);
No* arv_busca_no(No* a, char c);

///QUEST�O 3
int tamanho(Arv* raiz);
void num_nodes(No*a, int *ptr);

///QUEST�O 9
void esta_cheia(Arv* raiz);
