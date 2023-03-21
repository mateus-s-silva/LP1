#include <iostream>
#include <iomanip>

// Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. 
// Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão abaixo 
// da diagonal Secundária da matriz, conforme ilustrado abaixo (área verde).

// 'S' = SOMA
// 'P' = PRODUTO

int main(){

    float matriz[12][12], valorFinal;
    char operation;

    std::cout << std::fixed << std::showpoint << std::setprecision(1);

    std::cin >> operation;

    for(int l = 0; l < 12; l++){
        for(int c = 0; c < 12; c++){
            std::cin >> matriz[l][c]; 
        }
    }

    if(operation == 'S'){
        valorFinal = 0;
        for(int l = 0; l < 12; l++){
            for(int c = 1; c <= l; c++){
                valorFinal += matriz[l][12-c];
            }
        }
        std::cout << valorFinal << std::endl;
    }

    else if(operation == 'M'){
        valorFinal = 0;
        for(int l = 0; l < 12; l++){
            for(int c = 1; c <= l; c++){
                valorFinal += matriz[l][12-c];
            }
        }
        valorFinal /= 66;
        std::cout << valorFinal << std::endl;
    }
    

    return 0;
}