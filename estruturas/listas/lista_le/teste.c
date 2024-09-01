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
void teste_inserir_dados();

int main(){
    
    teste_inserir_dados();

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

void teste_inserir_dados(){
    // criando item
    Item *item = item_criar();
    if(item != NULL){
        printf("Item criado com sucesso!\n");
    }
    // exibe o dados de inicialização do item
    item_exibir_dados(item);
    
    // inserindo codigo
    item_inserir_codigo(item, 10);
    item_exibir_dados(item);

    // inserindo nome
    item_inserir_nome(item, "Sabao em po");
    item_exibir_dados(item);

    // inserindo valores
    item_inserir_valor(item, 10.50);
    item_exibir_dados(item);

    // inserindo dados
    item_inserir_dados(item, 20, "Alface", 15.0);
    item_exibir_dados(item);

    // excluido intem
    item_excluir(item);
}
