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