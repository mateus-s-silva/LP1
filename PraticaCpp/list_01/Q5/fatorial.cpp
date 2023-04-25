#include "fatorial.h"


/**
 * @brief Calcula o fatorial de um número inteiro não negativo.
 *
 * Esta função calcula o fatorial de um número inteiro não negativo n.
 *
 * @param n O número para o qual se deseja calcular o fatorial.
 *
 * @return O fatorial de n.
 *
 * @note A função assume que n é um número inteiro não negativo.
 */


int fatorial(int n){
    if(n == 1){
        return 1;
    }
    else{
        return n * fatorial(n-1);
    }
}