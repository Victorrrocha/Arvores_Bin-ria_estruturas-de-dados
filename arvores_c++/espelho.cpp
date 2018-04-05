#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "arvore.h"

///Tive ajuda do Ibukun

void esp_arv(Arv* original, Arv* copia)
{
    esp_no(original->raiz, copia->raiz);
}

void esp_no(No*original, No*copia)
{
    copia->info = original->info;

    if(original->esq != NULL)
    {
        No* novo = arv_cria_no('t',NULL, NULL);
        copia->dir = novo;
        esp_no(original->esq, copia->dir);
    }

    if(original->dir != NULL)
    {
        No* novo = arv_cria_no('t',NULL, NULL);
        copia->esq = novo;
        esp_no(original->dir, copia->esq);
    }
}
