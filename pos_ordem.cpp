#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "arvore.h"
#include <stack>

using namespace std;

void pos_ordem(Arv*a)
{
    interativo_pos(a->raiz);
}

void interativo_pos(No*a)
{
    No *p = NULL;
    No *r = NULL;
    stack<No*> pilha;
    stack<No*> pilha_aux;
    pilha.push(a);
    while(!pilha.empty())
    {
        p = pilha.top();
        //printf("%c\t", p->info);
        pilha_aux.push(p);
        pilha.pop();
        if(p->esq != NULL)
            pilha.push(p->esq);
        if(p->dir != NULL)
            pilha.push(p->dir);

    }
    if(pilha.empty())
    {
        while(!pilha_aux.empty())
        {
            r = pilha_aux.top();
            printf("%c\t", r->info);
            pilha_aux.pop();
        }
    }
}
