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

// funções gráficas
void menus(int tipo);

// rotas do menu
void menu_inicial();
void menu_lista();
void menu_inserir();
void menu_remover();
void menu_buscar();
void menu_exibir();
int menu_sair();
void menu_inserir_meio();
void menu_remover_meio();
void menu_alterar_item();

void menu_inserir();

int main(){
    // chamada do principal
    menu_inicial();
    // retorna 
    return 0;
}

void menus(int tipo){
    // limpa a tela
    system("clear");
    // constrói o cabeçalho
    printf(
        BY
        " __________________________________________________________________________\n"
        "|                       _    ___ ___ _____ _                               |\n"
        "|                      | |  |_ _/ __|_   _/_\\                              |\n"
        "|                      | |__ | |\\__ \\ | |/ _ \\                             |\n"
        "|                      |____|___|___/ |_/_/ \\_\\                            |\n"
        "|__________________________________________________________________________|\n"
        "| Version:V1.0.0         LINEAR ESTATICA TESTE      @autor:michael thierry |\n"
        "|⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻|\n"
        NONE
    );
    // de acordo com a opção passada cria o menu abaixo
    switch(tipo){
        case 0:
            printf(
                BY
                "|__________________________________________________________________________|\n"
                "|                            MENU  PRINCIPAL                               |\n"
                "|__________________________________________________________________________|\n"
                "|  [1] |- CRIAR LISTA......................................................|\n"
                "|  [0] |- SAIR.............................................................|\n"
                "|______|___________________________________________________________________|\n\n"
                "@> Digite o número da sua opção:"
                NONE
            );
            break;
        case 1:
            printf(
                BY
                "|__________________________________________________________________________|\n"
                "|                              MENU  LISTA                                 |\n"
                "|__________________________________________________________________________|\n"
                "|  [1] |- INSERIR UM ITEM NA LISTA.........................................|\n"
                "|  [2] |- REMOVER UM ITEM DA LISTA.........................................|\n"
                "|  [3] |- EXIBIR ITEM DA LISTA.............................................|\n"
                "|  [4] |- BUSCAR ITEM DA LISTA.............................................|\n"
                "|  [0] |- SAIR.............................................................|\n"
                "|______|___________________________________________________________________|\n\n"
                "@> Digite o número da sua opção:"
                NONE  
            );
            break;
        case 2:
            printf(
                BY
                "|__________________________________________________________________________|\n"
                "|                UMA LISTA FOI CRIADA, DESEJA LIBERAR?                     |\n"
                "|__________________________________________________________________________|\n"
                "|  [1] |- NAO..............................................................|\n"
                "|  [0] |- SIM..............................................................|\n"
                "|______|___________________________________________________________________|\n\n"
                "@> Digite o número da sua opção:"
                NONE
            );
            break;
        case 3:
            printf(
                BY
                "|__________________________________________________________________________|\n"
                "|                       INSERIR UM ELEMENTO NA LISTA                       |\n"
                "|__________________________________________________________________________|\n"
                "|  [1] |- NO INICIO DA LISTA...............................................|\n"
                "|  [2] |- NO MEIO DA LISTA.................................................|\n"
                "|  [3] |- NO FIM DA LISTA..................................................|\n"
                "|  [0] |- VOLTAR...........................................................|\n"
                "|______|___________________________________________________________________|\n\n"
                "@> Digite o número da sua opção:"
                NONE
            );
            break;
        case 4:
            printf(
                BY
                "|__________________________________________________________________________|\n"
                "|                      REMOVER UM ELEMENTO DA LISTA                        |\n"
                "|__________________________________________________________________________|\n"
                "|  [1] |- DO INICIO DA LISTA...............................................|\n"
                "|  [2] |- DO MEIO DA LISTA.................................................|\n"
                "|  [3] |- DO FIM DA LISTA..................................................|\n"
                "|  [0] |- VOLTAR...........................................................|\n"
                "|______|___________________________________________________________________|\n\n"
                "@> Digite o número da sua opção:"
                NONE
            );
            break;
        case 5:
            printf(
                BY
                "|__________________________________________________________________________|\n"
                "|                      BUSCAR UM ELEMENTO NA LISTA                         |\n"
                "|__________________________________________________________________________|\n"
                "|  [1] |- POR POSIÇÃO NA LISTA.............................................|\n"
                "|  [2] |- POR IFORMAÇÃO NO ITEM............................................|\n"
                "|  [0] |- VOLTAR...........................................................|\n"
                "|______|___________________________________________________________________|\n\n"
                "@> Digite o número da sua opção:"
                NONE
            );
            break;
        case 6:
            printf(
                BY
                "|__________________________________________________________________________|\n"
                "|                  DESEJA ALTERAR INFORMAÇÕES DO ITEM                      |\n"
                "|__________________________________________________________________________|\n"
                "|  [1] |- SIM..............................................................|\n"
                "|  [0] |- NÃO..............................................................|\n"
                "|______|___________________________________________________________________|\n\n"
                "@> Digite o número da sua opção:"
                NONE
            );
            break;
        case 7:
            printf(
                BY
                "|__________________________________________________________________________|\n"
                "|                      INSERINDO NO MEIO DA LISTA                          |\n"
                "|__________________________________________________________________________|\n"
                "|  [1] |- INSERIR ITEM NO INDICE...........................................|\n"
                "|  [2] |- INSERIR ITEM EM ORDEM............................................|\n"
                "|  [0] |- VOLTAR...........................................................|\n"
                "|______|___________________________________________________________________|\n\n"
                "@> Digite o número da sua opção:"
                NONE
            );
            break;
        case 8:
            printf(
                BY
                "|__________________________________________________________________________|\n"
                "|                       REMOVENDO NO MEIO DA LISTA                         |\n"
                "|__________________________________________________________________________|\n"
                "|  [1] |- REMOVER ITEM DO INDICE...........................................|\n"
                "|  [0] |- REMOVER ITEM PELA INFORMAÇÃO.....................................|\n"
                "|  [0] |- VOLTAR...........................................................|\n"
                "|______|___________________________________________________________________|\n\n"
                "@> Digite o número da sua opção:"
                NONE
            );
            break;
        default:
            printf(
                BY
                "|⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻ERRO⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻|\n"
                "|__________________________________________________________________________|\n"
                NONE
            );
    }
}

