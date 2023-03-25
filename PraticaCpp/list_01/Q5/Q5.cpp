#include <iostream>
#include "fatorial.h"
#include "primalidade.h"



int main(){

    int number, valorFatorial, valorPrimo;

    std::cin >> number;

    valorFatorial = fatorial(number);
    valorPrimo = primalidade(valorFatorial - 1);

    std::cout << valorFatorial << std::endl;

    return 0;
}