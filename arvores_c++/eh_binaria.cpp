#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "arvore.h"

void eh_binaria(Arv*a)
{
    int flag = 0;
    int *ptr = &flag;
    eh_binaria_no(a->raiz,ptr);
    if(flag > 0)
        printf("nao eh estritamente binaria\n");
    else
        printf("eh estritamente binaria\n");
}

void eh_binaria_no(No*a, int*ptr)
{
    if(a != NULL)
    {
    if((a->dir == NULL && a->esq != NULL) || (a->dir != NULL && a->esq == NULL))
    {
        ++*ptr;
    }

    eh_binaria_no(a->esq, ptr);
    eh_binaria_no(a->dir, ptr);
    }
}
