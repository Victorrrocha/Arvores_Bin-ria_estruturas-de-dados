#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "arvore.h"
#include <stack>

using namespace std;

void in_ordem(Arv*a)
{
    interativo_in(a->raiz);
}

void interativo_in(No*a)
{
    No *p = a;
    stack<No*> pilha;
    while(p || !pilha.empty())
    {
        while(p->esq != NULL)
        {
            pilha.push(p->esq);
            p = pilha.top();
        }

        if(p->esq == NULL && p->dir != NULL)
        {
            printf("%c\t", p->info);
            pilha.pop();
            pilha.push(p->dir);
            p = pilha.top();
        }
        if(p->esq == NULL && p->dir == NULL)
        {
            pilha.pop();
            p = pilha.top();
            printf("%c\t", p->info);
        }
    }
}
