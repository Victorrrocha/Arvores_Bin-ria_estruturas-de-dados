#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "arvore.h"

using namespace std;

int main()
{
    Arv* oak = arv_cria(arv_cria_no('a',
                                     arv_cria_no('b',
                                                  arv_cria_no('z', NULL, NULL)
                                                 , arv_cria_no('d',NULL, NULL)
                                                  ),
                                     arv_cria_no('c',
                                                 arv_cria_no('e', NULL, NULL),
                                                 arv_cria_no('f', NULL, NULL)
                                                 )
                                     )
                        );
    Arv* acacia = arv_cria(arv_cria_no(' ', NULL, NULL));

    //largura(oak);
    //printf("\n");
    //pre_ordem(oak);
    //printf("\n");
    //in_ordem(oak);
    //esp_arv(oak, acacia);
    //pre_ordem(oak);
    //printf("\n");
    //pre_ordem(acacia);
    //printf("folhas: %d\n", numero_folhas(oak));
    eh_binaria(oak);
}