void menu_inicial(){
    // variavel de controle
    int opcao = 0;
    // laço do menu principal
    do{
        // exibe menu principal
        menus(0);
        // pega a opção do usuario
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                menu_lista();
                break;
            case 0:
                printf(BG"@> Até mais!\n"NONE);
                break;
            default:
                printf(BR"@> Opcao Invalida, digite novamente!\n"NONE);
        }
    }while(opcao != 0);
}

void menu_lista(){
    // criando a lista
    Lista *lista = lista_criar();
    // verifica se alocou lista
    if(lista != NULL){
        // varivel de opcao
        int opcao = 0;
        do{
            // exibe o menu
            menus(1);
            // opções
            scanf("%d", &opcao);
            switch(opcao){
                case 1:
                    menu_inserir();
                    break;
                case 2:
                    menu_remover();
                    break;
                case 3:
                    menu_exibir();
                    
                    break;
                case 4:
                    menu_buscar();
                    break;
                case 0:
                    opcao = menu_sair();
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

int menu_sair(){
    // opcao uma lista
    int opcao = 0;
    do{
        
        // exibe menu
        menus(2);
        scanf("%d", &opcao);
        switch(opcao){
            case 0:
                return 0;
            case 1:
                return 1;
            default:
                printf("@> Opcao invalida, digite novamente!\n");
        }

    }while(opcao != 0);
}

void menu_inserir(){
    int opcao = 0;
    do{
        // exibe menu
        menus(3);
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                printf(BG"@> Inserido no inicio\n"NONE);
                break;
            case 2:
                menu_inserir_meio();
                break;
            case 3:
                printf(BG"@> Inserido no fim\n"NONE);
                break;
            case 0:
                opcao = 0;
                break;
            default:
                break;
        }

    }while(opcao != 0);
}

void menu_remover(){
    int opcao = 0;
    do{
        // exibe menu
        menus(4);
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                printf(BG"@> Removido\n"NONE);
                break;
            case 2:
                menu_remover_meio();
                break;
            case 3:
                printf(BG"@> Removido\n"NONE);
                break;
            case 0:
                opcao = 0;
                break;
            default:
                break;
        }

    }while(opcao != 0);
}

void menu_buscar(){
    int opcao = 0;
    do{
        // exibe menu
        menus(5);
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                menu_alterar_item();
                break;
            case 2:
                menu_alterar_item();
                break;
            case 0:
                opcao = 0;
                break;
            default:
                break;
        }

    }while(opcao != 0);
}

void menu_exibir(){
    printf(BG"@> mostra a lista\n"NONE);
}

void menu_inserir_meio(){
    int opcao = 0;
    do{
        // exibe menu
        menus(7);
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                printf(BG"@> inserir no indice\n"NONE);
                break;
            case 2:
                printf(BG"@> inserir em ordem\n"NONE);
                break;
            case 0:
                opcao = 0;
                break;
            default:
                break;
        }

    }while(opcao != 0);
}

void menu_remover_meio(){
    int opcao = 0;
    do{
        // exibe menu
        menus(8);
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                printf(BG"@> Remover do indice\n"NONE);
                break;
            case 2:
                printf(BG"@> Remover com info\n"NONE);
                break;
            case 0:
                opcao = 0;
                break;
            default:
                break;
        }

    }while(opcao != 0);
}

void menu_alterar_item(){
    int opcao = 0;
    do{
        // exibe menu
        menus(6);
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                printf(BG"@> sim\n"NONE);
                break;
            case 0:
                opcao = 0;
                break;
            default:
                break;
        }

    }while(opcao != 0);
}