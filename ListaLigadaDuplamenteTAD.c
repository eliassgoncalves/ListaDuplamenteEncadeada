/*
*
* Computer Science Section
* Faculdades Doctum de Caratinga
* Caratinga, MG, Brazil
* Feb. 20, 2020
* author: Elias Goncalves
* email: falarcomelias@gmail.com
* Licensed under the Apache License, Version 2.0
*
*/

#include "ListaLigadaDuplamenteTAD.h" // Incluir biblioteca ListaDuplamenteLigadaTAD.h

// Implementação do nó da lista
struct elemento{
    int dado; // Item do tipo int
    struct elemento *proximo; // Ponteiro do tipo elemento que apontará para o próximo elemento da lista
    struct elemento *anterior; // Ponteiro do tipo elemento que apontará para o elemento anterior da lista
};

// Implementação da Lista duplamente encadeada
struct lista_dupla{
    NO *inicio;
    NO *fim;
};


// OPERAÇÕES PARA MANIPULAR A LISTA:

/*
 * Criar o nó duplo da lista
 */
NO *criar_no( int dado ){
    NO *no = ( NO* ) calloc( 1, sizeof( NO ) ); // calloc já coloca proximo e anterior com NULL

    if( no == NULL ){
        printf("Sem memória para criar o nó...\n");
        exit(1);
    }
    no->dado = dado;
    return no;
}

/*
 * Criar a Lista para armazenar os nós duplos
 */
LISTA_DUPLA *criar_lista(){
    LISTA_DUPLA *L = ( LISTA_DUPLA* ) calloc( 1, sizeof( LISTA_DUPLA ) ); // caloc já coloca o inicio e o fim da lista com NULL
    
    if(LISTA_DUPLA == NULL){
        printf("Sem memória para criar a lista duplamente encadeada...\n");
        exit(1);
    }

    return L;
}

/*
 * Libera a memória alocada para o nó
 */
void destruir_no( NO **no ){    
    NO *aux = *no;

    if( aux != NULL ){
        free(aux);
        *no = NULL;
    }
}