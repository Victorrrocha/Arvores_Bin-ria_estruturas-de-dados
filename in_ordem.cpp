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
        if(p != NULL)
        {
            pilha.push(p);
            p = p->esq;
        }
        else
        {
            p = pilha.top();
            printf("%c\t", p->info);
            pilha.pop();
            p = p->dir;
        }
    }
}
