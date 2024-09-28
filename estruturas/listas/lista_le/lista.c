/**
 * @file lista.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief Lista Estatica Linear
 * @version 0.1
 * @date 2024-09-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/* Bibliotecas utilizadas */
#include <stdio.h>
#include <stdlib.h>
#include "constantes.h"
#include "item.h"
#include "lista.h"

/*Definindo estrutura*/
struct lista{
    int quantidade;
    Item *elementos[MAX];
};

Lista* lista_criar(){
    // tenta aloca memoria
    Lista* lista = malloc(sizeof(Lista));
    // verifica alocação
    if(lista != NULL){
        lista->quantidade = 0;
    }
    // retorna
    return lista;
}

void lista_liberar(Lista *lista){
    // libera alocação da lista
    free(lista);
}

int lista_existe(Lista *lista){
    // verifica se a lista existe
    if(lista == NULL){
        return 0;
    }
    // caso contrario retorna
    return 1;
}

int lista_cheia(Lista *lista){
    // se a lista existe
    if(lista_existe(lista)){
        // verifica se a lista esta cheia
        return (lista->quantidade == MAX);
    }
    // caso contrario
    return -1;
}

int lista_vazia(Lista *lista){  
    // se a lista existe
    if(lista_existe(lista)){
        // verifica se esta fazia
        return (lista->quantidade == 0);
    }
    // caso contrario
    return -1;
}

int lista_tamanho(Lista *lista){
    // se a lista existir
    if(lista_existe(lista)){
        // retorna o tamanho da lista
        return lista->quantidade;
    }
    // caso contrario
    return -1;
}