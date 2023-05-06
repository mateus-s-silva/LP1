#include <iostream>
 
// Aluno: Mateus Sousa da Silva
// Matrícula: 20220046908

/**

 *  @file Q2.cpp
    @brief Encontra o menor valor em um vetor de inteiros

    @param vector O vetor de inteiros

    @param menorNumero O valor atual do menor número

    @param n O tamanho atual do vetor

    @return O menor valor encontrado no vetor

    Esta função recursiva encontra o menor valor em um vetor de inteiros.
    Se n é menor do que 0, a função retorna o valor de menorNumero.
    Caso contrário, se o valor no índice n do vetor é menor do que menorNumero,
    a função atualiza o valor de menorNumero. Em seguida, chama a função novamente com
    n-1 e o valor atualizado de menorNumero.

*/

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

    /**

    @brief Função principal do programa

    Este programa recebe um vetor de inteiros do usuário e encontra o menor valor
    presente nele, usando a função findSmallestNumber. O resultado é exibido na tela.
*/
 
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