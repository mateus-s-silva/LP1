#include <iostream>
#include "fatorial.h"
#include "primalidade.h"

/**

    @file main.cpp
    @brief Programa que lê um valor inteiro e retorna o maior número primo inteiro anterior ao valor do fatorial desse número.
    @author Mateus Sousa da Silva
    @author Matrícula: 20220046908
    */

int main(){

    int number, valorFatorial, valorPrimo;

    std::cin >> number;

    valorFatorial = fatorial(number);
    valorPrimo = primalidade(valorFatorial - 1);

    std::cout << valorPrimo << std::endl;

    return 0;
}
