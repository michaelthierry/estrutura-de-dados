/**
 * @file teste.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief Arquivo de teste
 * @version 0.1
 * @date 2024-09-01
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include "item.h"

void teste_criar_excluir_item();

int main(){
    
    teste_criar_excluir_item();

    return 0;
}

void teste_criar_excluir_item(){
    // criando item
    Item *item = item_criar();
    if(item != NULL){
        printf("Item criado com sucesso!\n");
    }
    // excluido intem
    item_excluir(item);

}