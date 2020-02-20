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

#ifndef _LISTA_LIGADATAD_DUPLAMENTE_H_INCLUDED_
#define _LISTA_LIGADATAD_DUPLAMENTE_H_INCLUDED_

// Incluindo as principais bibliotecas a serem usadas no projeto
#include<locale.h> // Para configurações de idioma:
#include <stdio.h> // Para scanf, printf, fgets, gets
#include <string.h> // Para strcpy
#include <stdlib.h> // Para exit e malloc


/*
 * Definindo o tipo abstrato a ser armazenado na lista. 
 * A implementação desse tipo definido pelo usuário pode ser feita em arquivo separado ItemTAD.c ou ProdutoTAD.c com sua
 * respectiva biblioteca ItemTAD.h ou ProdutoTAD.h
*/

// Define o nó da Lista:
typedef struct elemento *NO;

// Define a lista duplamente encadeada
typedef struct lista_dupla *LISTA_DUPLA;


// Protótipos
NO *criar_no( int dado );
void destruir_no( NO **no );
LISTA_DUPLA *criar_lista();

#endif // _LISTA_LIGADATAD_H_INCLUDED_
