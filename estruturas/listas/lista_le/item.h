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

// INSERINDO DADOS EM UM ITEM
/**
 * @brief Insere valores em um novo item criado.
 * 
 * @param item 
 * @return int 
 */
int item_inserir_dados(Item *item, int codigo, char *nome, float valor);

/**
 * @brief Inserir um valor inteiro no campo codigo do item
 * 
 * @param item referencia do item a ser modificado
 * @param novoCodigo valor inteiro a ser atribido ao codigo
 * @return int (1) para sucesso e (0) para falha
 */
int item_inserir_codigo(Item *item, int novoCodigo);

/**
 * @brief Inserir um string no campo nome do Item
 * 
 * @param item referencia do item a ser modificado.
 * @param novoNome string a ser atribuida no nome.
 * @return int (1) para sucesso (0) para falha.
 */
int item_inserir_nome(Item *item, char *novoNome);

/**
 * @brief Inserir um valor float ao campo valor
 * 
 * @param item referencia para o item a ser modificado
 * @param novoValor valor flutuante a ser atribuido
 * @return int (1) para o sucesso (0) para falha
 */
int item_inserir_valor(Item *item, float novoValor);

// PEGANDO DADOS DE UM ITEM

/**
 * @brief Pega o codigo de um item passado
 * 
 * @param item referencia para um item passado
 * @return int >= 0 em caso de sucesso, < 0 se der falha
 */
int item_pegar_codigo(Item *item);

/**
 * @brief Pega o nome de um item passado
 * 
 * @param item referencia para um item passado.
 * @return char* referencia para o nome do item, retorna NULL em caso de falha.
 */
char* item_pegar_nome(Item *item);

/**
 * @brief Pega o valor de um item passado.
 * 
 * @param item referencia do item passado.
 * @return float (0.0) para erro, e > (0.0) para sucesso. 
 */
float item_pegar_valor(Item *item);

/**
 * @brief Pegar os dados de um item e coloca em uma referencia.
 * 
 * @param item referencia do item de onde se deseja acessar os dados.
 * @param codigo referencia para onde o codigo será passado.
 * @param nome refrencia para onde o nome é passado.
 * @param valor referencia para onde o valor é passado.
 * @return int (1) para sucesso (0) para falha
 */
int item_pegar_dados(Item *item, int *codigo, char **nome, float *valor);

// EXIBINDO UM ITEM
/**
 * @brief Exibe todas as informações do item passado
 * 
 * @param item referencia do item a ser exibido
 */
void item_exibir_dados(Item *item);

#endif