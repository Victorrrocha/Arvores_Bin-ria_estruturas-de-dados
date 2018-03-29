#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int main()
{

    Arv* oak = arv_cria(arv_cria_no('a',
                                     arv_cria_no('b',
                                                  NULL, arv_cria_no('d',NULL, NULL)
                                                  ),
                                     arv_cria_no('c',
                                                 arv_cria_no('e', NULL, NULL),
                                                 arv_cria_no('f', NULL, NULL)
                                                 )
                                     )
                        );

    imprime_arv(oak, 1);
    tamanho(oak);


    return 0;
}
