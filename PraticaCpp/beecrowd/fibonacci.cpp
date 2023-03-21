#include <iostream>

/*Faça um programa que leia um valor e apresente o número de Fibonacci correspondente a este valor lido. 
Lembre que os 2 primeiros elementos da série de Fibonacci são 0 e 1 e cada próximo termo é a soma dos 2 
anteriores a ele. Todos os valores de Fibonacci calculados neste problema devem caber em um inteiro de 
64 bits sem sinal.*/

// Fib(0) = 0;
// Fib(1) = 1;

void feedFiboVector(long long int vector[60]){
    vector[0] = 0;
    vector[1] = 1;
    for(int i = 2; i <= 60; i++){
        vector[i] = vector[i-1] + vector[i-2];
    }
}

int main(){

    int count, fiboIndex;
    long long int fiboVector[60];
    feedFiboVector(fiboVector);

    std::cin >> count;

    for(int i = 0; i < count; i++){
        std::cin >> fiboIndex;
        std::cout << "Fib(" << fiboIndex << ") = " << fiboVector[fiboIndex] << std::endl;
    }
    

    return 0;
}