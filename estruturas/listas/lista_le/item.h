/**
 * @file item.h
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief Arquivo de definicao do item
 * @version 0.1
 * @date 2024-09-01
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef ITEM_H
#define ITEM_H

// Definição do tipo Item
typedef struct item Item;

// CRIANDO E DESTRUINDO UM ITEM
/**
 * @brief Aloca memoria para um tipo Item.
 * Inicializa os campos:
 * -codigo: 0
 * -nome: ""
 * -valor:0.00
 * @return Item*: a referencia de um item criado. 
 */
Item* item_criar();

/**
 * @brief Libera a memória alocada para um tipo Item.
 * 
 * @param item : ponteiro do tipo Item.
 */
void item_excluir(Item *item);

#endif