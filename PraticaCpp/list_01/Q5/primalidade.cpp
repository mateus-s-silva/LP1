#include "primalidade.h"



/**
 * @file primalidade.cpp
 * @brief Verifica se um número é primo.
 *
 * Esta função verifica se um número inteiro dado n é primo.
 *
 * @param n O número a ser verificado.
 *
 * @return true se o número for primo, false caso contrário.
 *
 * @note A função usa um laço para verificar se o número é divisível por mais de dois números.
*/

bool isPrimo(int n){
    int aux = 0;
    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            aux++;
        }
    }

    if(aux == 2){
        return true;
    }

    else{
        return false;
    }
}


/**
 * @brief Encontra o maior número primo menor ou igual a um número dado.
 *
 * Esta função encontra o maior número primo menor ou igual a um número dado n, utilizando a função `isPrimo`.
 *
 * @param n O número para o qual se deseja encontrar o maior número primo menor ou igual.
 *
 * @return O maior número primo menor ou igual a n. Se nenhum número primo for encontrado, retorna 0.
 */


int primalidade(int n){
     if(isPrimo(n)==true){
            return n;
        }
    else{
        return primalidade(n-1);
    }

}