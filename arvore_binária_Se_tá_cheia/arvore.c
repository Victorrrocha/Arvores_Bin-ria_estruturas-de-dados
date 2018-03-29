#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "arvore.h"


Arv* arv_cria(No* raiz){
    Arv* arv = (Arv*) malloc(sizeof(Arv));
    arv->raiz = raiz;
    return arv;
}

No* arv_cria_no(char info, No*sae, No*sad)
{
    No* p = (No*) malloc(sizeof(No));
    p->info = info;
    p->esq = sae;
    p->dir = sad;

    return p;
}

///CHAMA IMPRIME
void imprime_arv(Arv* arv, int escolha)
{
    if(escolha == 1)
    {
        imprime_no_pre(arv->raiz);
    }

    else if(escolha == 2)
    {
        imprime_no_in(arv->raiz);
    }
    else if(escolha == 3)
    {
        imprime_no_pos(arv->raiz);
    }
    else
        printf("valor invalido somente [1-3]\n");
    printf("\n");
}

///IMPRIME PRE
void imprime_no_pre(No* a)
{

    if(a != NULL)
    {
        printf("%c\n", a->info);
        imprime_no_pre(a->esq);
        imprime_no_pre(a->dir);
    }

}
///IMPRIME IN
void imprime_no_in(No* a)
{
    if(a != NULL)
    {
        imprime_no_in(a->esq);
        printf("%c\n", a->info);
        imprime_no_in(a->dir);
    }
}
///IMPRIME POS
void imprime_no_pos(No*a)
{
    if(a != NULL)
    {
        imprime_no_pos(a->esq);
        imprime_no_pos(a->dir);
        printf("%c\n", a->info);
    }
}

void arv_imprime_formatado(Arv* a){
    arv_imprime_formatado_no(a->raiz);
    printf("\n");
}

void arv_imprime_formatado_no(No*a)
{
    printf("<");
    if(a != NULL)
    {
        printf("%c", a->info);
        arv_imprime_formatado_no(a->esq);
        arv_imprime_formatado_no(a->dir);
    }
    printf(">");
}

void libera(Arv*a)
{
    libera_no(a->raiz);
    free(a);
}

void libera_no(No*a)
{
    if(a != NULL)
    {
        libera_no(a->esq);
        libera_no(a->dir);
        free(a);
    }
}

int arv_pertence(Arv* a, char c)
{
    return arv_pertence_no(a->raiz, c);
}

int arv_pertence_no(No* a, char c)
{
    if(a == NULL)
        return 0;
    else
        return c== a->info ||
        arv_pertence_no(a->esq, c) ||
        arv_pertence_no(a->dir, c);
}

No* arv_busca(Arv* a, char c)
{
    return arv_busca_no(a->raiz, c);
}

No* arv_busca_no(No* a, char c)
{
    if(a == NULL)
        return NULL;
    else if(a->info == c)
        return a;
    else
    {
        No* no = arv_busca_no(a->esq, c);
        if(no != NULL)
            return no;
        else
            return arv_busca_no(a->dir, c);
    }
}


int altura(Arv*a)
{
    if(a == NULL)
    {
        return -1;
    }
    else
        altura_no(a->raiz);
}

int altura_no(No*b)
{
    if(b == NULL)
        return -1;

    else
    {
        int he = altura_no(b->esq);
        int hd = altura_no(b->dir);

        if(he < hd)
            return hd + 1;
        else
            return he + 1;
    }
}

///QUESTÃO 03
int tamanho(Arv*a)
{
    int nodes = 0;
    int* ptr_nodes = &nodes;

    if(a!= NULL)
    {
        num_nodes(a->raiz, ptr_nodes);
        return nodes;
    }
    else
        return -1;
}

void num_nodes(No*a, int *ptr)
{
    if(a != NULL)
    {
        num_nodes(a->esq, ptr);
        num_nodes(a->dir, ptr);
        ++*ptr;
    }
}

void esta_cheia(Arv*a)
{
    int cheia;

    cheia = (pow(2, (altura(a) + 1)) - 1);

    if(tamanho(a) == cheia)
        printf("Estah cheia\n");
    else
        printf("Nao estah cheia\n");
}
