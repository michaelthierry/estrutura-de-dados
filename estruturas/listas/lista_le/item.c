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
#include <string.h>
#include "item.h"
#include "constantes.h"

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


int item_inserir_dados(Item *item, int codigo, char *nome, float valor){
    // se o item nao for nulo
    if(item != NULL){
        // se o retorno for 0
        if(!item_inserir_codigo(item, codigo)){
            printf("Erro: ao inserir codigo do item\n");
            return 0;
        }
        if(!item_inserir_nome(item, nome)){
            printf("Erro: ao inserir nome do item\n");
            return 0;
        }
        if(!item_inserir_valor(item, valor)){
            printf("Erro: ao inserir valor do item\n");
            return 0;
        }
        // caso tudo de certo
        return 1;
    }
    return 0;
}

int item_inserir_codigo(Item *item, int novoCodigo){
    // tenta inserir o codigo no item
    if(item != NULL){
        item->codigo = novoCodigo;
        return 1;
    }
    return 0;
}

int item_inserir_nome(Item *item, char *novoNome){
    // tebta inserir o nome no item
    if(item != NULL){
        // copia o nome para item
        strncpy(item->nome, novoNome, sizeof(item->nome)-1);
        // garantindo que a string termine em \0
        item->nome[sizeof(item->nome) - 1] = '\0';
        // retorna
        return 1;
    }
    return 0;
}

int item_inserir_valor(Item *item, float novoValor){
    // tenta inseri o valor ao item
    if(item != NULL){
        item->valor = novoValor;
        return 1;
    }
    return 0;
}


int item_pegar_codigo(Item *item){
    // caso nao seja nulo retorna o codigo
    if(item != NULL){
        return item->codigo;
    }
    return -1;
}

char* item_pegar_nome(Item *item){
    // caso nao seja nulo retorna o nome
    if(item != NULL){
        return item->nome;
    }
    return NULL;
}

float item_pegar_valor(Item *item){
    // caso nao seja nulo retorna o valor
    if(item != NULL){
        return item->valor;
    }
    return -1.0;
}

int item_pegar_dados(Item *item, int *codigo, char **nome, float *valor){
    // caso nao seja nulo
    if(item != NULL){
        *codigo = item_pegar_codigo(item);
        *nome = item_pegar_nome(item);
        *valor = item_pegar_valor(item);
        return 1;
    }
    return 0;
}

void item_exibir_dados(Item *item){
    // tenta exibir os dados do item
    if(item != NULL){
        printf( BY
               "+--------------------------+\n"
               "|Codigo: %04i\n"
               "+--------------------------+\n"
               "|Nome:   %s\n"
               "|Valor:  %.2f\n"
               "+--------------------------+\n"NONE,
        item->codigo, 
        item->nome, 
        item->valor
        );
        return;
    }
    printf(BR"Erro:"NONE" não foi possivel exibir os dados do item");
    return;
}
