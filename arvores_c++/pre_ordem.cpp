#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "arvore.h"
#include <stack>

using namespace std;

void pre_ordem(Arv*a)
{
    interativo_pre(a->raiz);
}

void interativo_pre(No*a)
{
    No *p = NULL;
    stack<No*> pilha;
    pilha.push(a);
    while(!pilha.empty())
    {
        p = pilha.top();
        printf("%c\t", p->info);
        pilha.pop();
        if(p->dir != NULL)
            pilha.push(p->dir);
        if(p->esq != NULL)
            pilha.push(p->esq);
    }
}
