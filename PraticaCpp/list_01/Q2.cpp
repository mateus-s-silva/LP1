#include <iostream>
 
// Aluno: Mateus Sousa da Silva
// Matrícula: 20220046908

// Implemente uma função recursiva que retorne o menor elemento em um vetor

int findSmallestNumber(int vector[], int menorNumero, int n){
    if(n < 0){
        return menorNumero;
    }
    else{ 
        if(vector[n] < menorNumero){
        menorNumero = vector[n];
        }
        return findSmallestNumber(vector, menorNumero, n - 1);
    }
}

int main() {
 
   int n, menorNumero;

   std::cin >> n; // le tamanho do vetor desejado

   int vector[n];

   for(int i = 0; i < n; i++){
    std::cin >> vector[i];
   }

   menorNumero = vector[n-1]; // assume o ultimo valor do vetor como menor valor
   menorNumero = findSmallestNumber(vector, menorNumero, n-2);

   std::cout << menorNumero << std::endl;

 
    return 0;
}