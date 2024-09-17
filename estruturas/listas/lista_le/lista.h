/**
 * @file lista.h
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief Prototipo de funções da Lista tipo Estatica Linear
 * @version 0.1
 * @date 2024-09-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef LISTA_H
#define LISTA_H

/*Estrutura da lista*/
typedef struct lista Lista;

// ALOCANDO E DESALOCANDO A LISTA 

/**
 * @brief Aloca memoria para uma lista
 * 
 * @return Lista* retorna uma referencia para uma lista alocada
 */
Lista* lista_criar();

/**
 * @brief Libera memoria alocada para a lista
 * 
 * @param lista referencia da lista a ser desalocada.
 */
void lista_liberar(Lista *lista);

#endif