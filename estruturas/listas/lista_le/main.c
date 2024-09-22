/**
 * @file main.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief Arquivo principal
 * @version 0.1
 * @date 2024-09-01
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include "item.h"
#include "lista.h"
#include "constantes.h"
// Teste para o item
void teste_criar_excluir_item();
void teste_inserir_dados();
void teste_pegar_dados();
//Teste para a lista
void teste_criar_excluir_lista();

int menu_principal();
void interface_lista();
int sair_opcao_lista();

int main(){
    // chamada do principal
    menu_principal();
    // retorna 
    return 0;
}

int menu_principal(){
    // variavel de controle
    int opcao = 0;
    // laço do menu principal
    do{
        // exibindo cabeçalho
        printf(
            BY
            "________________________\n"
            " _    ___ ___ _____ _\n"   
            "| |  |_ _/ __|_   _/_\\ \n"  
            "| |__ | |\\__ \\ | |/ _ \\ \n" 
            "|____|___|___/ |_/_/ \\_\\ \n"
            "________________________\n"
            "  LINEAR ESTATICA TEST  \n"
            "⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻\n"
            "+-----------------------+\n"
            "|        MENU           |\n"
            "+-----------------------+\n"
            "| 1 | - CRIAR LISTA     |\n"
            "| 0 | - SAIR            |\n"
            "+-----------------------+\n\n"
            BG
            "@> Digite o número da sua opção:"
            NONE
        );
        // lendo opção do usuario 
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                printf(BG"@> Criando a lista...\n"NONE);
                interface_lista();
                break;
            case 0:
                printf(BG"@> Até mais!\n"NONE);
                break;
            default:
                printf(BR"@> Opcao Invalida, digite novamente!\n"NONE);
        }

    }while(opcao != 0);
    return 0;
}

void interface_lista(){
    // criando a lista
    Lista *lista = lista_criar();
    // verifica se alocou lista
    if(lista != NULL){
        // varivel de opcao
        int opcao = 0;
        // mensagem de lista criada
        printf(BG"@> Lista criada!\n"NONE);
        // menu das funções da lista
        do{
            printf(BY
                "+---------------------------+\n"
                "|       OPCOES DA LISTA     |\n"
                "+---------------------------+\n"
                "|1|-INSERIR UM ITEM NA LISTA|\n"
                "|2|-REMOVER UM ITEM DA LISTA|\n"
                "|3|-EXIBIR ITEM DA LISTA    |\n"
                "|4|-BUSCAR ITEM DA LISTA    |\n"
                "|0|-VOLTAR                  |\n"
                "+---------------------------+\n"
                BG
                "@> Digite o numero da sua opcao:"
                NONE
            );
            scanf("%d", &opcao);
            switch(opcao){
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 0:
                    opcao = sair_opcao_lista();
                    break;
                default:
                    printf(BR"@> Opcao invalida!\n"NONE);
            }
        }while(opcao != 0);
    }else{
        printf(BR"@> Erro ao criar a lista!\n"NONE);
    }
    // excluir a lista
    lista_liberar(lista);
    printf(BG"@> Lista liberada!\n"NONE);
}

int sair_opcao_lista(){
    // opcao uma lista
    int opcao = 0;
    do{
        printf(
            BY
            "+--------------------------------------+\n"
            "| UMA LISTA FOI CRIADA, DESEJA LIBERAR?|\n"
            "+--------------------------------------+\n"
            "|1|-NAO                                |\n"
            "|0|-SIM                                |\n"
            "+--------------------------------------+\n"
            BG
            "@> Digite o numero da sua opção:"
            NONE
        );
        scanf("%d", &opcao);
        switch(opcao){
            case 0:
                return 0;
            case 1:
                return 1;
            default:
                printf("@> Opcao invalida, digite novamente!\n");
        }

    }while(opcao = 0);
    
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

void teste_pegar_dados(){
    int codigo;
    char *nome;
    float valor;
    // criando item
    Item *item = item_criar();
    if(item != NULL){
        printf("Item criado com sucesso!\n");
    }
    // inserindo dados
    item_inserir_dados(item, 10, "Sabao", 10.0);
    // pegando o codigo
    printf("codigo: %d\n", item_pegar_codigo(item));
    // pega o nome
    printf("nome: %s\n", item_pegar_nome(item));
    // pega o valor
    printf("valor: %.2f\n", item_pegar_valor(item));
    // pega todos os dados
    item_pegar_dados(item, &codigo, &nome, &valor);
    printf("cod:%d\nnom:%s\nval:%.2f\n", codigo, nome, valor);

}

void teste_criar_excluir_lista(){
    // variavel de opção
    int opcao;
    // criando a lista
    Lista *lista = lista_criar();
    // verifica se alocou lista
    if(lista != NULL){
        printf("Lista criada\n");
    }

    do{
        
        printf("Opt\n");
        scanf("%d", opcao);

    }while(opcao != 0);

    // excluir a lista
    lista_liberar(lista);
}