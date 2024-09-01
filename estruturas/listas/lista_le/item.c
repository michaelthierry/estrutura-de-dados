/**
 * @file item.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief Arquivo de contrucao do item
 * @version 0.1
 * @date 2024-09-01
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include "item.h"

struct item {
    int codigo;
    char nome[150];
    float valor;
};

Item* item_criar(){
    // tenta alocar memoria para o item
    Item* item = malloc(sizeof(Item));
    // caso o item nao seja nulo deve ser inicializado
    if(item != NULL){
        item->codigo = 0;
        item->nome[0] = '\0';
        item->valor = 0.0;
    }
    // retorna o item
    return item;
}

void item_excluir(Item *item){
    // libera a memoria do item
    free(item);
    return;
}