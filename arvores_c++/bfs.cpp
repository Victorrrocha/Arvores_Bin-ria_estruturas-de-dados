#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "arvore.h"
#include <queue>

using namespace std;

///Busca em largura/fila
void largura(Arv*a)
{
    largura_no(a->raiz);
}

void largura_no(No*a)
{
    No *p = NULL;
    queue<No*> fila;
    fila.push(a);
    while(!fila.empty())
    {
        p = fila.front();
        printf("%c\t", p->info);
        fila.pop();
        if(p->esq != NULL)
            fila.push(p->esq);
        if(p->dir != NULL)
            fila.push(p->dir);
    }
}
